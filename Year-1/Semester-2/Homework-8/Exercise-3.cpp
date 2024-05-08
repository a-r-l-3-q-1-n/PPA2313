#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

void setElements(int **array, int x, int y) {
    cout << "\n[+] Introduce elementele:\n";
    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            cout << "> "; cin >> array[xx][yy];
        }
    }
    cout << "\n";
}

void getElements(int **array, int x, int y) {
    cout << "[~] Elementele sunt:\n";
    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            cout << setw(2) << array[xx][yy] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int maxElement(int **array, int x, int y) {
    int maxEl = INT_MIN;

    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            if (array[xx][yy] > maxEl) {
                maxEl = array[xx][yy];
            }
        }
    }
    return maxEl;
}

int minElement(int **array, int x, int y) {
    int minEl = INT_MAX;

    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            if (array[xx][yy] < minEl) {
                minEl = array[xx][yy];
            }
        }
    }
    return minEl;
}

void countOfMaxElements(int **array, int x, int y) {
    int maxEl = maxElement(array, x, y);
    int count = 0;

    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            if (array[xx][yy] == maxEl) {
                count++;
            }
        }
    }

    cout << "[~] Numarul de elemente maxime: " << count << "\n";
}

void countOfMinElements(int **array, int x, int y) {
    int minEl = minElement(array, x, y);
    int count = 0;

    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            if (array[xx][yy] == minEl) {
                count++;
            }
        }
    }

    cout << "[~] Numarul de elemente minime: " << count << "\n";
}

void sumPerLines(int **array, int x, int y) {
    cout << "[~] Sumele pe linii: ";
    for (int xx = 0; xx < x; xx++) {
        int sum = 0;

        for (int yy = 0; yy < y; yy++) {
            sum += array[xx][yy];
        }
        cout << setw(2) << sum << " ";
    }
    cout << "\n";
}

void sumPerColumns(int **array, int x, int y) {
    cout << "[~] Sumele pe coloane: ";
    for (int xx = 0; xx < x; xx++) {
        int sum = 0;

        for (int yy = 0; yy < y; yy++) {
            sum += array[yy][xx];
        }
        cout << setw(2) << sum << " ";
    }
    cout << "\n";
}

void sortElements(int **array, int x, int y) {
    int temp, pos;

    for (int xx = 0; xx < x; xx++) {
        for (int yy = 1; yy < y; yy++) {
            temp = array[xx][yy];
            pos = yy - 1;

            while (temp < array[xx][pos] && pos >= 0) {
                array[xx][pos + 1] = array[xx][pos];
                pos--;
            }
            array[xx][pos + 1] = temp;
        }
    }

    cout << "[~] Matricea sortata (cresc): " << "\n";
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << setw(2) << array[xx][yy] << " ";
        }
        cout << "\n";
    }
}

void sumOfElementsOnPerimeter(int **array, int x, int y) {
    int sum = 0;

    for (int xx = 0; xx < x; xx++) {
        for (int yy = 0; yy < y; yy++) {
            if (xx == 0 || xx == (x - 1) || yy == 0 || yy == (y - 1)) {
                sum += array[xx][yy];
            }
        }
    }

    cout << "[~] Suma elementelor de pe perimetru: " << sum << "\n";
}


int main() {

    int x, y;

    cout << "[+] Introduce coloane: "; cin >> x;
    cout << "[+] Introduce linii: "; cin >> y;

    int **array = new int*[x];

    for (int xx = 0; xx < x; xx++) {
        array[xx] = new int[y];
    }

    setElements(array, x, y);
    getElements(array, x, y);
    cout << "[~] Elementul maxim: " << maxElement(array, x, y) << "\n";
    cout << "[~] Elementul minim: " << minElement(array, x, y) << "\n";
    countOfMaxElements(array, x, y);
    countOfMinElements(array, x, y);
    sumPerLines(array, x, y);
    sumPerColumns(array, x, y);
    sortElements(array, x, y);
    sumOfElementsOnPerimeter(array, x, y);

    delete[] array;


    return 0;

}