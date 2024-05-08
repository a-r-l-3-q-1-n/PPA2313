#include "iostream"
#include "climits"

using namespace std;

int main() {

    int n;

    cout << "[+] Introduce numarul de dreptunghiuri: "; cin >> n;

    if (n > 2) {

        int maxArea = INT_MIN, minPerimeter = INT_MAX;
        int maxLength, minWidth, area, perimeter;

        for (int iter = 0; iter < n; iter++) {

            int length, width;

            cout << "[+] Introduce lungimea: "; cin >> length;
            cout << "[+] Introduce latimea: "; cin >> width;


            area = length * width;
            perimeter = 2 * (length + width);

            if (area > maxArea) {
                maxArea = area;
                maxLength = length;
                minWidth = width;
            }

            if (perimeter < minPerimeter) {
                minPerimeter = perimeter;
            }
        }

        cout << "[~] Dreptunghiul cu cea mai mare suprafata: " << endl;
        cout << "Lungime: " << maxLength << ", Latime: " << minWidth << endl;
        cout << "Arie: " << maxArea << ", Perimetru: " << 2 * (maxLength + minWidth) << endl;

        cout << endl;
        cout << "[~] Dreptunghiul cu cel mai mic perimetru: " << minPerimeter << endl;

    } else {
        cout << "[~] Nu respecta conditia" << endl;
    }


    return 0;

}