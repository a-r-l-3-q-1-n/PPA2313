#include "iostream"
#include "iomanip"
#include "fstream"

using namespace std;

int main() {

    fstream fileIO;

    fileIO.open("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-20.in", ios::in);

    if (!fileIO.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int count = 0;
        double number, sum = 0;

        while (fileIO >> number) {
            sum += number;
            count++;
        }

        fileIO.close();
        fileIO.open("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-20.in", ios::app);

        cout << "[~] Media numerelor: " << fixed << setprecision(2) << sum / count << endl;
        fileIO << "[~] Media numerelor: " << fixed << setprecision(2) << sum / count << endl;

        fileIO.close();

    }


    return 0;

}