#include<stdio.h>
#include<math.h>
#define nmax 100002
struct point
{
	int x,y;
};
int n;
point v[nmax];
double min=1000000000.0;

double dist(point p1, point p2)
{
	return sqrt((double)((long long)((long long)p1.x-p2.x)*(p1.x-p2.x)+(long long)((long long)p1.y-p2.y)*(p1.y-p2.y)));
}

int main()
{
	freopen("cmap.in","r",stdin);
	freopen("cmap.out","w",stdout);
	scanf("%d",&n);
	int i,j,ci,cj;
	double d;
	for(i=1;i<=n;i++)
		scanf("%d%d",&v[i].x,&v[i].y);
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
		{
			d=dist(v[i],v[j]);
			if(d<min)
			{
				ci=i;
				cj=j;
				min=d;
			}
		}
	printf("%lf\n",min);
//	printf("%lf\n(%d %d) (%d %d)",dist(v[ci],v[cj]),v[ci].x,v[ci].y,v[cj].x,v[cj].y);
	return 0;
}
