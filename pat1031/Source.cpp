#include <iostream>

using namespace::std;

int w[] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
char verif[] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };

int main(){
	int n, i, j, flag = 0;
	char str[19];
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> str;
		for (j = 0; j < 17; j++){
			if (str[j] == 'X')
				break;
		}
		if (j < 17){
			flag = 1;
			cout << str << endl;
		}
		else{
			int sum = 0;
			for (int k = 0; k < 17; k++){
				sum += (str[k] - '0') * w[k];
			}
			if (verif[sum % 11] != str[17]){
				flag = 1;
				cout << str << endl;
			}
		}
	}
	if (flag == 0)
		cout << "All passed" << endl;
	return 0;
}