/**
 *  @file unit_conversion.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int main()
{
    //Input: weight in ounces of one box of ceral
    //Output: Weight of box in tons and number of boxes in 1 ton
    //Algorithms: Weight in tons -> weight in ounces/ounces per ton
    //Algorithms: 1.0/weight of box in tons
    //Assuming: metric ton is 35273.92 onces

    //Heading
    cout<< "Cereal Box Calulator"<< endl;
    cout<<string(50, '-') << endl;

    //Input
    cout<< "Enter ounces per box of cereal: ";
    double ouncesPerBox;
    cin >> ouncesPerBox;

    //Processing
    const double kOuncesPerBox = 35273.92;
    double weightInTons = ouncesPerBox/ kOuncesPerBox;
    double boxesPerTon = 1.0/weightInTons;
    //Output

    cout<< "weight in metric tons, boxes per ton: [" << weightInTons<< ", " << boxesPerTon << "] " << endl;
    return 0;
}

/*
Cereal box calculator
---------------------------------
Enter ounce per box of ceral: 10
Weight in metric tons, boxes per ton: [0.000283496, 3527.39
]*/
