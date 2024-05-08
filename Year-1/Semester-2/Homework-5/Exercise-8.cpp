#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x, y;
    int line;

    cout << "[+] Introduce coloane: "; cin >> x;
    cout << "[+] Introduce linii: "; cin >> y;

    int **pMatrix = new int*[x];

    for (int xx = 0; xx < x; xx++) {
        pMatrix[xx] = new int[y];
    }

    cout << endl << "[+] Populeaza matricea: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << "[" << xx << "][" << yy << "] = "; cin >> pMatrix[xx][yy];
        }
    }

    cout << endl << "[~] Elementele matricei:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << pMatrix[xx][yy] << " ";
        }
        cout << endl;
    }

    cout << endl << "[+] Introduce linia: "; cin >> line;
    for (int yy = 0; yy < y; yy ++) {
        pMatrix[line - 1][yy] += 10;
    }

    cout << endl << "[~] Elementele matricei modificate:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << pMatrix[xx][yy] << " ";
        }
        cout << endl;
    }

    delete[] pMatrix;


    return 0;

}