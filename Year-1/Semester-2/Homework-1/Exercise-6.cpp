#include "iostream"
#include "iomanip"
#include "climits"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-6.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-6.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n, countOfEvens = 0, countOfOdds = 0, medn = 0;
        double number, max = INT_MIN, med = 0, min = INT_MAX;

        fileIn >> n;
        
        for (int numbers = 0; numbers < n; numbers++) {
            fileIn >> number;

            if (number > max) {
                max = number;
            }
            if (number < min) {
                min = number;
            }
            if ((int)number % 2 == 0) {
                countOfEvens++;
            } else {
                countOfOdds++;
            }

            if (number - (int)number != 0) {
                med += number;
                medn++;

            }
        }
        cout << "[~] Numarul maximal: " << fixed << setprecision(2) << max << endl;
        cout << "[~] Numarul minimal: " << fixed << setprecision(2) << min << endl;
        cout << "[~] Numarul de el. pare: " << countOfEvens << endl;
        cout << "[~] Numarul de el. impare: " << countOfOdds << endl;
        cout << "[~] Media numerelor cu doua zecimale: " << fixed << setprecision(2) << med / medn << endl;

        fileOut << "[~] Numarul maximal: " << fixed << setprecision(2) << max << endl;
        fileOut << "[~] Numarul minimal: " << fixed << setprecision(2) << min << endl;
        fileOut << "[~] Numarul de el. pare: " << countOfEvens << endl;
        fileOut << "[~] Numarul de el. impare: " << countOfOdds << endl;
        fileOut << "[~] Media numerelor cu doua zecimale: " << fixed << setprecision(2) << med / medn << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}