#include <iostream>
#include <algorithm>

using namespace::std;

int a[100000];

int main(){
	int n, i, j, k, max=1;
	long p;
	cin >> n >> p;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for (i = 0; i<n; i++)
		for (j = i + max - 1; j<n; j++)
		{
			if (a[i] * p<a[j])
				break;
			if (j - i + 1>max)
				max = j - i + 1;
		}
	cout << max;
	return 0;
}