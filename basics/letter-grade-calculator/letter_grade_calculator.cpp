/**
 *  @file letter_grade_calculator.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

//Gobal declaration of function; important, to be able use function needs to decalare
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */
int main()
{
	printTitle();//call function
	string letterGrade = getInput();//call function
	double points = letterToPoints(letterGrade);//call function
	printReport(points);//call function

    return 0;
}


//This function responsible for print title
void printTitle(){
  cout << "Grade calculator" << endl;
  cout << "-------------------------------" << endl;
}

//This function only for get the input
string getInput(){
  string letterGrade;
  cout << "Enter your letter grade: ";
  getline(cin, letterGrade);
  return letterGrade;
}

//This function is for checking and convert
double letterToPoints(stringIn letterGrade){
    double result;

	//check A input condition
    if (letterGrade == "A" || letterGrade == "A-" ) {
        result = 4.0;
		if (letterGrade == "A-") {
			result = 4.0 - 0.3;
		}
	}

	//check B input condition
	else if (letterGrade == "B" || letterGrade == "B-" || letterGrade == "B+") {
        result = 3.0;
		 if (letterGrade == "B-") {
		result = 3.0 - 0.3;
	    } else if (letterGrade == "B+"){
		result = 3.0 + 0.3;
	    }
	}

	//check C input condition
	 else if (letterGrade == "C" || letterGrade == "C-" || letterGrade == "C+") {
        result = 2.0;
		 if (letterGrade == "C-") {
		result = 2.0 - 0.3;
	    } else if (letterGrade == "C+"){
		result = 2.0 + 0.3;
	    }
	}

	//check D input condition
	 else if (letterGrade == "D" || letterGrade == "D-" || letterGrade == "D+") {
        result = 1.0;
		 if (letterGrade == "D-") {
		result = 1.0 - 0.3;
	    } else if (letterGrade == "D+"){
		result = 1.0 + 0.3;
	    }
	}

	//check F input condition
    else if (letterGrade == "F") {
        result = 0.0;
	}

	//check others invalid combination input condition
   else if (letterGrade == "A+" || letterGrade == "F+" || letterGrade == "F-") {
        result = INVALID_COMBINATION;
    }
    // Set result to INVALID_INPUT if none of the above conditions are met
    else {
        result = INVALID_INPUT;
    }

    return result;//returning the value

}

//This function is for orint report
void printReport(double points){
cout << "Grade value is [";

    // Check if the points are 0 or greater
    if (points >= 0.0) {
        // Print grade points with one decimal point
        cout << fixed << setprecision(1) << points;
    }
    // Check for INVALID_INPUT
    else if (points == INVALID_INPUT) {
        cout << "Invalid input";
    }
    // Check for INVALID_COMBINATION
    else if (points == INVALID_COMBINATION) {
        cout << "Invalid combination";
    }

    // Finish by printing "]" and a newline
    cout << "]" << endl;
}
