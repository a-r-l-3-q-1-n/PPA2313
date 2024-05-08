#include "iostream"
#include "climits"

using namespace std;

int main() {

    int n, num, x, y;
    int numsEven = 0, numEven = 0, numDivBy3 = 0;
    int nMin = INT_MAX;
    int nMax = INT_MIN;

    cout << "[+] Cate numere sa fie citite: "; cin >> n;

    if (n <= 4 || n >= 1000) {
        cout << endl << "[~] Nu respecta conditia" << endl;
    } else {

        int listOfNumbers[n];

        for (int iter = 0; iter < n; iter++) {
            cout << endl <<  "[+] Introduce numere in array: "; cin >> num;
            listOfNumbers[iter] = num;
        }

        cout << "[+] Introduce x: "; cin >> x;
        cout << "[+] Introduce y: "; cin >> y;

        // a)
        cout << endl << "[~] Numere la interval de 5 pozitii: ";
        for (int iter = 0; iter < n; iter += 5) {
            cout << listOfNumbers[iter] << " ";
        }

        // b)
        cout << endl << "[~] Numere in ordinea inversa la interval de 4 pozitii: ";
        for (int iter = n - 1; iter >= 0; iter -= 4) {
            cout << listOfNumbers[iter] << " ";
        }

        // c)
        cout << endl << "[~] Doar numere pare: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] % 2 == 0) {
                cout << listOfNumbers[iter] << " ";
            }
        }

        // d)
        cout << endl << "[~] Doar numere impare: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] % 2 != 0) {
                cout << listOfNumbers[iter] << " ";
            }
        }

        // e)
        cout << endl << "[~] Numere mai mari ca x si nu sunt divizibile cu y: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] > x && listOfNumbers[iter] % y != 0) {
                cout << listOfNumbers[iter] << " ";
            }
        }

        // f)
        cout << endl << "[~] Numere mai mari ca x si mai mici ca y: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] > x && listOfNumbers[iter] < y) {
                cout << listOfNumbers[iter] << " ";
            }
        }

        // g)
        cout << endl << "[~] Pozitiile numerelor negative si impare: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] < 0 || listOfNumbers[iter] % 2 != 0) {
                cout << iter << " ";
            }
        }

        // h)
        cout << endl << "[~] Media numerelor pare: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] % 2 == 0) {
                numsEven += listOfNumbers[iter];
                numEven++;
            }
        }
        if (numEven != 0) {
            cout << static_cast<double>(numsEven) / numEven;
        } else {
            cout << "Nu exista numere pare!";
        }

        // i)
        cout << endl << "[~] Suma numerelor divizibile cu 3: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] % 3 == 0) {
                numDivBy3 += listOfNumbers[iter];
            }
        }
        cout << numDivBy3;

        // j)
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] > max1) {
                max2 = max1;
                max1 = listOfNumbers[iter];
            } else if (listOfNumbers[iter] > max2 && listOfNumbers[iter] != max1) {
                max2 = listOfNumbers[iter];
            }
        }

        // k)
        cout << endl << "[~] Toate numerele cu exceptia celui minim si celui maximal: ";
        for (int iter = 0; iter < n; iter++) {
            if (listOfNumbers[iter] != nMin && listOfNumbers[iter] != nMax) {
                cout << listOfNumbers[iter] << " ";
            }
        }
    }


    return 0;

}