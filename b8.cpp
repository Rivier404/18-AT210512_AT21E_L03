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
	scanf("%d%d%d",&a,&b,&c);
	
}