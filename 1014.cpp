#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100],q,l=0,i,j;
	bool d;
	cin >> n;
	if (n==0) cout << 10; else
	if (n==1) cout << 1; else
	while (n!=1){
		d=0;
		for (i=9;i>1;i--)
		if (n%i==0){
			l++;
			a[l]=i;
			d=1;
			n/=i;
			break;
		}
		if (!d && n>9){
			cout << -1;
			exit(0);
		}
	}
	for (i=l;i>=1;i--)
	cout << a[i];
}
