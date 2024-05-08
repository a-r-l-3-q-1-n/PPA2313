#include "iostream"
#include "cmath"

using namespace std;

int a(int number, int n = 0) {
    return n == number ? 2 * number - 1 : 2 * n - 1 + a(number, n + 1);
}
int b(int number, int n = 0) {
    return n == number ? 2 * number : 2 * n + b(number, n + 1);
}

int c(int number, int n = 0) {
    return n == number ? 3 * number - 1 : 3 * n - 1 + c(number, n + 1);
}

int d(int number, int n = 0) {
    return n == number ? 4 * number - 3 : 4 * n - 3 + d(number, n + 1);
}

int e(double number , int n = 0) {
    return n == number ? 1 / (5 * number - 3) : (1 / (5 * n - 3) + e(number, n + 1));
}

int f(double number , int n = 0) {
    return n == number ? 1 / (5 * number - 2) : 1 / (5 * n - 2) + f(number, n + 1);
}

int g(double number , int n = 0) {
    return n == number ? pow(-0.5, number) : pow(-0.5, n) + g(number, n + 1);
}

int main() {

    int number;

    cout << "[+] Introduce un numar: "; cin >> number;

    cout << "[~] a): " << a(number) << "\n";
    cout << "[~] b): " << b(number) << "\n";
    cout << "[~] c): " << c(number) << "\n";
    cout << "[~] d): " << d(number) << "\n";
    cout << "[~] e): " << e(number) << "\n";
    cout << "[~] f): " << f(number) << "\n";
    cout << "[~] g): " << g(number) << "\n";


    return 0;

}