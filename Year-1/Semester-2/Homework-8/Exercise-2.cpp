#include "iostream"
#include "cmath"

using namespace std;

void setElements(int array1[], int size1, int array2[], int size2) {
    cout << "\n[+] Introduce elementele (1):\n";
    for (int iter = 0; iter < size1; iter++) {
        cout << "> "; cin >> array1[iter];
    }
    cout << "\n";

    cout << "\n[+] Introduce elementele (2):\n";
    for (int iter = 0; iter < size2; iter++) {
        cout << "> "; cin >> array2[iter];
    }
    cout << "\n";
}

void getElements(int array1[], int size1, int array2[], int size2) {
    cout << "[~] Elementele sunt (1): ";
    for (int iter = 0; iter < size1; iter++) {
        cout << array1[iter] << " ";
    }
    cout << "\n";

    cout << "[~] Elementele sunt (2): ";
    for (int iter = 0; iter < size2; iter++) {
        cout << array2[iter] << " ";
    }
    cout << "\n";
}

void sumOfElements(const int array1[], int size1, const int array2[], int size2) {
    int sum1 = 0, sum2 = 0;

    for (int iter = 0; iter < size1; iter++) {
        sum1 += array1[iter];
    }

    for (int iter = 0; iter < size2; iter++) {
        sum2 += array2[iter];
    }

    cout << "[~] Suma elementelor (1): " << sum1 << "\n";
    cout << "[~] Suma elementelor (2): " << sum2 << "\n";
}

void difOfElements(const int array1[], int size1, const int array2[], int size2) {
    int sum1 = 0, sum2 = 0;

    for (int iter = 0; iter < size1; iter++) {
        sum1 += array1[iter];
    }

    for (int iter = 0; iter < size2; iter++) {
        sum2 += array2[iter];
    }

    cout << "[~] Diferenta elementelor: " << abs(sum1 - sum2) << "\n";
}

void unifyElements(const int array1[], int size1, const int array2[], int size2) {
    int size = size1 + size2;
    int unifiedArray[size];

    for (int x = 0; x < size1; x++) {
        unifiedArray[x] = array1[x];
    }

    for (int x = size1, y = 0; x < size; x++, y++) {
        unifiedArray[x] = array2[y];
    }

    cout << "[~] Toate elementele: ";
    for (int iter = 0; iter < size; iter++) {
        cout << unifiedArray[iter] << " ";
    }
    cout << "\n";
}

void commonElements(const int array1[], int size1, const int array2[], int size2) {
    cout << "[~] Elementele comune: ";
    for (int x = 0; x < size1; x++) {
        for (int y = 0; y < size2; y++) {
            if (array1[x] == array2[y]) {
                cout << array1[x] << " ";
                break;
            }
        }
    }
    cout << "\n";
}

int main() {

    int size1, size2;

    cout << "[+] Introduce dimensiunea (1): "; cin >> size1;
    cout << "[+] Introduce dimensiunea (2): "; cin >> size2;

    int array1[size1], array2[size2];

    setElements(array1, size1, array2, size2);
    getElements(array1, size1, array2, size2);
    sumOfElements(array1, size1, array2, size2);
    difOfElements(array1, size1, array2, size2);
    unifyElements(array1, size1, array2, size2);
    commonElements(array1, size1, array2, size2);


    return 0;

}