#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    if (y != 0) {
        cout << setprecision(3) << float(x) / float(y);
    } else {
        cout << "[~] Impartire imposibila";
    }


    return 0;

}