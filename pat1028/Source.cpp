#define _CRT_SECURE_NO_WARNINGS //handle warning
#include <iostream>
#include <cstring>

using namespace::std;

char name[100000][6];
char age[100000][11];

int main(){
	int n, j, young = 0, old = 0;
	char tmpage[11], tmpname[6];
	cin >> n;
	j = 0;
	for (int i = 0; i < n; i++){
		cin >> tmpname >> tmpage;
		if (strcmp(tmpage, "1814/09/06") >= 0 && strcmp(tmpage, "2014/09/06") <= 0){
			strcpy(age[j], tmpage);
			strcpy(name[j], tmpname);
			j++;
		}
		if (strcmp(age[young], age[j - 1]) < 0){
			young = j - 1;
		}
		if (strcmp(age[old], age[j - 1]) > 0){
			old = j - 1;
		}
	}
	if (j == 0){
		cout << j;
	}
	else{
		cout << j << ' ' << name[old] << ' ' << name[young];
	}
	return 0;
}