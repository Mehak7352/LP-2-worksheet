#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;

    cout << "Enter a number: ";
    while (cin >> number) {
        if (number % 8 == 0) {
            count++;
        } else {
            break;
        }
        cout << "Enter a number: ";
    }

    cout << "Total " << count << " numbers are valid." << endl;

    return 0;
}
