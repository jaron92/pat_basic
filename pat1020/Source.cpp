#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace::std;

int maxi[1000];
float avg[1000], a[1000], b[1000];

bool compare(int a, int b){
	return avg[a] > avg[b];
}

int main(){
	int n, d, j, tmp, k;
	float sum = 0;
	cin >> n >> d;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		avg[i] = b[i] * 1.0 / a[i];
		maxi[i] = i;
	}
	sort(maxi, maxi + n, compare);
	k = 0;
	while (k < n && d >= a[maxi[k]]){
		d -= a[maxi[k]];
		sum += b[maxi[k]];
		k++;
	}
	if (k < n){
		sum += d*avg[maxi[k]];
	}
	cout.setf(ios::fixed);
	cout << setprecision(2) << sum;
	return 0;
}