#include "iostream"

using namespace std;

int sum = 0;
int product = 0;

double average = 0.0;

int divisor = 0;
int multiple = 0;

int minimum = 0;
int maximum = 0;

void minNumber(int x, int y) {
    minimum = x < y ? x : y;
}

void maxNumber(int x, int y) {
    maximum = x > y ? x : y;
}

void sumOfNumbers(int x, int y) {
    sum = x + y;
}

void productOfNumbers(int x, int y) {
    product = x * y;
}

void averageOfNumbers(int x, int y) {
    average = (x + y) / 2;
}

void greatestCommonDivisor(int x, int y) {
    for (int iter = (x > y ? x : y); iter > 0; iter--) {
        if (x % iter == 0 && y % iter == 0) {
            divisor = iter;
            break;
        }
    }
}

void smallestCommonMultiple(int x, int y) {
    multiple = (x + y) / divisor;
}

int main() {

    int x, y;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    cout << "\n";

    sumOfNumbers(x, y);
    productOfNumbers(x, y);
    averageOfNumbers(x, y);
    greatestCommonDivisor(x, y);
    smallestCommonMultiple(x, y);
    minNumber(x, y);
    maxNumber(x, y);

    cout << "[~] Suma numerelor: " << sum << "\n";
    cout << "[~] Produsul numerelor: " << product << "\n";
    cout << "[~] Media aritmetica: " << average << "\n";
    cout << "[~] Cel mai mic divizor comun: " << divisor << "\n";
    cout << "[~] Cel mai mic multiplu comun: " << multiple << "\n";
    cout << "[~] Numarul minim: " << minimum << "\n";
    cout << "[~] Numarul maxim: " << maximum << "\n";


    return 0;

}