#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-3/Data/data-7.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int x, y;
        int temp, pos;

        fileIn >> x >> y;

        int matrix[x][y];
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                fileIn >> matrix[xx][yy];
            }
        }

        cout << endl << "[~] Matricea nesortata: " << endl;
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << matrix[xx][yy] << " ";
            }
            cout << endl;
        }


        /*
         * Insertion Sort Method (ASCENDING)
         */

        for (int xx = 0; xx < x; xx++) {
            for (int yy = 1; yy < y; yy++) {
                temp = matrix[xx][yy];
                pos = yy - 1;

                while (temp < matrix[xx][pos] && pos >= 0) {
                    matrix[xx][pos + 1] = matrix[xx][pos];
                    pos--;
                }
                matrix[xx][pos + 1] = temp;
            }
        }

        cout << endl << "[~] Matricea sortata (cresc): " << endl;
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << matrix[xx][yy] << " ";
            }
            cout << endl;
        }


        /*
         * Insertion Sort Method (DESCENDING)
         */

        for (int xx = 0; xx < x; xx++) {
            for (int yy = 1; yy < y; yy++) {
                temp = matrix[xx][yy];
                pos = yy - 1;

                while (temp > matrix[xx][pos] && pos >= 0) {
                    matrix[xx][pos + 1] = matrix[xx][pos];
                    pos--;
                }
                matrix[xx][pos + 1] = temp;
            }
        }

        cout << endl << "[~] Matricea sortata (descr): " << endl;
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << matrix[xx][yy] << " ";
            }
            cout << endl;
        }

    }


    return 0;

}