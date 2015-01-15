#include <cstdio>

int main(){
	int n, a[1000], sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, count2 = 0, count4 = 0, max = -1;
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n; i++){
		if (a[i] % 5 == 0 && a[i] % 2 == 0) sum1 += a[i];
		if (a[i] % 5 == 1){
			count2++;
			sum2 += count2 % 2 ? a[i] : (-1)*a[i];
		}
		if (a[i] % 5 == 2) sum3++;
		if (a[i] % 5 == 3) {
			count4++;
			sum4 += a[i];
		}
		if (a[i] % 5 == 4 && a[i]>max) max = a[i];
	}

	if (!sum1) printf("N ");
	else printf("%d ", sum1);

	if (!count2) printf("N ");
	else printf("%d ", sum2);

	if (!sum3) printf("N ");
	else printf("%d ", sum3);

	if (!sum4) printf("N ");
	else printf("%.1f ", sum4*(1.0) / count4);

	if (max == -1) printf("N");
	else printf("%d", max);
}