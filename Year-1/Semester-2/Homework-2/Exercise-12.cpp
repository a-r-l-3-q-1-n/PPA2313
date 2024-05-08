#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-12.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-12.out");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        char temp;

        cout << "[~] Elementele sunt: ";
        fileOut << "[~] Elementele sunt: ";
        while (fileIn.get(temp)) {
            if (int(temp) >= 48 && int(temp) <= 57) {
                cout << temp << " ";
                fileOut << temp << " ";
            }
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}