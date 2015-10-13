//1.1
//Graveyard NEERC 2006 La 3708
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m) ==2 )
	{
		double ans=0.0;
		for(int i=1;i<n;i++)
		{
			double pos=(double)i/n*(n+m);
			ans+=fabs(pos-floor(pos+0.5))/(n+m);
		}
		printf("%4.1f\n",ans*10000);
	}
	return 0;
}