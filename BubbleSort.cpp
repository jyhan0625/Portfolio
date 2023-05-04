#include <iostream>
using namespace std;

void getnumber(int array[], const int);

void showarray(int array[], const int);

void bubble(int array[], const int);


int main() {

	int scale;
	cout << "100 이하의 원하는 수 만큼의 배열 크기를 입력하세요 : ";
	cin >> scale;
	int newarray[100];
	getnumber(newarray, scale);
	showarray(newarray, scale);
	bubble(newarray, scale);
	showarray(newarray, scale);



}

void getnumber(int newarray[], const int scale) {

	int i;

	for (i = 0; i < scale; i++) {

		newarray[i] = rand() % 30 + i;

	}

}

void showarray(int newarray[], const int scale) {

	int i;

	for (i = 0; i < scale; i++) {

		cout << newarray[i] << " ";

	}

	cout << "\n";

}

void bubble(int newarray[], const int scale) {

	int i, j, temp;

	for (j = 0; j < scale - 1; j++) {

		for (i = 0; i < scale - 1-j; i++) {

			if (newarray[i] > newarray[i + 1]) {

				temp = newarray[i];
				newarray[i] = newarray[i + 1];
				newarray[i + 1] = temp;

			}

		}

	}

}
