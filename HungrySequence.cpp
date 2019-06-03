#include<bits/stdc++.h>
const long int N = 10000000;
long int lp[N+1];
std::vector<long int> pr;

int main(){
	for (int i=2; i<=N; ++i) {
    	if (lp[i] == 0) {
        	lp[i] = i;
        	pr.push_back (i);
    	}
    	for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        	lp[i * pr[j]] = pr[j];
	}
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++)
		std::cout<<pr[i]<<" ";
	std::cout<<"\n";
return 0;
}