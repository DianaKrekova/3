#include "Ex3.h"

int main() {
	cout << "Vector:" << endl;
	Vector A(4.5, 4.4);
	A.printVector();
	cout << "Vector x2:" << endl;
	Vector A2 = A.multiplynumberVector(2);
	A2.printVector();
	cout << "Vector module:" << A.absVector() << endl;
	cout << "Circle:" << endl;
	Circle B(4.5);
	B.print();
	cout << "Complex:" << endl;
	Complex C(-1, -2);
	Complex D(-5, 7);
	Complex R = D.sumComplex(C);
	R.printComplex();
	cout << C.absComplex() << endl;
	return 0;
}