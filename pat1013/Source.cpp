#include <cstdio>
#include <cmath>

int main(){
	int m, n, j, a[10000], count = 0;
	scanf("%d%d", &m, &n);
	for (int i = 2; count<n; i++){
		for (j = 2; j <= sqrt(float(i)); j++){
			if (i%j == 0) break;
		}
		if (j>sqrt(float(i))) a[count++] = i;
	}
	for (int i = m - 1; i<n - (n - m + 1) % 10; i++){
		if ((i - m + 1) % 10 == 9){
			if (i != n - 1) printf("%d\n", a[i]);
			else printf("%d", a[i]);
		}
		else printf("%d ", a[i]);
	}
	for (int i = n - (n - m + 1) % 10; i<n - 1; i++) printf("%d ", a[i]);
	if ((n - m + 1) % 10 != 0)	printf("%d", a[n - 1]);

}