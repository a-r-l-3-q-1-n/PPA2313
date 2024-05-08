#include "iostream"

using namespace std;

int main() {
	
	int x, y;

	cout << "[+] Introduce numarul: "; cin >> x;
	cout << "[+] Introduce numarul: "; cin >> y;

	for (int iter = 0; iter < y; iter++) {
		x = x * 10;
	}

	cout << "[~] Date de iesire: " << x;


	return 0;

}