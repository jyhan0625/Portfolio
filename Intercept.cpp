#include <iostream>
using namespace std;

class quadratic;

class straightLine {

	double m, n;

public:

	straightLine(double, double);
	straightLine() { m = 1; n = 5; };
	~straightLine() {};

	void Display() {
		
		cout << "f(x) = " << m << "x + " << n << endl;
	
	};

	friend void Intercept(straightLine, quadratic);

};

straightLine::straightLine(double k, double s) {
	m = k;
	n = s;
}


class quadratic {

	double a, b, c;

public:

	quadratic(double, double, double);
	quadratic() { a = -1; b = 5; c = 7; };
	~quadratic() {};

	void Display() {

		cout << "g(x) = " << a << "x^2 + " << b << "x + " << c << endl;

	};

	friend void Intercept(straightLine, quadratic);



};

quadratic::quadratic(double k, double s, double l) {
	a = k;
	b = s;
	c = l;
}

void Intercept(straightLine A, quadratic B) {

	A.Display();
	B.Display();

	cout << "-------------------\n-------------------\n";

	double newa = B.a, newb = B.b - A.m, newc = B.c - A.n;

	cout << "Intercept point between two functions is the answer of " << newa << "x^2 + " << newb << "x + " << newc << " = 0.\n";

	if (newb * newb - 4 * newa * newc < 0)
		cout << "There is no answer. Therefore, there is no intercept point between f(x) and g(x).\n";

	else if (newb * newb - 4 * newa * newc == 0) {

		cout << "There is one answer. That means f(x) is tangent from g(x).\n";
		double xpoint = -newb / 2 * newa;
		double ypoint = A.m * xpoint + A.n;
		cout << "The point is (" << xpoint << " , " << ypoint << " )\n";

	}

	else {

		cout << "There are two answers.\n";
		double xpoint1 = -newb + sqrt(newb * newb - 4 * newa * newc) / 2 * newa;
		double xpoint2 = -newb - sqrt(newb * newb - 4 * newa * newc) / 2 * newa;
		double ypoint1 = A.m * xpoint1 + A.n;
		double ypoint2 = A.m * xpoint2 + A.n;
		cout << "The first point is (" << xpoint1 << " , " << ypoint1 << " )\n";
		cout << "The second point is(" << xpoint2 << ", " << ypoint2 << ")\n";
	}




}



int main() {

	cout << "f(x) = mx + n\t" << "Define m and n\n";
	double m, n;
	cin >> m >> n;
	straightLine f(m, n);

	cout << "g(x) = ax^2 + bx + c\t" << "Define a, b and c\n";
	double a, b, c;
	cin >> a >> b >> c;
	quadratic g(a, b, c);

	cout << "-------------------\n-------------------\n";

	Intercept(f, g);

}