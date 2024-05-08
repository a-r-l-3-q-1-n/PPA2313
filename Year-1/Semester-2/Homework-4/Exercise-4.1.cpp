#include "iostream"
#include "cmath"

using namespace std;

struct TriangleCoordinate {
    int x, y;
};

int main() {

    TriangleCoordinate tCoords[3];

    cout << endl << "[+] Introduce datele pentru triunghi" << endl;
    for (int iter = 0; iter < 3; iter++) {
        cout << "[" << iter + 1 << "] Introduce x: "; cin >> tCoords[iter].x;
        cout << "[" << iter + 1 << "] Introduce y: "; cin >> tCoords[iter].y;
        cout << endl;
    }

    double distA = sqrt(pow(tCoords[1].x - tCoords[0].x, 2) + pow(tCoords[1].y - tCoords[0].y, 2));
    double distB = sqrt(pow(tCoords[2].x - tCoords[1].x, 2) + pow(tCoords[2].y - tCoords[1].y, 2));
    double distC = sqrt(pow(tCoords[0].x - tCoords[2].x, 2) + pow(tCoords[0].y - tCoords[2].y, 2));


    if ((distA + distB > distC) && (distB + distC > distB) && (distB + distC > distA)) {

        double per = (distA + distB + distC) / 2;
        double area = sqrt(per * (per - distA) * per * (per - distB) * per * (per - distC));

        cout << "[~] Aria: " << area << endl;
        cout << "[~] Perimetru: " << per << endl;

        if (distA == distB && distB == distC) {
            cout << "[~] Tipul: Echilateral" << endl;
        } else if (distA == distB || distB == distC || distC == distA) {
            cout << "[~] Tipul: Isoscel" << endl;
        } else {
            cout << "[~] Tipul: Scalen" << endl;
        }

    } else {
        cout << "[!] Triunghiul nu poate exista" << endl;
    }


    return 0;

}