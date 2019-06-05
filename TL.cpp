#include<bits/stdc++.h>
int main(){
	int n, m, min, max;min=INT_MAX, max=0;
	scanf("%d %d", &n, &m);
	std::vector<int> a(n), b(m);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		min=min<a[i]?min:a[i];
		max=max>a[i]?max:a[i];
	}
	int time=((2*min)>=max)?(2*min):max;
	max=0;min=INT_MAX;
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
		min=min<b[i]?min:b[i];
		max=max>b[i]?max:b[i];
	}
	if(time>=min)
		printf("-1\n");
	else printf("%d\n", time);
	return 0;
}