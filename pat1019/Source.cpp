#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace::std;

int a[4];

int* ascend(int n){
	for (int i = 0; i < 4; i++){
		a[i] = n % 10;
		n = n / 10;
	}
	sort(a, a+4);
	return a;
}

int array2num(int *a){
	int sum=0;
	for (int i = 0; i < 4; i++){
		sum = sum * 10 + a[i];
	}
	return sum;
}

int anum(int n) {
	return array2num(ascend(n));
}

int dnum(int n) {
	int *a, tmp;
	a = ascend(n);
	for (int i = 0; i <= 1; i++){
		tmp = a[i];
		a[i] = a[3 - i];
		a[3 - i] = tmp;
	}
	return array2num(a);
}

int main(){
	int n, *b, tmp=0;
	cin >> n;
	if (anum(n) == dnum(n)){
		cout << n << " - " << n << " = " << "0000";
		return 0;
	}
	do{
		tmp = n;
		n = dnum(n) - anum(n);
		cout.fill('0');
		cout << setw(4) << dnum(tmp) << " - " << setw(4) << anum(tmp) << " = " << setw(4) << n << endl;
	} while (n != 6174);
	return 0;
}