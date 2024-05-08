#include "iostream"

using namespace std;

int main() {
    cout << "[~] Numerele intregi pozitive: " << endl;

    for (int a = 1; a < 20; ++a) {

        for (int b = 1; b < 20; ++b) {

            for (int c = 1; c < 20; ++c) {

                if ((a + b) * (a + b) * (a + b) == c * c * c) {
                    cout << "(" << a << " + " << b << ")^3 = " << c << "^3" << endl;
                }
            }
        }
    }


    return 0;

}