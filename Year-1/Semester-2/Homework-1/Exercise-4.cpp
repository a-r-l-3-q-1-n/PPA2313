#include "iostream"
#include "iomanip"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-4.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-4.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        double avgPosTemp = 0; int pos = 0;
        double avgNegTemp = 0; int neg = 0;
        int temp = 0;

        while (fileIn >> temp) {

            if (temp > 0) {
                avgPosTemp += temp; pos++;
            }

            if (temp < 0) {
                avgNegTemp += temp; neg++;
            }
        }

        cout << "[~] Temperatura medie pozitiva este: " << fixed << setprecision(2) << avgPosTemp / pos << endl;
        cout << "[~] Temperatura medie negativa este: " << fixed << setprecision(2) << avgNegTemp / neg << endl;

        fileOut << "[~] Temperatura medie pozitiva este: " << fixed << setprecision(2) << avgPosTemp / pos << endl;
        fileOut << "[~] Temperatura medie negativa este: " << fixed << setprecision(2) << avgNegTemp / neg << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}
