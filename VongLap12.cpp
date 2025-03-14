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
	int i=0;
	double n,x,eps,sum=0;
	printf("hay nhap x(do): ");
	scanf("%lf",&x);
	x=x*3.14/180;
	printf("hay nhap do chinh xac eps: ");
	scanf("%lf",&eps);
	do{
	n=pow(-1,i)*pow(x,2*i+1)/giaithua(2*i+1);
	sum+=n;
	i++;
	} while(fabs(n) >= eps);
	printf("tong cua day voi do chinh xac %lf la: %.10lf",eps,sum);
	}

		
	
	
	
