#include <iostream>
#include <map>
#include <cctype>

using namespace::std;

map<char, int>mapchar;

int main(){
	char a[81], b[81], m[81], tmp;
	int i=0, j=0, k=0;
	cin >> a >> b;
	while (b[i] != '\0' && a[j] != '\0'){
		if (b[i] != a[j]){
			tmp = isalpha(a[j]) ? toupper(a[j]) : a[j];
			mapchar[tmp] = 1;
			m[k++] = tmp;
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	if (a[j] != '\0'){
		while (a[j] != '\0'){
			tmp = isalpha(a[j]) ? toupper(a[j]) : a[j];
			mapchar[tmp] = 1;
			m[k++] = tmp;
			j++;
		}
	}
	for (int i = 0; i < k; i++){
		if (mapchar[m[i]] == 1){
			cout << m[i];
			mapchar[m[i]] = 0;
		}
	}
	return 0;
}