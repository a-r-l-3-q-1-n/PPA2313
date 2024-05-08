#include "iostream"
#include "fstream"
#include "cmath"

using namespace std;

struct Coordinates {
    int x, y;
    double distance;
};

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PAP2313/Year-1/Semester-2/Homework-4/Data/data-6.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n;

        fileIn >> n;

        Coordinates temp = {};
        Coordinates coords[n];

        for (int iter = 0; iter < n; iter++) {
            fileIn >> coords[iter].x;
            fileIn >> coords[iter].y;
            coords[iter].distance = sqrt(pow(coords[iter].x, 2) + pow(coords[iter].y, 2));
        }

        cout << endl << "[~] Coordonatele nesortate sunt:" << endl;
        for (int iter = 0; iter < n; iter++) {
            cout << "[" << iter + 1 << "] ";
            cout << "(" << coords[iter].x << ", " << coords[iter].y << ") - " << coords[iter].distance << endl;
        }

        for (int x = 0; x < n - 1; x++) {
            for (int y = x + 1; y < n; y++) {
                if (coords[x].distance > coords[y].distance) {
                    temp = coords[x];

                    coords[x] = coords[y];
                    coords[y] = temp;
                }
            }
        }

        cout << endl << "[~] Coordonatele sortate sunt:" << endl;
        for (int iter = 0; iter < n; iter++) {
            cout << "[" << iter + 1 << "] ";
            cout << "(" << coords[iter].x << ", " << coords[iter].y << ") - " << coords[iter].distance << endl;
        }

        fileIn.close();

    }


    return 0;

}