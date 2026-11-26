#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void stripHtmlTags(istream& in, ostream& out)
{
  char word;
  string result;
  bool check = true;
  while(in.get(word)){
     
      if(word == '<'){
         check = false;
      }else if(word == '>'){
         check = true;
         in.get(word);
      }
      
      if(check){
         out << word;
      }
  }
}

int main()
{
    ifstream in("webpage.html");
    stripHtmlTags(in, cout);
}
