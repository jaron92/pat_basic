#include <cstdio>

char *pinyin[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "shi" };

int main(){
	char d[100], str[100];
	int sum = 0, len = 0, j;
	scanf("%s", d);
	for (int i = 0; d[i] != '\0'; i++) {
		sum += d[i] - '0';
	}
	sprintf(str, "%d", sum);
	printf("%s", pinyin[str[0] - '0']);
	for (int i = 1; str[i] != '\0'; i++) {
		j = str[i] - '0';
		printf(" %s", pinyin[j]);
	}
	return 0;
}