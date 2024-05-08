#include "iostream"
#include "cmath"

using namespace std;

struct CircleCoordinate {
    int x, y;
    double r;
};

int main() {

    CircleCoordinate circles[2];

    cout << endl << "[+] Introduce datele pentru cerc" << endl;
    for (int iter = 0; iter < 2; iter++) {
        cout << "[" << iter + 1 << "] Introduce x:    "; cin >> circles[iter].x;
        cout << "[" << iter + 1 << "] Introduce y:    "; cin >> circles[iter].y;
        cout << "[" << iter + 1 << "] Introduce raza: "; cin >> circles[iter].r;
    }

    for (int iter = 0; iter < 2; iter++) {
        double length = 2 * M_PI * circles[iter].r;
        double area = M_PI * circles[iter].r * circles[iter].r;

        cout << endl;
        cout << "[~] Aria: " << area << endl;
        cout << "[~] Lungimea: " << length << endl;
    }

    double circleDist = sqrt(pow(circles[1].x - circles[0].x, 2) + pow(circles[1].y - circles[0].y, 2));
    double sumR = circles[0].r + circles[1].r;
    double difR = fabs(circles[0].r - circles[1].r);

    cout << endl;
    if (circleDist > sumR) {
        cout << "[~] Nu se intersecteaza" << endl;
    } else if (circleDist == sumR) {
        cout << "[~] Sunt tangente externe" << endl;
    } else if (circleDist == difR) {
        cout << "[~] Sunt tangente interne" << endl;
    } else {
        cout << "[~] Se intersecteaza" << endl;
    }


    return 0;

}