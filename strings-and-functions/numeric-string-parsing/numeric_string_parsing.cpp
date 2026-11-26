/**
 *  @file numeric_string_parsing.cpp
 */
#include <string>
#include <cctype>
using namespace std;


int sumNums(const string& s){
	int sum{0};
	int num{0};

for (size_t i{0}, len{s.size()} ; i < len ; ++i ){
	if(isdigit(s.at(i))){
		int digit = 0;
		digit = s.at(i) - '0';
		num = num * 10;
		num = num + digit;
	}else {
		sum = sum + num;
		num = 0;
	}
}
	sum += num;

	return sum;
}

// Usage example
#include <iostream>
int run_example()
{

	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

   return 0;
}
