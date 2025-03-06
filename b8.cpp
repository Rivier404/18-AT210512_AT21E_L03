#include <stdio.h>

	int tamgiac?(int a,int b,int c){
		return (a + b > c && a + c > b && b + c > a);
	}
	int loai tam giac (int a,int b,int c) {
	    if (a==b==c) return 1;
	    if (a==b||a==c||b==c) {
	    	if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) return 3;
	    	return 2;
		}
	    if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) return 4;
	    return 5;
	}
	float (float a, float b, float c) {
		return 
	}
	
	int main (){	
        printf("nhap vao 3 canh cua tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	switch ()
		case 1:
printf("tam giac deu");
break;
case 2:
printf("tam giac can");
	break;
	case 3:
	printf("tam giac vuong can");
	break;
	case 4:
	printf("tam giac vuong");
case 5:
printf("tam giac thuong");
}
}
