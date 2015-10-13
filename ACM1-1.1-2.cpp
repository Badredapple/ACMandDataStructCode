//1.1
//Commando War UVa 11729
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Job
{
	int j,b;
	bool operator<(const Job& x) const{
		return j>x.j;
	}
};

int main()
{
	int n ,b ,j, kase=1;
	whlie(scanf("%d", &n)==1&&n){
		vector<Job> v;
		for(int i=0;i<n;i++){
			sacnf("%d%d",&b ,&j);
			v.push_back((Job){j,b});
		}
		sort(v.begin(),v.end());
		int s=0;
		int ans=0;
		for(int i=0;i<n;i++){
			s+=v[i].b;
			ans=max(ans,s+v[i].j);
		}
		printf("Case %d :%d\n",kase++,ans);
	}
	return 0;
}