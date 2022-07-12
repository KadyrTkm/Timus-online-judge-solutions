#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a[20],i;
	cin >> n >> k;
	a[0]=1;
	a[1]=k;
	a[2]=a[1]*k-1;
	for (i=3;i<n;i++)
	a[i]=a[i-1]*(k-1)+a[i-2]*(k-1);
	cout << (k-1)*a[n-1];
}
