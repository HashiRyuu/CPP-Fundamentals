/**
 *  @file french_articles.cpp
 */
#include <string>
using namespace std;


string toFrenchGender(const string& country)
{
	string result;
    string islands = "iles";
    auto len = country.size();
    string last = country.substr(len - 2);
    string find = country.substr(0, 2);
    string plain = "Israel, Madagascar, Sri Lanka, Singapore, Monaco, Cuba, Cyprus.";
    string Masculine = "Belize, Cambodge, Mexique, Mozambique, Zaire, Zimbabwe.";


if(Masculine.find(country) != string::npos){
    result = "le " + country;
}else if(plain.find(country) != string::npos){
    result = "" + country;
}else if(country.substr(0, islands.length()) == islands || last == "es" ||last == "is"|| last == "os"|| last == "as"){
    result = "les " + country;
} else if (country.back() == 'e' || country.back() == 'o') {
        result = "la " + country;
        string vowels = "AEIOU";
        char first = country.front();

        if (vowels.find(first) != string::npos) {
            result = "l'" + country;
        }
    }
    else {
        string vowels = "AEIOU";
        char first = country.front();

        if (vowels.find(first) == string::npos) {
            result = "le " + country;
        }
        else {
            result = "l'" + country;
        }
    }

   return result;

}
