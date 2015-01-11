#include <iostream>

using namespace::std;

int main(){
	int i, j, power;
	char a[9999];
	cin >> a;
	for (i = 1; a[i] != 'E'; i++);
	power = atoi(a + i + 1);
	if (a[0] == '-')
		cout << '-';
	if (power > 0){
		int c = 1;
		if (power > i - 3){//power is larger than effective digits length
			while (a[c] == '0' || a[c] == '.') c++;
			for (j = c; j < i; j++){
				if (a[j] == '.')
					continue;
				cout << a[j];
			}
			for (int k = 0; k < power - j + 3; k++){
				cout << '0';
			}
		}
		else{
			c = 1;
			while (c < power + 2){
				if (a[c] != '.' && a[c] != '0')
					break;
				c++;
			}
			for (int k = c; k < i; k++){
				if (a[k] == '.')
					continue;
				if (power + 3 == k){
					cout << '.';
				}
				cout << a[k];
			}
		}
	}
	else if (power < 0){
		for (int k = 0; k < -power; k++){
			if (k == 1)
				cout << '.';
			cout << '0';
		}
		for (int k = 1; k < i; k++){
			if (a[k] == '.')
				continue;
			cout << a[k];
		}
	}
	else {
		for (int k = 1; k < i; k++){
			cout << a[k];
		}
	}
}