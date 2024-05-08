#include "iostream"

using namespace std;

int main() {

	int x, y;
	
	cout << "[1] Etaj: "; cin >> x;
	cout << "[2] Etaj: "; cin >> y;
	cout << endl;

	for (int iter = x; iter <= y; iter++) {
		cout << x << " [↑] Se urca..." << endl;
	}
	cout << "[~] Stop";


	return 0;

}