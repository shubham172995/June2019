#include<bits/stdc++.h>
int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int n;long int k;
		scanf("%d %ld", &n, &k);
		std::vector<long int> a(n);
		long int min, max;max=0;min=INT_MAX;
		for(int i=0;i<n;i++){
			scanf("%ld", &a[i]);
			min=min<a[i]?min:a[i];
			max=max>a[i]?max:a[i];
		}
		if(min+k<max-k){
			std::cout<<"-1\n";
			continue;
		}
		else{
			std::cout<<min+k<<std::endl;
		}
	}
	return 0;
}