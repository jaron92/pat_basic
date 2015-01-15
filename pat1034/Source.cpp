#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace::std;

long gcd(long m, long n){
	long c = m%n;
	while (c){
		m = n;
		n = c;
		c = m%n;
	}
	return n;
}

void format_output(long num, long den){
	long flag = 0;
	if (num == 0){
		cout << '0';
		return;
	}
	if (den == 0){
		cout << "Inf";
		return;
	}
	if (den < 0){
		num = -num;
		den = -den;
	}
	if (num < 0){
		flag = 1;
		num = -num;
	}
	long ratio;
	ratio = gcd(num, den);
	num /= ratio;
	den /= ratio;
	
	if (num / den != 0){
		if (flag)
			cout << "(-";
		cout << num / den;
		if (num%den != 0)
			cout << ' ' << num%den << '/' << den;
		if (flag)
			cout << ')';
	}
	else {
		if (flag)
			cout << "(-";
		cout << num << '/' << den;
		if (flag)
			cout << ')';
	}
}

void compute(long num1, long den1, long num2, long den2, char type){
	long lcm, num, den;
	lcm = den1*den2 / gcd(den1, den2);
	if (type == '+'){
		num = num1*lcm / den1 + num2*lcm / den2;//+
		den = lcm;
	}
	if (type == '-'){
		num = num1*lcm / den1 - num2*lcm / den2;//-
		den = lcm;
	}
	if (type == '*'){
		num = num1*num2;//*
		den = den1*den2;
	}
	if (type == '/'){
		num = num1*den2;///
		den = den1*num2;
	}
	format_output(num1, den1);
	cout << ' ' << type << ' ';
	format_output(num2, den2);
	cout << " = ";
	format_output(num, den);
	cout << endl;
}

int main(){
	char a[100], b[100];
	cin >> a >> b;
	string a1, a2, b1, b2;
	long p, den1, den2, num1, num2, den, num;
	p = string(a).find('/');
	a1 = string(a, p);
	a2 = string(a + p + 1, strlen(a) - p - 1);
	p = string(b).find('/');
	b1 = string(b, p);
	b2 = string(b + p + 1, strlen(b) - p - 1);
	num1 = atoi(a1.c_str());
	den1 = atoi(a2.c_str());
	num2 = atoi(b1.c_str());
	den2 = atoi(b2.c_str());
	if (den1 == 0 || den2 == 0){
		return 0;
	}
	compute(num1, den1, num2, den2, '+');
	compute(num1, den1, num2, den2, '-');
	compute(num1, den1, num2, den2, '*');
	compute(num1, den1, num2, den2, '/');
	return 0;
}