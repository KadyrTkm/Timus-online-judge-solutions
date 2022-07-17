#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int> a[101];
vector<int> ans;
bool used[101];
int n,i,v;
void dfs(int v){
	used[v]=true;
	for (size_t i=0;i<a[v].size();i++)
	if (!used[a[v][i]])
	dfs(a[v][i]);
	ans.push_back(v);
}
void topological_sort(){
	for (int i=1;i<=n;i++)
	used[i]=0;
	ans.clear();
	for (int i=1;i<=n;i++)
	if (!used[i])
	dfs(i);
	reverse(ans.begin(),ans.end());
}
int main(){
	cin >> n;
	for (i=1;i<=n;i++){
		while (cin >> v,(v))
		a[i].push_back(v);
	}
	topological_sort();
	for (i=0;i<n;i++)
	cout << ans[i] << ' ';
}
