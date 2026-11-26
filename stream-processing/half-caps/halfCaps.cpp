#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void halfCaps(istream& in, ostream& out)
{
  string word, word2;
  while(in)
  {
     if(in >> word){
     for(char& e : word) e = tolower(e);
     out << word << " ";
     }
     
     if(in >> word2){
     for(char& e : word2) e = toupper(e);
     out << word2 << " ";
     }
  }

}

int main()
{
    istringstream in("The QUick brown foX jumPED over the Sleepy student");
    halfCaps(in, cout);
}
