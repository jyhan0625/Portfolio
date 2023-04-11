#include<iostream>
using namespace std;

double power(double base, int exponent) {
    // 재귀함수 내에서 조건문을 지속적으로 실행하지 않기 위해 지수가 음수일 경우 밑을 역수화 시킴으로써 지수를 양수로 변환하겠습니다. 이 과정은 31,32,33번 줄에서 이루어집니다.
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);

}

int main() {

    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    if (base == 1 or exponent == 0) // 어떠한 경우에도 1을 출력합니다.
        cout << "Power of number using recursive method: " << 1;

    else if (exponent == 1) // 어떠한 경우에도 자기 자신을 출력합니다.
        cout << "Power of number using recursive method: " << base;

    else if (base == 0) { // 몫이 0인 경우,

        if (exponent < 0) // 0을 나누는 것은 불가합니다.
            cout << "Cannot calculate";

        else if (exponent > 0) // 0의 양의 제곱수를 출력합니다.
            cout << "Power of number using recursive method: " << 0;
    }

    else {
        // 5번 줄 주석내용에 해당하는 과정입니다.
        if (exponent < 0) {

            base = 1 / base; // 밑을 역수로 변환합니다.
            exponent = -exponent; // 지수를 양수로 변환합니다.

        }

        cout << "Power of number using recursive method: " << power(base, exponent);
    }

    return 0;
}