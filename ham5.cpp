#include<stdio.h>
   void hex(int n){
   	int i=0,j;
   	char a[1000];
   	while (n>0){
   		int x=n%16;
   		if(x<10){
   			a[i]=x + '0';
		   } else {
		   	a[i]=(x -10) + 'A';
		   }
		   n/=16;
		   i++;
	   }
	for (j=i-1;j>=0;j--) {
	printf("%c",a[j]);
   }
}
   void oct(int n){
   	int i=0,j;
   	int a[1000];
   	while(n>0){
   		a[i]=n%8;
   		n/=8;
   		i++;
	   }
	for (j=i-1;j>=0;j--) {
		printf("%d",a[j]);
	}   
	printf("\n");
   }
   void binary(int n){
   	int i=0,j;
	int a[1000];
   	while(n>0){
    	a[i]=n%2;
    	n/=2;
    	i++;
}
	for (j=i-1;j>=0;j--) {
		printf("%d",a[j]);
	}
	printf("\n");
   }
int main(){
	int n,form;
	printf("nhap vao 1 so nguyen duong: ");
	scanf("%d",&n);
	
    printf("Nhap 2,8,16 de chuyen sang cac he tuong ung: ");
    scanf("%d",&form);
    switch(form){
    	case 2:
    	binary(n);
		break;
		case 8:
        oct(n);
        break;	
        case 16:
        hex(n);
        break;
        default:
        	printf("Khong ho tro.");
	}
        
        
}
