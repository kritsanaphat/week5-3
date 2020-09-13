#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char x[100], y[100], xy1[100], xy2[100];
	int x1, y1, i = 0, sumx = 0, sumy = 0, j = 0, j1 = 0, asum = 0;
	char* px1, * px2, * py1, * py2;
	printf("Enter string A : ");
	scanf("%s", x);
	x1 = strlen(x);
	printf("Enter string B : ");
	scanf("%s", y);
	y1 = strlen(y);
	px1 = x;
	px2 = x;
	for (i = 0; i < x1; i++) {
		px2++;
		if (*px1 != *px2) {
			sumx = sumx + 1;
			xy1[j] = *px1;
			//printf("%c", xy1[j]); //CHECK1
			j++;
		}
		px1++;
	}
	printf("\n");
	py1 = y;
	py2 = y;
	for (i = 0; i < y1; i++) {
		py2++;
		if (*py1 != *py2) {
			sumy = sumy + 1;
			xy2[j1] = *py1;
			//printf("%c", xy2[j1]); //CHECK2
			j1++;
		}
		py1++;
	}
	//Reset 
	j = 0;
	j1 = 0;
	//check uniqA=uniqB

	if (sumx == sumy) {
		for (i = 0; i < sumx; i++) {
			if (xy1[j] == xy2[j1]) {
				//printf("%c%c  ", xy1[j], xy2[j1]);
				asum = asum + 1;
				j++;
				j1++;
			}
		}
		if (asum == sumx) {
			printf("uniq(A)=uniq(B)\n");
		}
		else printf("uniq(A)!=uniq(B)\n");
	}
	else printf("uniq(A)!=uniq(B)\n");
}