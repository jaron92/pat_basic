#include <iostream>
#include <map>

using namespace::std;
map<char, int>mapchar;
char str[3] = { 'C', 'B', 'J' };

int compare(int a, int b) {
	return (((a - b) + 4) % 3) - 1;//lg:1;eq:0;sm:-1
}

int max(int a[], int len){
	int max = 0, maxi=2;
	for (int i = 0; i < len; i++){
		if (a[i] > max){
			max = a[i];
			maxi = i;
		}
		else if (a[i] == max && str[i] <= str[maxi]){
			maxi = i;
		}
	}
	return maxi;
}

int main(){
	int n, win = 0, eq = 0, sum, cwin[3] = { 0 }, close[3] = { 0 };
	char a, b;
	cin >> n;
	sum = n;
	mapchar['J'] = 2;
	mapchar['B'] = 1;
	mapchar['C'] = 0;

	while (n--){
		cin >> a >> b;
		if (compare(mapchar[a], mapchar[b]) == 1){
			win++;
			cwin[mapchar[a]]++;
		}
		else if (compare(mapchar[a], mapchar[b]) == 0){
			eq++;
		}
		else{
			close[mapchar[b]]++;
		}
	}
	cout << win << ' ' << eq << ' ' << sum - win - eq << endl;
	cout << sum - win - eq << ' ' << eq << ' ' << win << endl;
	cout << str[max(cwin, 3)] << ' ' << str[max(close, 3)];
}