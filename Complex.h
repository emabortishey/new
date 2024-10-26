#pragma once
class Complex
{
	int a, b, i = -1;
public:
	void set_a(int a_P) { a = a_P; }
	void set_b(int b_P) { b = b_P; }

	int operator+(const Complex& obj) { return (a + obj.a) + (b + obj.b); }
	int operator-(const Complex& obj) { return (a - obj.a) + (b - obj.b); }
	int operator*(const Complex& obj) { return (a * obj.a - b * obj.b) + (b * obj.a + a * obj.b); }
	int operator/(const Complex& obj) { return ((a * obj.a - b * obj.b)/obj.a*obj.b) + ((b * obj.a + a * obj.b)/obj.a*obj.b); }

	int get_a() { return a; }
	int get_b() { return b; }
	int get_i() { return i; }
};

