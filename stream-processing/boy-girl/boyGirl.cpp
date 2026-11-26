#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
/**
 *  Write the procedure boyGirl
 *  @param in the input stream to read from
 *  @param out the output stream to write to
 */
void boyGirl(istream& in, ostream& ou) {
    int sumBoys = 0;
    int sumGirls = 0;
    int value;
    int countBoys = 0;
    int countGirls = 0;
    string name;
    
    while (in >> name >> value) {
        if (countBoys == countGirls) {
            sumBoys += value;
            countBoys++;
        } else {
            sumGirls += value;
            countGirls++;
        }
    }
    
    int difference = abs(sumBoys - sumGirls);
    
    ou << countBoys << " boys, " << countGirls << " girls\n";
    ou << "Difference between boys' and girls' sums: " << difference << endl;
}
int main()
{
    istringstream in;
    in.str("Steve 3 Sylvia 7 Craig 14 Lisa 13 Brian 4 Charlotte 9 Jordan 6");
    boyGirl(in, cout);
    in.clear();
    in.str("Steve 3 Sylvia 7 Craig 14 Lisa 13 Brian 4 Charlotte 9 Jordan 10");
    boyGirl(in, cout);
    in.clear();
    in.str("Frank 12 Alexandra 8 Xandros 6 Kyrie 9 Luther 5 Electra 13 Benandre 7");
    boyGirl(in, cout);
    in.clear();
    in.str("Jason 1");
    boyGirl(in, cout);
    return 0;
}
