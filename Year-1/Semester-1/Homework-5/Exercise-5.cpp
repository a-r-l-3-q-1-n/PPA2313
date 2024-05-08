#include "iostream"

using namespace std;

int main() {

	int x;

	cout << "[+] Introduce numarul: "; cin >> x;
	
	if (x < 2) {
		cout << "[~] Numarul nu este prim";
	} else {
		for (int iter = 2; iter * iter <=x; iter++) {
			if (x % iter == 0) {
				cout << "[~] Numarul nu este prim";
				break;
			} else {
				cout << "[~] Numarul este prim";
			}
		}
	}


	return 0;

}