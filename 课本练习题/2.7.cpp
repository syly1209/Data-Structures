#include <stdio.h>
#define TOL 1E-2

double dist( double h, double p );

int main()
{
    double h, p, d;
    scanf("%lf %lf", &h, &p);
    d = dist(h, p);
    printf("%.6f\n", d);
    return 0;
}
double dist( double h, double p ){
	double ans=h;
	double l=h*p;
	//printf("%f\n",ans);
	while(l>=TOL){
		ans+=(l*2);
		//printf("%f\n",ans);
		l=l*p;
	}
	return ans;
}
