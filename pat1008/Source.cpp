#include <cstdio>

void reverse(int a[], int b, int c){
	int tmp;
	for (int i = b; i<b + (c - b) / 2; i++){
		tmp = a[c - 1 - i + b];
		a[c - 1 - i + b] = a[i];
		a[i] = tmp;
	}
}

int main(){
	int n, m;
	int a[101];
	scanf("%d%d", &n, &m);
	m = m%n;
	for (int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	reverse(a, 0, n - m);
	reverse(a, n - m, n);
	reverse(a, 0, n);
	printf("%d", a[0]);
	for (int i = 1; i<n; i++) printf(" %d", a[i]);
	return 0;
}