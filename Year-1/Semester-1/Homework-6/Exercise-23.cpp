#include "iostream"
#include "climits"

using namespace std;

int main() {

    int number, sum = 0, max = INT_MIN, min = INT_MAX;

    while (true) {
        cout<<"[+] Introduce numarul: "; cin >> number;

        sum += number;

        if (number > max) {
            max = number;
        }

        if (number < min) {
            min = number;
        }

        if (sum > 1000) {
            break;
        }

    }

    cout << "[~] Max: " << max << endl;
    cout << "[~] Min: " << min << endl;


    return 0;

}