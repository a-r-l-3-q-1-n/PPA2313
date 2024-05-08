#include "iostream"
#include "climits"

using namespace std;

int main() {

    int n;
    int nn = 0;

    int elMAX = INT_MIN, posMAX;
    int elMIN = INT_MAX, posMIN;


    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int listOfNumbers[n];
    int modifiedList[n];

    for (int iter = 0; iter < n; iter++) {
        cout << "[+] Populeaza lista: "; cin >> listOfNumbers[iter];
    }


    // a)
    cout << endl << endl << "a) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }


    cout << endl << "a) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        if (listOfNumbers[iter] < 0) {
            for (int duplication = 0; duplication < 2; duplication++) {
                cout << listOfNumbers[iter] << " ";
            }
        }

        if (listOfNumbers[iter] > 10) {
            cout << listOfNumbers[iter] - 15 << " ";
        }
    }


    // b)
    cout << endl << endl << "b) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (listOfNumbers[iter] % 2 != 0) {
            modifiedList[nn] = listOfNumbers[iter];
            nn++;
        }
    }

    cout << endl << "b) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << modifiedList[iter] << " ";
    }

    // c)
    cout << endl << endl << "c) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }


    cout << endl << "c) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] * 5 << " ";
    }

    // d)
    cout << endl << endl << "d) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }


    cout << endl << "d) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        if (listOfNumbers[iter] % 2 != 0 && listOfNumbers[iter] > 0) {
            cout << listOfNumbers[iter] + 25 << " ";
        }

        if (listOfNumbers[iter] < 0) {
            cout << listOfNumbers[iter] / 2 << " ";
        }
    }

    // e)
    cout << endl << endl << "e) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (listOfNumbers[iter] > elMAX) {
            elMAX = listOfNumbers[iter];
            posMAX = iter;
        }
        if (listOfNumbers[iter] < elMIN) {
            elMIN = listOfNumbers[iter];
            posMIN = iter;
        }
    }

    listOfNumbers[posMAX] = elMIN;
    listOfNumbers[posMIN] = elMAX;

    cout << endl << "e) Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }


    return 0;

}