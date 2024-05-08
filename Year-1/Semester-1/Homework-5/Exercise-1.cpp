#include "iostream"

using namespace std;

int main() {

    int num, number;

    for (int iter = 1000; iter < 10000; iter += 1000) {

        num = iter / 1000;
        number = num * 1000 + 230 + num;

        if (number % 6 == 0) {
            cout << "[~] " << number << "este exact divizibil cu 6" << endl;
        }
    }


    return 0;

}