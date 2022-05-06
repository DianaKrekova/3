#ifndef EX3_H
#define EX3_H
#include <iostream>
#include <cmath>
#define M_PI 3.14
using namespace std;
class Complex {
private:
	double im;
	double re;
public:
	Complex(double im, double re);
	void printComplex();
	Complex sumComplex(Complex c1);
	Complex complexMulzply(Complex c1);
	Complex complexSubtract(Complex c1);
	Complex complexDivide(Complex c1);
	double absComplex();
};

class Vector {
private:
	double x;
	double y;
public:
	Vector(double x, double y);
	void printVector();
	Vector sumVector(Vector v1);
	Vector multiplynumberVector(double n);
	double absVector();
};

class Circle {
private:
	double radius;
public:
	Circle(double radius);
	double getRadius();
	double area();
	void print();
};

#endif