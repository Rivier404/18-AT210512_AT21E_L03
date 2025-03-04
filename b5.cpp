//giai ax^2+bx+c=0//
#include<stdio.h>
#include<math.h>
int main (){
	double a,b,c;
	double delta,x,x1,x2,x3;
	scanf("%lf%lf%lf",&a,&b,&c);
    if (a==0&&b==0&&c==0){
    	printf("vo so nghiem");
    	return 0;
    }
   if (a == 0) {
        if (b == 0) {
            printf("vo nghiem.\n");
        } else {
            double x = -c / b;
            printf("%f\n", x);
        }
        return 0;	
	} 
	delta = b*b - 4*a*c;
	if (delta > 0){	
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("%f\n%f", x1, x2);    
}
else if (delta==0) {
	x3=-b/(2*a);
	printf("%f",x3);
}
else {
	printf("error");
}
}