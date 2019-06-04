#include<bits/stdc++.h>
int main(){
	long int n, k;
	scanf("%ld %ld", &n, &k);
	std::vector<int> h(n);
	for(long int i=0;i<n;i++)
		scanf("%d", &h[i]);
	long int temp=0;
	for(long int j=0;j<k;j++)
			temp+=h[j];
	long int min=temp, ans=1;
	for(int i=1;i<=n-k;i++){
		temp-=h[i-1];
		temp+=h[i+k-1];
		if(min>temp){
			min=temp;
			ans=i+1;
		}
	}
	std::cout<<ans<<std::endl;
	return 0;
}