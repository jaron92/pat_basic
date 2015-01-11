#include <iostream>

using namespace::std;

int main(){
	unsigned int a, b, c, d, e[32], i;
	cin >> a >> b >> d;
	c = a + b;
	i = 0;
	while (c > 0){
		e[i] = c%d;
		c = c / d;
		i++;
	}
	for (int j = i-1; j >= 0; j--)
		cout << e[j];
	if (i == 0){
		cout << '0';
	}
	return 0;
}