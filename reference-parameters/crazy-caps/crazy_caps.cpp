
#include <string>
using std::string;
string crazyCaps(string& s) {
    string original = s;
    size_t i = 0;

    while (i < original.size()) {
     
      // Convert characters at even indexes to lowercase
      if (original.at(i) >= 'A' && original.at(i) <= 'Z') {
          original.at(i) = original.at(i) - ('A' - 'a');
      }
      // Convert characters at odd indexes to uppercase
      if (original.at(i) >= 'a' && original.at(i) <= 'z') {
          original.at(i) = original.at(i) + ('A' - 'a');
      }
        
      i++;
    }

    return original;
}
