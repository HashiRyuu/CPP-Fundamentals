#include <string>
using namespace std;
/**
 *  We are having a party with amounts of tea and candy. 
 *  Set the outcome of the party as "bad", "good" or "great". 
 *  A party is good if both tea and candy are at least 5. 
 *  However, if either tea or candy is at least double 
 *  the amount of the other one, the party is great. 
 *  However, in all cases, if either tea or candy is less 
 *  than 5, the party is always bad. 
 */
string tea_party(int tea, int candy)
{
    string outcome;
   
  if(tea > 5 && candy > 5){
     outcome = "good";
     if(tea >= 2 * candy || candy >= 2 * tea){
        outcome = "great";
     }
  } else{
     outcome = "bad";
  }
  
  

   return outcome;
}
