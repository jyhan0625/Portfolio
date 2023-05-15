#include <iostream>
#include <string>
using namespace std;

int main() {

	int row;
	int col;
	const int maxRows = 3;
	const int maxCols = 3;
	int a[maxRows][maxCols];
	string Check;

	cout << "기존에 주어진 템플릿으로 진행하시겠습니까? Yes or No" << endl;
	cin >> Check;

	if (Check == "Yes") {

		for (row = 0; row < maxRows; row++)
		{
			for (col = 0; col < maxCols; col++)
			{
				a[row][col] = rand() % 20;
			}
		}

	}

	else
	{
		for (row = 0; row < maxRows; row++)
		{
			for (col = 0; col < maxCols; col++)
			{
				cout << "Please enter value of element number " << row <<
					" , " << col << endl;
				cin >> a[row][col];
			}
		}
	}


	for (row = 0; row < maxRows; row++) {

		for (col = 0; col < maxCols; col++) {

			cout << a[row][col] << " ";

		}

		cout << "\n";

	}

	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "행을 역으로 출력해보시겠습니까? Yes or No" << endl;
	cin >> Check;

	if (Check == "Yes") {

		for (row = maxRows - 1; row >= 0; row--) {

			for (col = 0; col < maxCols; col++) {

				cout << a[row][col] << " ";

			}

			cout << '\n';

		}

	}

	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "열을 역으로 출력해보시겠습니까? Yes or No" << endl;
	cin >> Check;

	if (Check == "Yes") {

		for (row = 0; row < maxRows; row++) {

			for (col = maxCols-1; col >= 0; col--) {

				cout << a[row][col] << " ";

			}

			cout << '\n';

		}

	}

	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "전치행렬로 출력해보시겠습니까? Yes or No" << endl;
	cin >> Check;

	if (Check == "Yes") {

		for (col = 0; col < maxCols; col++) {

			for (row = 0; row < maxRows; row++) {

				cout << a[row][col] << " ";

			}

			cout << '\n';

		}

	}



}
