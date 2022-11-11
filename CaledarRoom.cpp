# quiz-3
#include <iostream>

using namespace std;

int main() {
	int month;
	int room = 1;
	char input = '!';
	int num = 1;
	int num2 = 0;
	int count = 0;

	cout << "question 1)" << endl << endl;

	cout << "enter month number" << endl;
	cin >> month;
	if (month == 1)
		cout << "31 days" << endl << endl;
	else if (month == 3)
		cout << "31 days" << endl << endl;
	else if (month == 5)
		cout << "31 days" << endl << endl;
	else if (month == 7)
		cout << "31 days" << endl << endl;
	else if (month == 8)
		cout << "31 days" << endl << endl;
	else if (month == 10)
		cout << "31 days" << endl << endl;
	else if (month == 12)
		cout << "31 days" << endl << endl;
	else if (month == 2)
		cout << "28 days" << endl << endl;
	else if (month == 4)
		cout << "30 days" << endl << endl;
	else if (month == 6)
		cout << "30 days" << endl << endl;
	else if (month == 9)
		cout << "30 days" << endl << endl;
	else if (month == 11)
		cout << "30 days" << endl << endl;
	else
		cout << "you suck" << endl << endl;

	cout << "question 2)" << endl << endl;

	while (input != 'q') {
		
		switch (room) {
			case 1:
				cout << "you in room 1. you can go e, w, or n. q to quit" << endl;
				cin >> input;
				if (input == 'n')
					room = 2;
				else if (input == 'w')
					room = 3;
				else if (input == 'e')
					room = 4;
				break;
			case 2:
				cout << "you in room 2. you can go s. q to quit" << endl;
				cin >> input;
				if (input == 's')
					room = 1;
				
				break;


			case 3:
				cout << "you in room 3. you can go e. q to quit" << endl;
				cin >> input;
				if (input == 'e')
					room = 1;
				
				break;

			case 4:
				cout << "you in room 4. you can go w or s. q to quit" << endl;
				cin >> input;
				if (input == 's')
					room = 5;
				else if (input == 'w')
					room = 1;
				break;
			case 5:
				cin >> input;
				cout << "you in room 5. you can go n. q to quit" << endl;
				if (input == 'n')
					room = 4;
				break;


		}





	}
	cout << endl << endl;
	cout << "question 3)" << endl << endl;

	cout << "enter number" << endl;
	
	while (num != 0) {
		cin >> num;
		if (num2 < num and count <= num) {
			for (num2 < num; num2++;) {
				cout << num2;
				count++;

			}



		}
		if (num2 > num and count <= num) {
			for (num2 > num; num2--;) {
				cout << num2;
				count++;

			}



		}


	}





}
