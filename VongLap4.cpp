#include <stdio.h>
int main (){
	int i,sum=0;
	for(i=1;i<100;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	printf("tong cac so le tu 1 den 100 la: %d",sum);
}