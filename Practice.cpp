#include<iostream>
using namespace std;

double power(double base, int exponent) {
    // ����Լ� ������ ���ǹ��� ���������� �������� �ʱ� ���� ������ ������ ��� ���� ����ȭ ��Ŵ���ν� ������ ����� ��ȯ�ϰڽ��ϴ�. �� ������ 31,32,33�� �ٿ��� �̷�����ϴ�.
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

    if (base == 1 or exponent == 0) // ��� ��쿡�� 1�� ����մϴ�.
        cout << "Power of number using recursive method: " << 1;

    else if (exponent == 1) // ��� ��쿡�� �ڱ� �ڽ��� ����մϴ�.
        cout << "Power of number using recursive method: " << base;

    else if (base == 0) { // ���� 0�� ���,

        if (exponent < 0) // 0�� ������ ���� �Ұ��մϴ�.
            cout << "Cannot calculate";

        else if (exponent > 0) // 0�� ���� �������� ����մϴ�.
            cout << "Power of number using recursive method: " << 0;
    }

    else {
        // 5�� �� �ּ����뿡 �ش��ϴ� �����Դϴ�.
        if (exponent < 0) {

            base = 1 / base; // ���� ������ ��ȯ�մϴ�.
            exponent = -exponent; // ������ ����� ��ȯ�մϴ�.

        }

        cout << "Power of number using recursive method: " << power(base, exponent);
    }

    return 0;
}