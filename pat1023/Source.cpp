#include <iostream>
#include <algorithm>

using namespace::std;

int main(){
	int i, a[10], k, flag=0, min;
	k = 0;
	for (int i = 0; i < 10;i++){
		cin >> a[i];
		if (i>0 && a[i] > 0 && flag == 0){
			min = i;
			a[i]--;
			flag = 1;
		}
	}
	cout << min;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < a[i]; j++){
			cout << i;
		}
	}
	return 0;
}