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
         int max;
	switch (thang) {
		case 2:
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
			max=29;
		}
			else {
				max =28;
			}
			break;
		
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		max=31;
		break;
		case 4:case 6: case 9:case 11:
		max=30;
		break;
	}
	if (ngay>max){
		printf("????");
		return 0;
	}
	printf("hom nay la ngay %d/%d/%d",ngay,thang,nam);
}
