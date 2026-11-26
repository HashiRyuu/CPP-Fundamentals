#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void runningSum(istream& in, ostream& out)
{
  double maxsum = 0, sum = 0, value;
  out << "running sum = ";
  while(in >> value)
  {
     sum += value;
     if(sum > maxsum)
     {
        maxsum = sum;
     }
     
     out << sum << " ";
  }
  
  out << endl << "max sum = " << maxsum;
}

int main()
{
    istringstream in("3.25 4.5 -8.25 7.25 3.5 4.25 -6.5 5.25");
    runningSum(in, cout);
}
