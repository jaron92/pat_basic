#include <cstdio>

int main(){
	int n;
	long long a, b, c;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a + b>c) printf("Case #%d: true\n", i);
		else printf("Case #%d: false\n", i);
	}
}