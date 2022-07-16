#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[501][501],s;
int n,i,j,k;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (i=1;i<=n;i++)
	a[i][2]=(i+i%2)/2-1;
	for (i=4;i<=n;i++)
	for (j=3;j<=i;j++)
	a[i][j]=a[i-j][j-1]+a[i-j][j];
	for (i=1;i<=n;i++)
	s+=a[n][i];
	cout << s;
}
