#include "iostream"

using namespace std;

struct Fraction {
    float x, y;
    float fraction;
};

int main() {

    float sumOfNumerator, sumOfDenominator;
    float diffOfNumerator, diffOfDenominator;

    float productOfNumerator, productOfDenominator;
    float divisionOfNumerator, divisionOfDenominator;


    Fraction fractions[2];

    for (int iter = 0; iter < 2; iter++) {
        cout << "[+] Introduce numaratorul (" << iter + 1 << "): "; cin >> fractions[iter].x;
        cout << "[+] Introduce numitorul   (" << iter + 1 << "): "; cin >> fractions[iter].y;

        fractions[iter].fraction = (float)fractions[iter].x / (float)fractions[iter].y;
    }

    if (fractions[0].fraction > fractions[1].fraction) {
        cout << "[~] Fractia mare: " << fractions[0].x << "/" << fractions[0].y << endl;
        cout << "[~] Fractia mica: " << fractions[1].x << "/" << fractions[1].y << endl;
    } else {
        cout << "[~] Fractia mare: " << fractions[1].x << "/" << fractions[1].y << endl;
        cout << "[~] Fractia mica: " << fractions[0].x << "/" << fractions[0].y << endl;
    }


    sumOfNumerator = fractions[0].x * fractions[1].y + fractions[0].y * fractions[1].x;
    sumOfDenominator = fractions[0].y * fractions[1].y;

    diffOfNumerator = fractions[0].x * fractions[1].y - fractions[0].y * fractions[1].x;
    diffOfDenominator = fractions[1].y * fractions[1].y;


    for (int iter = (int)fractions[0].y; iter > 1; iter--) {
        if ((int)sumOfNumerator % iter == 0 && (int)sumOfDenominator % iter == 0) {
            sumOfNumerator /= (float)iter;
            sumOfDenominator /= (float)iter;

            break;
        }
    }

    for (int iter = (int)fractions[0].y; iter > 1; iter--) {
        if ((int)diffOfNumerator % iter == 0 && (int)diffOfDenominator % iter == 0) {
            diffOfNumerator /= (float)iter;
            diffOfDenominator /= (float)iter;

            break;
        }
    }

    productOfNumerator = fractions[0].x * fractions[1].x;
    productOfDenominator = fractions[0].y * fractions[1].y;

    divisionOfNumerator = fractions[0].x * fractions[1].y;
    divisionOfDenominator = fractions[0].y * fractions[1].x;


    cout << "[~] Suma fractiilor este: " << sumOfNumerator << "/" << sumOfDenominator << endl;
    cout << "[~] Diferenta fractiilor este: " << diffOfNumerator << "/" << diffOfDenominator << endl;
    cout << "[~] Produsul fractiilor este: " << productOfNumerator << "/" << productOfDenominator << endl;
    cout << "[~] Catul fractiilor este: " << divisionOfNumerator << "/" << divisionOfDenominator << endl;


    return 0;

}