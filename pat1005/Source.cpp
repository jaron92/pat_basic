#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace::std;

bool compare(int a, int b){
	return a>b;
}
int c[101] = { 0 }, a[100], b[100], tmp[100];
int main(){
	int n,  t, count,  j;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> a[i];
		c[a[i]] = 1;
	}
	for (int i = 0; i<n; i++) {
		if (c[a[i]] == 0)
			continue;
		t = a[i];
		count = 0;
		while (t != 1){
			b[count++] = t;
			if (t % 2 == 0){
				t = t / 2;
			}
			else{
				t = (3 * t + 1) / 2;
			}
		}

		for (int j = 0; j<n; j++){
			for (int k = 1; k<count; k++){
				if (b[k] == a[j]){
					c[b[k]] = 0;
					break;
				}
			}
		}
	}

	j = 0;
	for (int i = 0; i<101; i++){
		if (c[i] == 1) tmp[j++] = i;
	}

	sort(tmp, tmp + j, compare);
	printf("%d", tmp[0]);
	for (int i = 1; i<j; i++) printf(" %d", tmp[i]);
	return 0;
}