#include <cstdio>
#include <string>

using namespace::std;

int judge(string &str){
	int psnp, psnt, len;
	psnp = str.find('P', 0);
	psnt = str.find('T', 0);
	len = str.length();

	if (psnp == string::npos || psnt == string::npos || psnp >= psnt - 1){
		return 0;
	}
	else {
		string pre = string(str, 0, psnp);
		string mid = string(str, psnp + 1, psnt - psnp - 1);
		string post = string(str, psnt + 1, len - psnt - 1);
		string sum = pre + mid + post;
		if (sum.find_first_not_of('A') != string::npos) return 0;
		if (post.length() != pre.length()*mid.length())
			return 0;
		else
			return 1;
	}
}

int main(){
	int n;
	char str[101];
	scanf("%d", &n);
	for (; n--;){
		scanf("%s", str);
		string tmp = string(str);//for g++ error warning
		if (judge(tmp))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
