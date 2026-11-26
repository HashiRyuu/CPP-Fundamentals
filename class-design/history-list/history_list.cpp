#include <iostream>
#include <vector>

using namespace std;

class HistoryList {
private:
    vector<int> values;
    vector<vector<int>> history;// is it like 2d or 3d treat them like that history[][]


public:
    // Constructor
    HistoryList() {}

    // Method to add a value to the list
    void addValue(int value) {
        values.push_back(value);
        history.push_back(values);
    }

    // Method to print the list
    void print() {
        cout << "List: ";
        for (int value : values) {
            cout << value << " ";
        }
        cout << endl;
    }

    // Method to print the history
    void printHistory() {
        cout << "History:" << endl;
        for (int i = 0; i < history.size(); ++i) {
            cout << "Step " << i + 1 << ": ";
            for (int value : history[i]) {
                cout << value << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    HistoryList list;

    // Add values to the list
    list.addValue(5);
    list.addValue(10);
    list.addValue(15);

    // Print the list
    list.print();

    // Print the history
    list.printHistory();

    return 0;
}
