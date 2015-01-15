//replace cin/cout with scanf/printf to get better performance.
#include <iostream>
#include <map>
#include <iomanip>

using namespace::std;

int mapnext[100000];//addr->next addr
int mapvalue[100000];//addr->value
int mapaddr[100000];//index->addr

void reverse(int a, int k){
	int tmpvalue;
	int tmpaddr;
	for (int i = a; i < a + k / 2; i++){
		tmpaddr = mapaddr[2 * a + k - 1 - i];
		mapaddr[2 * a + k - 1 - i] = mapaddr[i];
		mapaddr[i] = tmpaddr;
	}
}

int main(){
	int n, k, *addr;
	int start, a;
	cin >> start >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a;
		cin >> mapvalue[a] >> mapnext[a];
		mapaddr[i] = a;
	}
	int j = 0;
	for (int s = start; s != -1; s = mapnext[s]){//sort
		int tmp;
		tmp = mapaddr[j];
		int k = j;
		while (mapaddr[k] != s) k++;
		mapaddr[j] = s;
		mapaddr[k] = tmp;
		j++;
	}
	n = j;
	for (int i = 0; i <  n/ k; i++){//reverse
		reverse(i*k, k);
	}
	for (int i = 0; i < n-1; i++){//update mapnext
		mapnext[mapaddr[i]] = mapaddr[i + 1];
	}
	mapnext[mapaddr[n - 1]] = -1;
	cout.fill('0');
	for (int i = 0; i < n; i++){
		if (mapnext[mapaddr[i]] == -1){
			cout << setw(5) << mapaddr[i] << ' ' << mapvalue[mapaddr[i]] << ' ' << mapnext[mapaddr[i]] << endl;
			continue;
		}
		cout << setw(5) << mapaddr[i] << ' ' << mapvalue[mapaddr[i]] << ' ' << setw(5) << mapnext[mapaddr[i]] << endl;
	}
}