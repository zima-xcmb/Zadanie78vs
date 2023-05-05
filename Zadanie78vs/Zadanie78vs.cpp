#include <iostream>

using namespace std;

int main()
{
    int licznik1, licznik9, n, cyfra;
	for (int i = 2; i <= 12000; i++) {
		int i2 = i;

		bool pierwsza = true;
		for (int j = 2; j < i / 2 + 1; j++) {
			if (i % j == 0) {
				pierwsza = false;
			}
		}

		if (pierwsza == false) {
			continue;
		}

		if (pierwsza == true) {
			licznik1 = 0;
			licznik2 = 0;
			while (i2 >= 1) {
				cyfra = i2 % 10;
				if (cyfra / 1 == 1 && cyfra % 1 == 0) {
					licznik1++;
				}
				if (cyfra / 9 == 1 && cyfra % 9 == 0) {
					licznik9++;
				}
				i2 /= 10;


			}
			if ((licznik1 == 1 && licznik2 == 0) || (licznik1 == 0 && licznik2 == 1)) {
				cout << i << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
