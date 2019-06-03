#include<bits/stdc++.h>
int main(){
	long long int a, b, c, total;total=0;
	std::cin>>a>>b>>c;
	if(a<b){
		total+=a*2;
		++total;
		total+=c*2;
	}
	else if(a>b){
		total+=b*2;
		++total;
		total+=c*2;
	}
	else if(a==b){
		total+=a+b;
		total+=c*2;
	}
	std::cout<<total<<std::endl;
	return 0;
}