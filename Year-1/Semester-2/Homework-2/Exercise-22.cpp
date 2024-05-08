#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-22.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        string word;
        string longestWord, largestWord;

        longestWord = "";
        largestWord = "";

        int longest = 0;
        char largest = 0;

        while (fileIn >> word) {

            int len = 0;
            while (word[len] != '\0') {
                len++;
            }

            if (len > longest) {
                longest = len;
                longestWord = word;
            }

            if (word[0] > largest) {
                largest = word[0];
                largestWord = word;
            }
        }

        cout << "[~] Cuvantul cel mai lung: '" << longestWord << "'" << endl;
        cout << "[~] Cuvantul cel mai mare: '" << largestWord << "'" << endl;

    }


    return 0;

}