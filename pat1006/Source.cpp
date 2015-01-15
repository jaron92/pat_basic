#include <cstdio>
#include <cstring>

int main(){
	int n, len;
	char str[4];
	scanf("%d", &n);
	sprintf(str, "%d", n);
	len = strlen(str);
	for (int i = 0; str[i] != '\0'; i++){
		for (int j = 0; j<str[i] - '0'; j++){
			if (len - i == 3) putchar('B');
			if (len - i == 2) putchar('S');
			if (len - i == 1) putchar('1' + j);
		}
	}
	return 0;
}