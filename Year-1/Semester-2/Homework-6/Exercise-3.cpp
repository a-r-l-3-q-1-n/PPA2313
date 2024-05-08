#include "iostream"
#include "cmath"

using namespace std;

/*
 * Utils ->
 * */

int minNumberBtwTwo(int x, int y) {
    return x < y ? x : y;
}

int greatestCommonDivisorBtwTwo(int x, int y) {
    for (int iter = minNumberBtwTwo(x, y); iter > 0; iter--) {
        if (x % iter == 0 && y % iter == 0) {
            return iter;
        }
    }
}

int smallestCommonMultipleBtwTwo(int x, int y) {
    return (x * y) / greatestCommonDivisorBtwTwo(x , y);
}

/*
 * Utils <-
 * */

int minNumber(int x, int y, int z) {
    if (x < y && x < z) {
        return x;
    } else if (y < x && y < z) {
        return y;
    } else {
        return z;
    }
}

int maxNumber(int x, int y, int z) {
    if (x > y && x > z) {
        return x;
    } else if (y > x && y > z) {
        return y;
    } else {
        return z;
    }
}

int greatestCommonDivisor(int x, int y, int z) {
    for (int iter = minNumber(x, y, z); iter > 0; iter--) {
        if (x % iter == 0 && y % iter == 0 && z % iter == 0) {
            return iter;
        }
    }
}

int smallestCommonMultiple(int x, int y, int z) {
    return smallestCommonMultipleBtwTwo(x, smallestCommonMultipleBtwTwo(y, z));
}

void allCommonDivisors(int x, int y, int z) {
    for (int iter = minNumber(x, y, z); iter > 0; iter--) {
        if (x % iter == 0 && y % iter == 0 && z % iter == 0) {
            cout << iter << " ";
        }
    }
}

void threeSmallestCommonMultiple(int x, int y, int z) {
    for (int iter = 0; iter < 3; iter++) {
        cout << smallestCommonMultiple(x + iter, y + iter, z + iter) << " ";
    }
}

void calculateAreaAndPerimeter(double x, double y, double z) {
    if ((x >= y && x >= z) || (y >= x && y >= z) || (z >= x && z >= y)) {
        double perimeter = x + y + z;
        double semiPer = perimeter / 2;

        double area = sqrt(semiPer * (semiPer - x) * semiPer * (semiPer - y) * semiPer * (semiPer - z));

        cout << "P: " << perimeter << ", ";
        cout << "A: " << area;
    } else {
        cout << "Nu poate forma un triunghi";
    }
}

void calculateEquation(double x, double y, double z) {
    double delta = pow(y, 2) - 4 * x * z;

    if (delta > 0) {
        cout << "x1 = " << (-y - sqrt(delta)) / (2 * x) << ", ";
        cout << "x2 = " << (-y + sqrt(delta)) / (2 * x);
    } else if (delta == 0) {
        cout << "x1 = x2 = " << -y / (2 * x);
    } else {
        cout << "x1 = x2 = ∅";
    }
}

int main() {
    int x, y, z;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;
    cout << "[+] Introduce z: "; cin >> z;

    cout << "\n";

    cout << "[~] Cel mai mare divizor comun: " << greatestCommonDivisor(x, y, z) << "\n";
    cout << "[~] Cel mai mic multiplu comun: " << smallestCommonMultiple(x, y, z) << "\n";
    cout << "[~] Numarul maxim: " << maxNumber(x, y, z) << "\n";
    cout << "[~] Numarul minim: " << minNumber(x, y, z) << "\n";
    cout << "[~] Toti divizorii comuni: "; allCommonDivisors(x, y, z); cout << "\n";
    cout << "[~] 3 cei mai mici muptipli comuni: "; threeSmallestCommonMultiple(x, y, z); cout << "\n";
    cout << "[~] Daca poate forma un triunghi: "; calculateAreaAndPerimeter(x, y, z); cout << "\n";
    cout << "[~] Solutiile reale sunt: "; calculateEquation(x, y, z); cout << "\n";


    return 0;
}
