#include "iostream"
#include "cmath"

using namespace std;

int main() {

    int x;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << endl;

    // a)
    float result_1 = pow(x, 3) + pow(x, 2);
    cout << "1. Resultat: " << result_1 << endl;

    // b)
    float result_2 = (1/x) + (1/pow(x, 2));
    cout << "2. Resultat: " << result_2 << endl;

    // c)
    float result_3 = abs(x)/(pow(x, 2) + 1);
    cout << "3. Resultat: " << result_3 << endl;

    // d)
    float result_4 = pow(x, 2) * log(x);
    cout << "4. Resultat: " << result_4 << endl;

    // e)
    float result_5 = sin(x) + (1/2) * sin(2*x);
    cout << "5. Resultat: " << result_5 << endl;

    // f)
    float result_6 = pow(x, 2) + (8/x);
    cout << "6. Resultat: " << result_6 << endl;

    // g)
    float result_7 = pow(M_E, pow(-x, 2));
    cout << "7. Resultat: " << result_7 << endl;

    // h)
    float result_8 = (pow(M_E, x) - pow(M_E, -x))/ 2;
    cout << "8. Resultat: " << result_8 << endl;

    // i)
    float result_9 = (pow(M_E, x) - pow(M_E, -x))/(pow(M_E, x) + pow(M_E,  - x));
    cout << "9. Resultat: " << result_9 << endl;

    // j)
    float result_10 = tan(x)/x;
    cout << "10. Resultat: " << result_10 << endl;


    return 0;

}