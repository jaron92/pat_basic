#include <cstdio>

int main(){
	int a[1001], b[1001], c, p = 0;
	while (scanf("%d%d", &a[p], &b[p]) != EOF)
		p++;
	for (int i = 0; i<p; i++){
		a[i] = b[i] * a[i];
		b[i] = b[i] - 1;
		if (i<p - 2) printf("%d %d ", a[i], b[i]);
	}
	if (b[p - 1] != -1){
		printf("%d %d ", a[p - 2], b[p - 2]);
		printf("%d %d", a[p - 1], b[p - 1]);
	}
	else {
		printf("%d %d", a[p - 2], b[p - 2]);
	}

	return 0;
}