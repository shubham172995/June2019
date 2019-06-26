#include<bits/stdc++.h>
int main(){
	int a;
	scanf("%d", &a);
	int i=a;
	int sum=0;
	while(1){
		sum=0;
		int temp=i;
		while(temp){
			sum+=temp%10;
			temp/=10;
		}
		if(sum%4==0){
			break;
		}
		else ++i;
	}
	std::cout<<i<<std::endl;
	return 0;
}