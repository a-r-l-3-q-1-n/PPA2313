#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-14.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-14.out");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        char temp;

        cout << "[~] Elementele sunt: ";
        fileOut << "[~] Elementele sunt:";

        while (fileIn.get(temp)) {
            if (int(temp) == 65 || int(temp) == 69 || int(temp) == 73 ||
                int(temp) == 79 || int(temp) == 85 ||
                int(temp) == 97 || int(temp) == 101 || int(temp) == 105 ||
                int(temp) == 111 || int(temp) == 117) {
                cout << char(32);
                fileOut << char(32);
            } else {
                cout << temp;
                fileOut << temp;
            }
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}