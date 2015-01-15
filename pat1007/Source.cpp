#include <cstdio>
#include <cmath>

using namespace::std;

int main(){
	int n, j, prime[10000], num = 0, sum = 0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++){
		for (j = 2; j <= sqrt(float(i)); j++){
			if (i%j == 0) break;
		}
		if (j>sqrt(float(i))) prime[num++] = i;
	}
	for (int i = 0; i<num - 1; i++){
		if (prime[i + 1] - prime[i] == 2) sum++;
	}
	printf("%d", sum);
	return 0;
}