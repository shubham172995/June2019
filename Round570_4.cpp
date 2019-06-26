#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		vector<int> v(k+1,0);
		for(int i=0;i<k;i++)
		{
			int r;
			cin>>r;
			v[r]++;
		}
		sort(v.begin(),v.end());
		int e=v[k];
		long long int count=e;
		for(int i=k-1;i>=0;i--)
		{
			e=min(e-1, v[i]);
			e=max(e,0);
			count+=e;
		}
		cout<<count<<'\n';
	}
	return 0;
}

/*#include<bits/stdc++.h>
int main(){
	long int q;
	scanf("%ld", &q);
	while(q--){
		long int n;
		scanf("%ld", &n);
		std::vector<long int> a(200005);long int sum=0;
		for(long int i=0;i<n;i++){
			long int temp;
			scanf("%ld", &temp);
			++a[temp];
		}
		std::sort(a.begin(), a.end(), std::greater<long int>());
		sum=a[0];
		std::vector<long int> b(sum+1);
		b[a[0]]=1;
		long int temp=a[0];
		for(long int i=1;i<a.size();i++){
			if(a[i]==0||temp<=0)break;
			else if(a[i]==a[i-1]){
				--temp;
				b[temp]=1;
				sum+=temp;
			}
			else if(a[i]<=temp){
				temp=a[i];
				while(b[temp])
					--temp;
				sum+=temp;
				b[temp]=1;
			}
		}
		std::cout<<sum<<std::endl;
	}
}*/

