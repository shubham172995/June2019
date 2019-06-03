#include<bits/stdc++.h>
std::vector<bool> c(1000000005, false);
int main(){
	long long int n, m, ta, tb, k, max=0;
	std::cin>>n>>m>>ta>>tb>>k;
	std::vector<long long int> a(n), b(m);
	for(long long int i=0;i<n;i++)
		std::cin>>a[i];
	for(long long int i=0;i<m;i++){
		std::cin>>b[i];
		c[b[i]]=true;
		max=max>b[i]?max:b[i];
	}
	if(k>=n||k>=m){
		std::cout<<"-1\n";
		return 0;
	}
	long long int i, temp=0;
	int q=0;
	bool flag=false;
	for(i=0;i<n;i++){
		if(k==0){
			break;
		}
		if(a[i]+ta>max){
			flag=true;
			break;
		}
		//if(a[i]<temp-ta)continue;
		long long int t=a[i]+ta;
		if(c[t]){
			--k;
			temp=i;
			q=1;
			c[t]=false;
		}
		else{
		for(long long int j=a[i]+ta;j<=max;j++){
			if(c[j]){
				--k;
				temp=j;
				q=2;
				c[j]=false;
				break;
			}
		}
	}
}
	if(flag||!c[max])
		std::cout<<"-1\n";
	else if(q==2){
		for(long long int j=temp+1;j<=max;j++)
			if(c[j]){
				std::cout<<tb+j<<std::endl;
				break;
			}
	}
	else{
		for(long long int j=a[temp+1]+ta;j<=max;j++){
			if(c[j]){
				std::cout<<tb+j<<std::endl;
				break;
			}
		}
	}
	return 0;
}