#include "iostream"

using namespace std;

int main() {

    int size;

    cout << "[+] Cate note vrei sa introduci: "; cin >> size;

    double list_of_scores[size];
    
    cout << endl;
    for (int iter = 0; iter < size; iter ++) {
        cout << "[+] Introduce notele: "; cin >> list_of_scores[iter];
    }

    double max = list_of_scores[0];
    double min = list_of_scores[0];

    cout << endl;
    for (int iter = 0; iter < size; iter++) {
        if (list_of_scores[iter] > max) {
            max = list_of_scores[iter];
        }
    }

    cout << endl;
    for (int iter = 0; iter < size; iter++) {
        if (list_of_scores[iter] < min) {
            min = list_of_scores[iter];
        }
    }

    cout << "MAX: " << max << endl;
    cout << "MIN: " << min << endl;


	return 0;

}