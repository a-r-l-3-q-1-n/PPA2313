#include "iostream"
#include "climits"

using namespace std;

void setElements(int array[], int size) {
    cout << "\n[+] Introduce elementele:\n";
    for (int iter = 0; iter < size; iter++) {
        cout << "> "; cin >> array[iter];
    }
    cout << "\n";
}

void getElements(int array[], int size) {
    cout << "[~] Elementele sunt: ";
    for (int iter = 0; iter < size; iter++) {
        cout << array[iter] << " ";
    }
    cout << "\n";
}

void sortElements(int array[], int size) {
    int temp, pos;

    for (int iter = 1; iter < size; iter++) {
            temp = array[iter];
            pos = iter - 1;

            while (temp < array[pos] && pos >= 0) {
                array[pos + 1] = array[pos];
                pos--;
            }
            array[pos + 1] = temp;
        }

    cout << "[~] Lista sortata (cresc): ";
    for (int iter = 0; iter < size; iter++) {
        cout << array[iter] << " ";
    }
    cout << "\n";
}

void inverseElements(int array[], int size) {
    for (int x = 0, y = size - 1; x < size / 2; x++, y--) {
        int temp = array[x];

        array[x] = array[y];
        array[y] = temp;
    }

    cout << "[~] Lista inversata: ";
    for (int iter = 0; iter < size; iter++) {
        cout << array[iter] << " ";
    }
    cout << "\n";
}

int maxElement(const int array[] , int size) {
    int maxEl = INT_MIN;

    for (int iter = 0; iter < size; iter++) {
        if (array[iter] > maxEl) {
            maxEl = array[iter];
        }
    }
    return maxEl;
}

int minElement(const int array[] , int size) {
    int minEl = INT_MAX;

    for (int iter = 0; iter < size; iter++) {
        if (array[iter] < minEl) {
            minEl = array[iter];
        }
    }
    return minEl;
}

int countOfMaxElements(int array[], int size) {
    int maxEl = maxElement(array, size);
    int count = 0;

    for (int iter = 0; iter < size; iter++) {
        if (array[iter] == maxEl) {
            count++;
        }
    }
    return count;
}

int countOfMinElements(int array[], int size) {
    int minEl = minElement(array, size);
    int count = 0;

    for (int iter = 0; iter < size; iter++) {
        if (array[iter] == minEl) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;

    cout << "[+] Introduce dimensiunea: "; cin >> size;

    int array[size];

    setElements(array, size);
    getElements(array, size);
    sortElements(array, size);
    inverseElements(array, size);
    cout << "[~] Elementul maxim: " << maxElement(array, size) << "\n";
    cout << "[~] Elementul minim: " << minElement(array, size) << "\n";
    cout << "[~] Numarul de elemente maxime: " << countOfMaxElements(array, size) << "\n";
    cout << "[~] Numarul de elemente minime: " << countOfMinElements(array, size) << "\n";


    return 0;

}