//极度糟糕的实现……
#include <iostream>

using namespace::std;

int main(){
	int n, i, j, k;
	cin >> n;
	int a[100], b[100], c[100];
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	for (i = 0; i < n; i++){
		cin >> b[i];
	}
	for (k = n - 1; k >= 0; k--){
		if (a[k] != b[k])
			break;
	}
	for (i = k; i > 0; i--){
		if (b[i]<b[i - 1]){
			break;
		}
	}
	int flag = 0;
	if (i > 0){
		cout << "Merge Sort" << endl;
		for (j = 2; j <= n; j *= 2){
			for (k = 0; k < n;){
				int limit = k + j;
				while (k+1 < limit && k+1 < n){
					if (b[k] > b[k + 1]){
						flag = 1;
						break;
					}
					k++;
				}
				k++;
				if (flag)
					break;
			}
			if (flag)
				break;
		}
		k = 0;
		for (i = 0; i < n; i += j){
			int l, r, m, p, q;
			l = i;
			r = i + j>n ? n : i + j;
			m = i + j / 2;
			p = l;
			q = m;
			while (p < m&&q < r){
				if (b[p] < b[q]){
					c[k++] = b[p++];
				}
				else{
					c[k++] = b[q++];
				}
			}
			while (p < m){
				c[k++] = b[p++];
			}
			while (q < r){
				c[k++] = b[q++];
			}
		}
		while (k < n){
			c[k] = b[k];
			k++;
		}
		for (i = 0; i < n-1; i++){
			cout << c[i] << ' ';
		}
		cout << c[n-1] << endl;

	}
	else{
		cout << "Insertion Sort" << endl;
		for (i = 1; i<n; i++){
			if (b[i - 1] > b[i])
				break;
		}
		k = i;
		for (i = 0; i <= k; i++){
			if (b[i]>b[k])
				break;
		}
		if (k < n){
			int tmp = b[k];
			for (j = k; j > i; j--){
				b[j] = b[j - 1];
			}
			b[i] = tmp;
		}
		for (i = 0; i < n - 1; i++)
			cout << b[i] << ' ';
		cout << b[n-1] << endl;
	}
}