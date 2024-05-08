#include "iostream"

using namespace std;

int main() {

    int white, red, blue, total;

    cout << "[+] Globulete albe: "; cin >> white;

    red = white + 3;
    blue = (white + red) - 2;
    total = white + red + blue;

    cout << "[~] Total globulete: " << total;


    return 0;

}
