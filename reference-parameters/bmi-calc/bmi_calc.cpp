   // Write your function here
double bmiCalc(double height, double weight, int& category) {

double bmi = (weight / (height * height)) * 703;

    if (bmi < 18.5) {
        category = 1;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        category = 2;
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        category = 3;
    } else {
        category = 4;
    }

    return bmi;
}



