#include<stdio.h>
float ham(float x, int y){
	float result =1.0;
	if (y<0){
		x=1/x;
		y=-y;
	}		
		for (int i=0;i<y;i++){
			result*=x;
		}
		return result;
	}
int main(){
	float x;
	int y;
printf("nhap gia tri cua x:");
scanf("%f",&x);
printf("nhap gia tri cua y:");
scanf("%d",&y);
float result = ham(x,y);
printf("%.2f^%d = %.2f",x,y,result);
}