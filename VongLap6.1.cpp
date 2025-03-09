#include <stdio.h>
int main (){
	int a,b,i,x;
	printf("nhap vao 2 so nguyen a va b: ");
	scanf("%d%d",&a,&b);
	if(a<b){
		x=a;
	} else {
		x=b;
	}
	for (i=x;i>=1;i--){
		if(a%i==0&&b%i==0){
			printf("UCLN la: %d\n",i);
			printf("BCNN la: %d",(a*b)/i);

			return 0;
		}
	}
	
}