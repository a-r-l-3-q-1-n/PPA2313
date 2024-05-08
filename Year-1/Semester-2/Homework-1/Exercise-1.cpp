#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-1.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-1.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int age, height;
        double weight;
        char gender;

        fileIn >> age >> height >> gender;
        weight = (double) 50 + 0.75 * (height - 150) + ((double) age - 20) / 4;

        cout << "[~] Ani: " << age << endl;
        fileOut << "[~] Ani: " << age << endl;

        cout << "[~] Inaltimea: " << height << endl;
        fileOut << "[~] Inaltimea: " << height << endl;

        cout << "[~] Genul: " << gender << endl;
        fileOut << "[~] Genul: " << gender << endl;

        if (gender == 'm' || gender == 'M') {
            cout << "[~] Greutatea ideala pentru Gmasculin: " << weight << endl;
            fileOut << "[~] Greutatea ideala pentru Gmasculin: " << weight << endl;
        } else if (gender == 'f' || gender == 'F'){
            cout << "[~] Greutatea ideala pentru Gfeminin: " << weight - 10 << endl;
            fileOut << "[~] Greutatea ideala pentru Gfeminin: " << weight - 10 << endl;
        } else {
            cout << "[~] Extraterestru" << endl;
            fileOut << "[~] Extraterestru" << endl;
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}