#include <cstdio>
#include <cstring>

char toLower(char a){
	if (a >= 'A'&&a <= 'Z')	return a - 'A' + 'a';
	else return a;
}

int isHigherorDigit(char a){
	if (a >= 'A'&&a <= 'N' || a >= '0'&&a <= '9') return 1;
	else return 0;
}

int isHighter(char a){
	if (a >= 'A'&&a <= 'G') return 1;
	else return 0;
}

int isalf(char a){
	if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z'))
		return 1;
	else
		return 0;
}

int main(){
	char a[61], b[61], c[61], d[61], *week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int i, flag = 0, f, s, hour, minute;
	scanf("%s%s%s%s", a, b, c, d);

	i = 0;
	while (1){
		if (a[i] == b[i] && isHigherorDigit(a[i]) && flag == 1){
			s = i;
			break;
		}
		if (a[i] == b[i] && isHighter(a[i]) && flag == 0){
			flag = 1;
			f = i;
		}
		if (i>strlen(a)) break;
		i++;
	}
	printf("%s ", week[toLower(a[f]) - 'a']);
	if (toLower(a[s]) >= 'a'&&toLower(a[s]) <= 'z')
		hour = toLower(a[s]) - 'a' + 10;
	else
		hour = a[s] - '0';

	i = 0;
	while (1){
		if (c[i] == d[i] && isalf(c[i]) || i >= strlen(c)) break;
		i++;
	}
	minute = i;
	printf("%02d:%02d", hour, minute);
}