#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void printStrings(istream& in, ostream& out)
{
  string word;
  int repeat;
  while(in >> repeat >> word)
  {
     for(int i = 0; i < repeat; ++i)
     {
        out << word;
     }
     out << endl;
  }
}

int main()
{
    istringstream in("6 fun. 3 hello  10   <> 2      25   4 wow!");
    printStrings(in, cout);
}
