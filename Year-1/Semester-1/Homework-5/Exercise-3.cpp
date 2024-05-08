#include "iostream"

using namespace std;

int main() {

	int x;

	cout << "[+] Introduce numarul: "; cin >> x;

	if (1 < x && x < 10) {
		for (int iter = 0; iter <= 10; iter ++) {
			cout << iter << " * " << x << " = " << iter * x << endl;
		}
	} else {
		cout << "[!] Nu respecta conditia";
	}


	return 0;

}