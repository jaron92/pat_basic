#include <iostream>

using namespace::std;

int main(){
	int a, i;
	cin >> a;

	i = 0;
	while (a != 1){
		i++;
		if (a % 2 == 0) {
			a = a / 2;
		}
		else if (a % 2 == 1) {
			a = (3 * a + 1) / 2;
		}
	}
	cout << i << endl;
	return 0;
}