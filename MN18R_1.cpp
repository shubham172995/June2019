#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int b;
	scanf("%d", &b);
	std::sort(a.begin(), a.end());
	
	return 0;
}