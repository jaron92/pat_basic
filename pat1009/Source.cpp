#include <cstdio>
#include <cstring>
#include <string>

using namespace::std;

int main(){
	char str[81];
	int i, j;
	string sum;
	gets(str);
	string a = string(str);
	i = a.length();
	j = i;
	do{
		i = a.rfind(' ', i - 1);
		if (i != string::npos)
			sum = sum + string(str, i + 1, j - i - 1) + string(" ");
		else
			sum = sum + string(str, i + 1, j - i - 1);;
		j = i;

	} while (i != string::npos);
	printf("%s", sum.c_str());
	return 0;
}