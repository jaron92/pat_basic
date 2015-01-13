#define _CRT_SECURE_NO_WARNINGS //for vc++ 
#include <cstdio>
#include <cstring>
#include <cctype>

char broken[100001], input[100001];

int main(){
	int i, j, flag = 0, shift = 0, len1, len2;
	if (scanf("%s%s", broken, input) == 1){
		strcpy(input, broken);
		broken[0] = '\0';
	}
	len1 = strlen(input);
	len2 = strlen(broken);
	for (j = 0; j < strlen(broken); j++){
		if (broken[j] == '+'){
			shift = 1;
			break;
		}
	}
	for (i = 0; i < len1; i++){
		for (j = 0; j < len2; j++){
			if (tolower(input[i]) == tolower(broken[j])){
				break;
			}
		}
		if (j != len2 || shift == 1 && isupper(input[i]))
			continue;
		else
			putchar(input[i]);
	}
	return 0;
}