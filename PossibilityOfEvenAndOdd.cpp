#include <iostream>
using namespace std;

int main() {

	int times, odd = 0, even = 0, random;

	cout << "복원추출 횟수의 제곱근 입력: ";
	cin >> times;

	for (int i = 0; i < times; i++) {

		for (int j = 0; j < times; j++) {
			random = rand();
			if (random % 2 == 0)
				even++;
			else
				odd++;
		}

	}

	cout << times * times << "횟수의 복원추출 중 짝수의 개수는 " << even << " 홀수의 개수는 " << odd << " 입니다." << endl << "즉, 짝수가 나올 확률은 " <<((double) even / (times * times)) * 100 << "% 이며" << " 홀수가 나올 확률은 " << ((double)odd / (times * times)) * 100 << "% 입니다.";
}
