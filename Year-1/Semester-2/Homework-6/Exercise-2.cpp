#include "iostream"

using namespace std;

int minNumber(int x, int y);

int sumOfNumbers(int x, int y) {
    return x + y;
}

int productOfNumbers(int x, int y) {
    return x * y;
}

int averageOfNumbers(int x, int y) {
    return (x + y) / 2;
}

int greatestCommonDivisor(int x, int y) {
    int min = minNumber(x, y);

    for (int iter = min; iter > 0; iter--) {
        if (x % iter == 0 && y % iter == 0) {
            return iter;
        }
    }
}

int smallestCommonMultiple(int x, int y) {
    return (x * y) / greatestCommonDivisor(x, y);
}

int maxNumber(int x, int y) {
    return x > y ? x : y;
}

int minNumber(int x, int y) {
    return x < y ? x : y;
}

void printSumOfNumbers(int x, int y) {
    cout << "[~] " << x << " + " << y << " = " << x + y << endl;
}

void printProductOfNumbers(int x, int y) {
    cout << "[~] " << x << " * " << y << " = " << x * y << endl;
}

void allCommonDivisors(int x, int y) {
    int minNum = minNumber(x, y);
    for (int iter = 1; iter < minNum; iter++) {
        if (x % iter == 0 && y % iter == 0) {
            cout << iter << " ";
        }
    }
}

void fiveCommonMultiples(int x, int y) {
    int xx = x, yy = y;
    int countOfCommons = 0;

    for (int iter = 1; countOfCommons < 5; iter++) {
        int multiple = xx * iter;

        if (multiple % yy == 0) {
            cout << multiple << " ";
            countOfCommons++;
        }
    }
}

int countOfDigits(int number) {
    int count = 0;

    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

void commonDigits(int x, int y) {
    int SIZE = countOfDigits(x);
    int listOfDigits[SIZE];

    for (int iter = 0; iter < SIZE; iter++) {
        listOfDigits[iter] = x % 10;
        x /= 10;
    }

    for (int xx = 0; xx < SIZE; xx++) {
        int temp = y;
        for (int yy = 0; yy < SIZE; yy++) {
            if (listOfDigits[xx] == temp % 10) {
                cout << listOfDigits[xx] << " ";
                break;
            }
            temp /= 10;
        }
    }
}

void differenceOfDigits(int x, int y) {
    int SIZE = countOfDigits(x);
    int listOfDigits[SIZE];

    for (int iter = 0; iter < SIZE; iter++) {
        listOfDigits[iter] = x % 10;
        x /= 10;
    }

    for (int xx = 0; xx < SIZE; xx++) {
        int temp = y;
        bool flag = false;

        for (int yy = 0; yy < SIZE; yy++) {
            if (listOfDigits[xx] == temp % 10) {
                flag = true;
                break;
            }
            temp /= 10;
        }

        if (!flag) {
            cout << listOfDigits[xx] << " ";
        }
    }
}

void friendlyNumbers(int x, int y) {
    int xSum = 0;
    int ySum = 0;

    for (int iter = 1; iter < x; iter++) {
        if (x % iter == 0) xSum += iter;
    }

    for (int iter = 1; iter < y; iter++) {
        if (y % iter == 0) ySum += iter;
    }

    if (xSum == y && ySum == x) {
        cout << "sunt prietene";
    } else {
        cout << "nu sunt prietene";
    }
}


int main() {

    int x, y;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    cout << "\n";

    cout << "[~] Suma numerelor: " << sumOfNumbers(x, y) << "\n";
    cout << "[~] Produsul numerelor: " << productOfNumbers(x, y) << "\n";
    cout << "[~] Media aritmetica: " << averageOfNumbers(x, y) << "\n";
    cout << "[~] Cel mai mare divizor comun: " << greatestCommonDivisor(x, y) << "\n";
    cout << "[~] Cel mai mic multiplu comun: " << smallestCommonMultiple(x, y) << "\n";
    cout << "[~] Numarul maxim: " << maxNumber(x, y) << "\n";
    cout << "[~] Numarul minim: " << minNumber(x, y) << "\n";
    printSumOfNumbers(x, y);
    printProductOfNumbers(x, y);
    cout << "[~] Toti divizorii comuni: "; allCommonDivisors(x, y); cout << "\n";
    cout << "[~] Cinci multipli comuni: "; fiveCommonMultiples(x, y); cout << "\n";
    cout << "[~] Cifrele care se contin in ambele numere: "; commonDigits(x, y); cout << "\n";
    cout << "[~] Cifrele care sunt in primul numar si nus in al doilea: "; differenceOfDigits(x, y); cout << "\n";
    cout << "[~] Numerele " << x << " si " << y << ": "; friendlyNumbers(x, y); cout << "\n";


    return 0;

}