#include "iostream"
#include "fstream"

using namespace std;

int main() {

    int n;
    string filename;

    cout << "[+] Numele fisierului: "; cin >> filename;

    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/" + filename);

    cout << "[+] Introduce n: "; cin >> n;
    if (n < 10000) {

        fileOut << "[~] Numerele pare sunt: ";
        for (int iter = 1; iter < n; iter++) {
            if (iter % 2 == 0) {
                fileOut << iter << " ";
            }
        }
    }

    fileOut.close();

    return 0;

    
}
