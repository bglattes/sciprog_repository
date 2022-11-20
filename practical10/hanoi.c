#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, int source, int dest, int mid){	
//base case
if (n==1){
	printf("move disc from %d to %d\n", source, dest);
	}//moves one disc from 1 to 3
else{
	hanoi(n-1, source, mid, dest);//from 1 to 2 using 3
	printf("move disc from %d to %d\n", source, dest);
	hanoi(n-1, mid, dest, source);//from 2 to 3 using 1
}
}

int main(void){
int h;
printf("enter the number of discs\n");
scanf("%d", &h);
printf("solution for %d discs:\n", h);
hanoi(h,1,3,2);//from 1 to 3 using 2

return 0;
}
