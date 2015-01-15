#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace::std;

int n, l, h;

typedef struct student{
	int id;
	int de;
	int cai;
}student, *stu;

student s[100000], f[100000];

bool is_great(student s){
	if (s.cai >= h&&s.de >= h)
		return true;
	else
		return false;
}

bool is_good(student s){
	if (s.cai < h&&s.de >= h)
		return true;
	else
		return false;
}

bool is_soso(student s){
	if (s.cai < h&&s.de < h&&s.cai <= s.de )
		return true;
	else
		return false;
}

bool is_suck(student s){
	if (s.cai < h&&s.de<h&&s.cai>s.de || s.cai >= h&&s.de < h&&s.cai > s.de)
		return true;
	else
		return false;
}

bool compare(student s1, student s2){
	int m = s1.de + s1.cai - s2.de - s2.cai;
	if (m != 0)
		return m > 0;
	else{
		int n = s1.de - s2.de;
		if (n != 0){
			return n > 0;
		}
		else{
			return s1.id < s2.id;
		}
	}
}

int main(){
	int id, de, cai, count;
	scanf("%d%d%d", &n, &l, &h);
	count = 0;
	for (int i = 0; i < n; i++){
		scanf("%d%d%d", &id, &de, &cai);
		if (de >= l&&cai >= l){
			s[count].id = id;
			s[count].de = de;
			s[count].cai = cai;
			count++;
		}
	}
	cout << count << endl;
	int l1 = 0, l2 = 0, l3 = 0, index = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < count; j++){
			if (i == 0 && is_great(s[j])){
				f[index++] = s[j];
				l1++;
			}
			if (i == 1 && is_good(s[j])){
				f[index++] = s[j];
				l2++;
			}
			if (i == 2 && is_soso(s[j])){
				f[index++] = s[j];
				l3++;
			}
			if (i == 3 && is_suck(s[j]))
				f[index++] = s[j];
		}
	}
	sort(f, f + l1, compare);
	sort(f + l1, f + l1 + l2, compare);
	sort(f + l1 + l2, f + l1 + l2 + l3, compare);
	sort(f + l1 + l2 + l3, f + count, compare);

	for (int i = 0; i < count; i++){
		printf("%d %d %d\n", f[i].id, f[i].de, f[i].cai);
	}
	return 0;
}