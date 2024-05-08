#include "iostream"

using namespace std;

int main() {

    int x1, x2, y1, y2;

    cout << "[+] Introduce numaratorul 1: "; cin >> x1;
    cout << "[+] Introduce numitorul 1: "; cin >> x2;

    cout << "[+] Introduce numaratorul 2: "; cin >> y1;
    cout << "[+] Introduce numitorul 2: "; cin >> y2;


    int common = x2 * y2;
    int sum = (x1 * y2) + (y1 * x2);

    int a = sum, b = common, temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    sum /= a;
    common /= a;

    cout << "[~] Suma fractiilor: " << sum << " / " << common << endl;


    return 0;

}