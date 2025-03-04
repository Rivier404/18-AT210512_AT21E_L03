#include <stdio.h>
int main (){
	float a,b,c,d,e,f,x,y;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if((a*e)-(b*d)==0){
	    if (a*e==b*d&&a*f==c*d&&b*f==c*e) {
	    	printf("vo so nghiem");
		}
		else {
			printf("vo nghiem");
		}
	}
	else {
	y=(f*a-d*c)/(e*a-d*b);
	x=(c-b*y)/a;
	printf("%f%f",x,y);
}
}