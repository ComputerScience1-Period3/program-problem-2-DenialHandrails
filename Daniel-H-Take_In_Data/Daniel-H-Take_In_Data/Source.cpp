/*
Daniel Honrales
Take In Data
Allows for user to input data and program outputs entered data
*/

//Libaraies
#include <iostream>
#include <conio.h>

// Namespaces
using namespace std;

//Functions()

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	int siblings;
	char last_initial;
	bool reality_check;
	double pi;
	int calc1, calc2, calc3, calc4, calc5;

	cout << "How many siblings do you have? (single number)";
	cin >> siblings;
	cout << "What is your last initial? (Single Capital Letter)";
	cin >> last_initial;
	cout << "Is the sky blue? Yes(1) or No(0)";
	cin >> reality_check;
	cout << "What is pi? (to the hundredths)";
	cin >> pi;

	cout << "You have " << siblings << " siblings." << endl;
	cout << "Your last initial is " << last_initial << "." << endl;
	cout << boolalpha << "It is " << reality_check << " that the sky is blue." << endl;
	cout << "Pi is " << pi << endl;
	pause();

	cout << "What is your favorite integer? (Calc1)" << endl;
	cin >> calc1;
	cout << "What is your least favorite integer? (Calc2)" << endl;
	cin >> calc2;
	cout << "Choose a random integer! (Calc3)" << endl;
	cin >> calc3;
	calc4 = calc1 + calc2;
	cout << "Calc1 plus Calc2 is " << calc4 << endl;

	if (calc4 > calc1) {
		cout << "Calc2 is equal to or more than 0." << endl;
	}
	else {
		cout << "Calc2 is equal to or less than 0." << endl;
	}

	calc5 = calc3 % calc2;
	cout << "Calc3 % Calc2 is " << calc5 << endl;
		if (calc5 == 0) {
			cout << "Calc3 can be divided by Calc2 evenly" << endl;
	}
		else {
			cout << "Calc3 cannot be divided by Calc2 evenly." << endl;
		}
	pause();
}