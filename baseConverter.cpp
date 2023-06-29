#include <iostream>
#include <string>
using namespace std;

int main() {

	while (true) {

		int order;
		cout << "Enter 0 to convert a number within base 36 to decimal." << endl;
		cout << "Enter 1 to convert a decimal number to a number within base 36" << endl;
		cout << "Enter 2 to exit" << endl;
		cout << "Enter: ";
		cin >> order;

		if (order == 2) return 0;

		else if (order == 1) {

			cout << endl;

			int num, jinbub, check = 1, point = 0, later = 0;
			cout << "Enter a decimal number: ";
			cin >> num;
			cout << "Enter the base you want: ";
			cin >> jinbub;

			cout << num << " to " << jinbub << " base: ";

			while (num > jinbub) {

				int temp = 1, count = 0, point2 = 0;

				while (temp * jinbub < num) {

					temp *= jinbub;
					if (check) point++;
					else point2++;
				}

				check = 0;

				while (temp * (count + 1) < num) count++;

				temp *= count;
				num -= temp;

				if (later == false);

				else if (point - point2 == 1) point = point2;

				else {

					for (int i = 0; i < point - point2 - 1; i++) cout << 0;
					point = point2;

				}

				if (count >= 10) {

					cout << char(count + 55);

				}
				else {

					cout << char(count + 48);

				}

				later = 1;
			}

			for (int i = 0; i < point - 1; i++) {

				cout << 0;

			}


			if (num >= 10) {

				cout << char(num + 55) << endl;
				cout << endl;

			}
			else {

				cout << char(num + 48) << endl;
				cout << endl;

			}
		}

		else if (order == 0) {

			cout << endl; 

			string num;
			int jinbub, len, result = 0;
			cout << "Enter the number you want to convert: ";
			cin >> num;
			cout << "Enter its base: ";
			cin >> jinbub;
			cout << num << " of " << jinbub << " base to decimal number: ";
			len = num.length();

			for (int i = len; i >= 1; i--) {

				int temp = 1;

				for (int j = 0; j < i - 1; j++) {

					temp *= jinbub;

				}


				if ((int)num[len - i] >= 65) {

					result += temp * ((int)num[len - i] - 55);


				}

				else {

					result += temp * ((int)num[len - i] - 48);

				}

			}

			cout << result << endl;
			cout << endl;


		}

	}
}
