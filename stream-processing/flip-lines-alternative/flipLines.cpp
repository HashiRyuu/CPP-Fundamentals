#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void flipLines(istream& in, ostream& out)
{
  while(in)
  {
     string line, line2;
     if(getline(in, line))
     {
       if(getline(in, line2))
       {
          out << line2 << endl << line << endl;
       }else 
       {
          out << line;
       }
     }
  }
}

int main()
{
    istringstream in(
        "Twas brillig and the slithy toves\n"
        "did gyre and gimble in the wabe.\n"
        "All mimsey were the borogroves,\n"
        "and the mome raths outgrabe.\n"
        "\n"
        "\"Beware the Jabberwock, my son,\n"
        "the jaws that bite, the claws that catch,\n"
        "Beware the JubJub bird and shun\n"
        "the frumious bandersnatch.\"\n"
    );
    flipLines(in, cout);
}
