#include <iostream>
#include <algorithm>

using namespace::std;

int marks[100000] = { 0 };

int main(){
	int n, max=0, id, mark, maxi=0, b=0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> id >> mark;
		marks[id] += mark;
		if (id > b)
			b = id;
	}
	for (int i = 0; i <= b; i++){
		if (marks[i] > max){
			max = marks[i];
			maxi = i;
		}
	}
	cout << maxi << ' ' << max;
	return 0;
}