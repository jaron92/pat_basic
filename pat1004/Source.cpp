#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>

using namespace::std;

int main(){
	int n, marks, *ma, min = 100, max = 0, min_n, max_n;
	char name[11], number[11], (*na)[11], (*nu)[11];
	scanf("%d", &n);
	ma = new int(n);
	na = new char[n][11];
	nu = new char[n][11];
	for (; n--;){
		cin >> name >> number >> marks;
		strcpy(na[n], name);
		strcpy(nu[n], number);
		ma[n] = marks;
		if (marks>max){
			max = marks;
			max_n = n;
		}
		if (marks<min){
			min = marks;
			min_n = n;
		}
	}
	cout << na[max_n] << ' ' << nu[max_n] << endl;
	cout << na[min_n] << ' ' << nu[min_n] << endl;
}