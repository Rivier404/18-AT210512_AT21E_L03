#include <stdio.h>
#include <math.h>
int giaithua (int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x=x*i;
	}
	return x;
}
int main (){
	int i=1;
	double n,x,eps,sum=0;
	printf("hay nhap x: ");
	scanf("%lf",&x);
	printf("hay nhap do chinh xac eps: ");
	scanf("%lf",&eps);
	do {
		n=pow(x,i)/giaithua(i);
		sum+=n;
		i++;
	} while (fabs(n)>=eps);
	printf("tong cua day voi do chinh xac %lf la: %.10lf",eps,sum);
}