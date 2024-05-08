#include "iostream"

using namespace std;

int main() {

    
    int iter, temp;
    int avg_positive_temp = 0;
    int avg_negative_temp = 0;


    string months[12] = {"Ianuarie", "Februarie", "Martie", "Aprilie", "Mai",
                         "Iunie", "Iulie", "August", "Septembrie",
                         "Octombrie", "Noiembrie", "Decembrie"};
    
    int positive_temperature[12];
    int negative_temperature[12];
    
    for (iter = 0; iter < 12; iter++) {
        cout << "[+] Introduce temperatura pentru " << months[iter] << ": "; cin >> temp;

        if (temp > 0) {
            positive_temperature[iter] = temp;
        } else {
            negative_temperature[iter] = temp;
        }
    }

    cout << "\n----------------------------------\n" << endl;
    for (iter = 0; iter < 12; iter++) {
        if (positive_temperature[iter] != 0) {
            avg_positive_temp += positive_temperature[iter];
        }
    }
    if (iter != 0) {
        cout << "[~] Temperatura medie pozitiva: " << avg_positive_temp / iter << " C" << endl;
    }

    for (iter = 0; iter < 12; iter++) {
        if (negative_temperature[iter] != 0) {
            avg_negative_temp += negative_temperature[iter];
        }
    }
    if (iter != 0) {
        cout << "Temperatura medie negativa: " << avg_negative_temp / iter << " C" << endl;
    }


    return 0;

}