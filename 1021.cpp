#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m,i;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector<int> a(n);
	for (i=0;i<n;i++)
	cin >> a[i];
	cin >> m;
	vector<int> b(m);
	for (i=0;i<m;i++)
	cin >> b[i];
	for (i=0;i<m;i++)
	if (binary_search(a.begin(),a.end(),10000-b[i])){
		cout << "YES";
		exit(0);
	}
	cout << "NO";
}
