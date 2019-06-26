#include<bits/stdc++.h>
int main(){
	long int q;
	scanf("%ld", &q);
	while(q--){
		long long int k, n, a, b;
		std::cin>>k>>n>>a>>b;
		if(b*n>=k){
			std::cout<<"-1\n";
			continue;
		}
		else{
			long long int temp=k/a;
			for(long long int i=temp;i>=0;i--){
				long long int j=i*a;
				j=k-j;
				if(j>((n-i)*b)){
					long int ans=i>n?n:i;
					std::cout<<ans<<std::endl;
					break;
				}
			}
		}
	}
	return 0;
}