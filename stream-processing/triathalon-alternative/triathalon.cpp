#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void triathalon(istream& in, ostream& out)
{
  string name;
  int s, b, r, winertime = 0;
  bool first = true;
  while(in >> name >> s >> b >> r)
  {
     int total = s + b + r;
     if(first)
     {
        out << name << ": " << total << " min" << endl;
        winertime = total;
        first = false;
     }else
     {
        out << name << ": " << total << " min (+" << total - winertime << " min)" << endl;
     }
  }
}

int main()
{
    istringstream in("Meghan 12 40 23 Bryan 16\n"
                    "42 20 Lori 14 41 29 Jessica 18\n"
                    "\n"
                    "       37 30 Toni 19   43\n"
                    "29 Tamara 17 42 34\n");
    triathalon(in, cout);
}
