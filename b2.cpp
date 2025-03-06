#include <stdio.h>
int main (){
	int ngay,thang,nam;
	printf("nhap lan luot ngay thang nam");
	scanf("%d%d%d",&ngay,&thang,&nam);
if (thang <1 || thang >12) {
		printf("???");
		return 0;
	}
if(ngay <= 0 || ngay >31) {
		printf("???");
		return 0;
	}

	printf("hom nay la ngay %d/%d/%d",ngay,thang,nam);
}
