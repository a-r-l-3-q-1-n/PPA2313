#include "iostream"

using namespace std;

int main()
{
    int number, n;
    int listOfNumbers[]{};

    cout << "[+] Introduce numarul elemente: "; cin >> number;

    for (int iter = 0; iter < number; iter++) {
        cout << "[+] Populeaza lista: "; cin >> n;
        listOfNumbers[iter] = n;
    }

    cout << "[~] Elementele: ";
    for (int iter = 0; iter < number; iter++) {
        if (listOfNumbers[iter] % 2 == 0) {
            cout << listOfNumbers[iter] << " ";
            cout << listOfNumbers[iter] << " ";
        } else {
            cout << listOfNumbers[iter] << " ";
            cout << listOfNumbers[iter] << " ";
            cout << listOfNumbers[iter] << " ";
        }
    }


    return 0;

}