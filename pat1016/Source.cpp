#include <cstdio>
#include <cstring>

int main(){
	char a[11], b[11];
	int da, db, sum=0, c=1;
	scanf("%s%d%s%d", a, &da, b, &db);
	for (int i = 0; i < strlen(a); i++){
		if (a[i] - '0' == da){
			sum += c*da;
			c *= 10;
		}
	}
	c = 1;
	for (int i = 0; i < strlen(b); i++){
		if (b[i] - '0' == db){
			sum += c*db;
			c *= 10;
		}
	}
	printf("%d", sum);
}