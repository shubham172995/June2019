#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int z=-1, l=s.length();
	for(int i=0; i<l;i++){
		if(s[i]=='0'){
			z=i;
			break;
		}
	}
	if(z==-1)
		s=s.substr(0, l-1);
	else s=s.substr(0, z)+s.substr(z+1, l-z);
	std::cout<<s<<std::endl;
	return 0;
}