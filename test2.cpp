#include <stdio.h>
int main (){
	int ngay,thang,nam;
	printf("nhap lan luot ngay thang nam");
	scanf("%d%d%d",&ngay,&thang,&nam);
	if(ngay <= 0 || ngay >31) {
		printf("???");
	}
	if (thang <=0 || thang >12){
		printf("????");
	}
	printf("hom nay la ngay %d/%d/%d",ngay,thang,nam);
}
