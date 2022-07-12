#include<bits/stdc++.h>
using namespace std;
int s1,s2,n,w[21],i,mn=10000000;;
void step(int t){
	if (t==21)
	mn=min(abs(s1-s2),mn); else {
		s1+=w[t];
		step(t+1);
		s1-=w[t];
		s2+=w[t];
		step(t+1);
		s2-=w[t];
	}  
}
int main(){
	cin >> n;
	for (i=1;i<=n;i++)
	cin >> w[i];
	step(1);
	cout << mn;
}
