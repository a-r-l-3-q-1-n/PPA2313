#include "iostream"

using namespace std;

int setElements(int array[], int size, int pos = 0) {
    if (pos < size) {
        cout << "> "; cin >> array[pos];
        return setElements(array, size, pos + 1);
    }
    return 0;
}

int getElements(int array[], int size, int pos = 0) {
    if (pos < size) {
        cout << array[pos] << " ";
        return getElements(array, size, pos + 1);
    }
    return 0;
}

int getInverseElements(int array[], int size) {
    if (size > 0) {
        size--;
        cout << array[size] << " ";
        return getInverseElements(array, size);
    }
    return 0;
}

int sumOfAll(int array[], int size) {
    if (size > 0) {
        size--;
        return array[size] + sumOfAll(array, size);
    }
    return 0;
}

int sumOfEvens(int array[], int size) {
    if (size >= 0) {
        return (array[size] % 2 == 0) ? array[size] + sumOfEvens(array, size - 1) : sumOfEvens(array, size - 1);
    }
    return 0;
}

int sumOfOddElements(int array[], int size) {
    if (size >= 0) {
        return (array[size] % 2 != 0) ? array[size] + sumOfOddElements(array, size - 1) : sumOfOddElements(array, size - 1);
    }
    return 0;
}

void getEvens(const int array[], int size, int pos = 0) {
    if (pos < size) {
        if (array[pos] % 2 == 0) {
            cout << array[pos] << " ";
        }
        getEvens(array, size, pos + 1);
    }
}

void getOdds(const int array[], int size, int pos = 0) {
    if (pos < size) {
        if (array[pos] % 2 != 0) {
            cout << array[pos] << " ";
        }
        getOdds(array, size, pos + 1);
    }
}

void ifExistsNNumber(const int array[], int n, int size, int pos = 0) {
    if (pos < size) {
        if (array[pos] == n) {
            cout << "exista";
            return;
        }
        ifExistsNNumber(array, n, size, pos + 1);
    } else {
        cout << "nu exista";
        return;
    }
}

void ifExistsEvens(const int array[], int size, int pos = 0) {
    if (pos < size) {
        if (array[pos] % 2 == 0) {
            cout << "exista";
            return;
        }
        ifExistsEvens(array, size, pos + 1);
    } else {
        cout << "nu exista";
        return;
    }
}

int main() {

    int size, n;

    cout << "[+] Introduce dimensiunea: "; cin >> size;
    cout << "[+] Introduce numarul n: "; cin >> n;

    int array[size];

    cout << "[+] Inroduce elementele: \n"; setElements(array, size); cout << "\n";
    cout << "[~] Elementele sunt: "; getElements(array, size); cout << "\n";
    cout << "[~] Elementele inversate: "; getInverseElements(array, size); cout << "\n";
    cout << "[~] Suma elementelor: " << sumOfAll(array, size) << "\n";
    cout << "[~] Suma elementelor pare: " << sumOfEvens(array, size - 1) << "\n";
    cout << "[~] Suma elementelor impare: " << sumOfOddElements(array, size - 1) << "\n";
    cout << "[~] Elementele pare sunt: "; getEvens(array, size); cout << "\n";
    cout << "[~] Elementele impare sunt: "; getOdds(array, size); cout << "\n";
    cout << "[~] Daca exista n: "; ifExistsNNumber(array, n, size); cout << "\n";
    cout << "[~] Daca exista numere pare: "; ifExistsEvens(array, size); cout << "\n";


    return 0;

}