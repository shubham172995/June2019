#include<bits/stdc++.h>
int main(){
	freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
	int n, t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		std::string s;
		bool flag=false;
		std::cin>>s;
		n=s.length();
		int d, b;b=d=0;
		for(int j=1;j<n;j++){
			if(s[j]=='.')
				++d;
			else ++b;
		}
		if(b==0||d==0){
			flag=false;
		}
		else if(b>=2||b>=d){
			flag=true;
		}
		if(!flag)
			std::cout<<"Case #"<<i<<": N\n";
		else
			std::cout<<"Case #"<<i<<": Y\n";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}