#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,i;
double r,x[20],y[20],l;
const double PI=3.1415;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> r >> x[1] >> y[1];
	l=0;
	for (i=2;i<=n;i++){
		cin >> x[i] >> y[i];
		l+=hypot(x[i]-x[i-1],y[i]-y[i-1]);
	}
	l+=hypot(x[1]-x[n],y[1]-y[n])+PI*r*2;
	printf("%0.2f",l);
}
