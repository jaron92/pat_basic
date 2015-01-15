#include <iostream>
#include <cstring>
#include <string>

using namespace::std;

char f[1001];

int main(){
	int b, c, i, tmp;
	cin >> f >> b;
	c = 0;
	for (int j = 0; j < strlen(f); j++){
		tmp = (f[j] - '0' + c*10) % b;
		f[j] = (f[j] - '0' + c*10) / b + '0';
		c = tmp;
	}
	i = 0;
	while (i < strlen(f)) if (f[i++] != '0') break;
	for (int j = i-1; j <strlen(f); j++) cout<<f[j];
	cout << " " << c;
}