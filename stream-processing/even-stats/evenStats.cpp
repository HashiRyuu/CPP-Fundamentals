#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void evenStats(istream& in, ostream& out)
{
  int num;
  int count = 0;
  int sum = 0;
  int even = 0;
  while(in >> num)
  {
    count++;
    sum += num;
    if(num % 2 == 0)
    {
       even++;
    }
  }
  double precentage = (static_cast<double>(even) / count) * 100.0;
  out << count << " numbers, " << "sum = " << sum << endl;
  out << fixed << setprecision(2)<< static_cast<int>(even) 
      << " evens (" << precentage << "%)";
}

int main()
{
    istringstream in("5 7 2 8 9 10 12 98 7 14 20 22");
    evenStats(in, cout);
}
