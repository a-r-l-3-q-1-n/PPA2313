#include "iostream"

using namespace std;

int main() {
	
	int x;

	cout << "[+] Introduce numarul: "; cin >> x;
	cout << "[~] Divizorii lui " << x << " sunt: ";

	for (int iter = 1; iter <= x; iter++) {
		if (x % iter == 0) {
			cout << iter << " ";
		}
	}


	return 0;

}