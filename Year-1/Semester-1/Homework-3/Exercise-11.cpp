#include "iostream"

using namespace std;

int main() {

    int x;

    cout << "[+] Numarul elevului: "; cin >> x;

    if (1 <= x && x <= 125) {
        if (x <= 25) {
            cout << "[~] Clasa A";
        } else if (x <= 50) {
            cout << "[~] Clasa B";
        } else if (x <= 75) {
            cout << "[~] Clasa C";
        } else if (x <= 100) {
            cout << "[~] Clasa D";
        } else if (x <= 125) {
            cout << "[~] Clasa E";
        }
    } else {
        cout << "[~] Nu este in clasa V-a";
    }


    return 0;

}