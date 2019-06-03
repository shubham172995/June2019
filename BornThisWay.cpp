#include<bits/stdc++.h>
int main(){
	long int n, m, ta, tb, k, max=0;
	std::cin>>n>>m>>ta>>tb>>k;
	std::vector<long int> a(n), b(m);
	for(long int i=0;i<n;i++)
		std::cin>>a[i];
	for(long int i=0;i<m;i++){
		std::cin>>b[i];
	}
	if(k>=n||k>=m){
		std::cout<<"-1\n";
		return 0;
	}
	long int i, j, temp=0;
	i=0, j=0;
	while(i<=k){
		if(b[m-(k-i)-1]<(a[i]+ta)){
		std::cout<<"-1\n";
		return 0;
	}
		while(a[i]+ta>b[j]&&j<m)++j;
		temp=j+k-i;
		//std::cout<<j<<std::endl;
		if(temp<m)max=(b[temp]+tb)>max?(b[temp]+tb):max;
		else{
			std::cout<<"-1\n";
			return 0;
		}
		++i;
	}
	std::cout<<max<<std::endl;
	return 0;
}