#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n), b(1005);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		++b[a[i]];
	}
	int max=0;
	for(int i=0;i<1005;i++)
		max=max>b[i]?max:b[i];
	if((n/2+n%2)>=max)
		std::cout<<"YES\n";
	else std::cout<<"NO\n";
	return 0;
}