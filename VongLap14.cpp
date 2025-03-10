#include <stdio.h>
int main (){
	float gdp,v,temp;
	int nam =2014;
	printf("Nhap tong GDP nuoc ta nam 2014: ");
	scanf("%f",&gdp);
	if(gdp<=0){
		printf("?????");
		return 0;
	}
	printf("Nhap toc do tang truong GDP nuoc ta: ");
	scanf("%f",&v);
	temp=gdp*2;
	printf("Nam		 GDP\n");
	while(gdp<temp){
		printf("%d		%.2f\n",nam,gdp);
		gdp+=v;
	    nam++;
		}
	printf("%d		%.2f",nam,gdp);
	}

