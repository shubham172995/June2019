#include<bits/stdc++.h>
int main(){
	long int n;
	scanf("%ld", &n);
	std::vector<long long int> a(n), b(n);
	long long int min, max;
	min=INT_MAX;max=0;
	for(long int i=0;i<n;i++){
		std::cin>>a[i]>>b[i];
		long int temp=a[i]<b[i]?a[i]:b[i];
		min=min<temp?min:temp;
		temp=a[i]>b[i]?a[i]:b[i];
		max=max>temp?max:temp;
	}
	bool flag=false;long int ans=0;
	for(long int i=0;i<n;i++){
		if(a[i]<=min&&b[i]>=max){
			flag=true;
			ans=i+1;
			break;
		}
	}
	if(!flag)
		std::cout<<"-1\n";
	else std::cout<<ans<<std::endl;
}