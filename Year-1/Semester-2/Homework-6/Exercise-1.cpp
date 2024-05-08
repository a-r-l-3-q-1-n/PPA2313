#include "iostream"
#include "climits"

using namespace std;

int countOfDigits(int number) {
    int count = 0;

    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

int countOfEvenDigits(int number) {
    int count = 0;

    while (number > 0) {
        if ((number % 10) % 2 == 0) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int countOfOddDigits(int number) {
    int count = 0;

    while (number > 0) {
        if ((number % 10) % 2 != 0) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int maxDigit(int number) {
    int digit = INT_MIN;

    while (number > 0) {
        if (number % 10 > digit) {
            digit = number % 10;
        }
        number /= 10;
    }
    return digit;
}

int minDigit(int number) {
    int digit = INT_MAX;

    while (number > 0) {
        if (number % 10 < digit) {
            digit = number % 10;
        }
        number /= 10;
    }
    return digit;
}

int averageOfDigits(int number) {
    return sumOfDigits(number) / countOfDigits(number);
}

void repeatedDigits(int number) {
    int listOfDigits[10] = {0};

    while (number > 0) {
        listOfDigits[number % 10]++;
        number /= 10;
    }

    for (int iter = 0; iter < 10; ++iter) {
        if (listOfDigits[iter] >= 2) {
            cout << iter << " ";
        }
    }
}

void separatedPrinting(int number) {
    for (int iter = 10000; iter > 0; iter /= 10) {
        cout << (number / iter) % 10 << " ";
    }
}

void divisorsOfNumber(int number) {
    for (int iter = 1; iter <= number; iter++) {
        if (number % iter == 0) {
            cout << iter << " ";
        }
    }
}

void inverseOfNumber(int number) {
    while (number > 0) {
        cout << number % 10;
        number /= 10;
    }
}

void primeNumber(int number) {
    if (number <= 1) {
        cout << "nu este prim";
        return;
    }

    for (int iter = 2; iter * iter <= number; ++iter) {
        if (number % iter == 0) {
            cout << "nu este prim";
            return;
        }
    }
    cout << "este prim";
}

void maxPossibleNumber(int number) {
    int count = countOfDigits(number);
    int temp, pos;

    int maxNumber[count];

    for (int iter = 0; iter < count; iter++) {
        maxNumber[iter] = number % 10;
        number /= 10;
    }

    for (int iter = 1; iter < count; iter++) {
        temp = maxNumber[iter];
        pos = iter - 1;

        while (temp > maxNumber[pos] && pos >= 0) {
            maxNumber[pos + 1] = maxNumber[pos];
            pos--;
        }
        maxNumber[pos + 1] = temp;
    }

    for (int iter = 0; iter < count; iter++) {
        cout << maxNumber[iter];
    }
}

int main() {

    int number;

    cout << "[+] Introduce un numar: "; cin >> number;

    cout << "\n";

    if (number > 100000) {
        cout << "[!] Numarul este mai mare ca 100000" << endl;
        return 0;
    }

    cout << "[~] Numarul de cifre: " << countOfDigits(number) << endl;
    cout << "[~] Numarul de cifre pare: " << countOfEvenDigits(number) << endl;
    cout << "[~] Numarul de cifre impare: " << countOfOddDigits(number) << endl;
    cout << "[~] Suma cifrelor: " << sumOfDigits(number) << endl;
    cout << "[~] Cifra maxima: " << maxDigit(number) << endl;
    cout << "[~] Cifra minima: " << minDigit(number) << endl;
    cout << "[~] Media aritmetica: " << averageOfDigits(number) << endl;
    cout << "[~] Cifrele care se repeta: "; repeatedDigits(number); cout << "\n";
    cout << "[~] Cifrele separate printr-un spatiu: "; separatedPrinting(number); cout << "\n";
    cout << "[~] Divizorii numarului: "; divisorsOfNumber(number); cout << "\n";
    cout << "[~] Inversul numarului: "; inverseOfNumber(number); cout << "\n";
    cout << "[~] Numarul: "; primeNumber(number); cout << "\n";
    cout << "[~] Cel mai mare număr posibil: "; maxPossibleNumber(number); cout << "\n";


    return 0;

}