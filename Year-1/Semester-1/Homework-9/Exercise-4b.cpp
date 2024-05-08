#include "iostream"
#include "iomanip"
#include "climits"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce coloane: "; cin >> x;
    cout << "[+] Introduce linii: "; cin >> y;

    int matrix[x][y];

    cout << endl << "[+] Populeaza matricea: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << "[" << xx << "][" << yy << "] = "; cin >> matrix[xx][yy];
        }
    }

    cout << endl << "[~] Elementele matricei:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << matrix[xx][yy] << " ";
        }
        cout << endl;
    }

    // b)
    int minElement = INT_MAX;
    int minElementIndex;

    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (matrix[xx][yy] < minElement) {
                minElement = matrix[xx][yy];
                minElementIndex = xx;
            }
        }
    }



    cout << endl << "[~] Elementele de pe linia cu elementul minimal:" << endl;
    for (int yy = 0; yy < y; yy ++) {
        cout << setw(2) << matrix[minElementIndex][yy] << " ";
    }


    return 0;

}