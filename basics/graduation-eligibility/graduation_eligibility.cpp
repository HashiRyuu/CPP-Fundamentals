/**
 *  @file graduation_eligibility.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string getStatus(double gpa, int credit, int honor);

/**
 * @return 0 for success.
 */
int main()
{

    cout << "Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

string getStatus(double gpa, int credit, int honor){

//check if student qualified for graduation or not
if (credit >= 180 && gpa >= 2.0) {
        // check if student's gpa fall between 2.0 and 3.6
        if (gpa >= 2.0 && gpa < 3.6) {
            return "graduating";
        }
		/*check if student's gpa at least 3.6 or more
		and have fewer than 15 honors credits*/
		else if (gpa >= 3.6 && gpa < 3.8 && honor < 15) {
            return "cum laude";
        }
		/*check if student's gpa over or at least 3.8 or more
		with fewer than 15 honor credits*/
		else if (gpa >= 3.8 && honor < 15) {
            return "magna cum laude";
        }
		/*check if student's gpa fall between 3.6 and 3.8 but have more
		or equal to 15 hours credit*/
		else if (gpa >= 3.6 && gpa < 3.8 && honor >= 15) {
            return "magna cum laude";
        }
		/*check if student's gpa at least or more than 3.8 with at least
		or more than 15 hours credit*/
		else if (gpa >= 3.8 && honor >= 15) {
            return "summa cum laude";
        }
    }

    /*Return "not graduating" if the student's gpa and credit does
	not completed at least 180 credits with a GPA of at least 2.0*/
    return "not graduating";

}
