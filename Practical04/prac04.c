#include <stdio.h>
#include <math.h>




float radians(float theta){//degrees to radians converter
return M_PI * theta/180;
}


float area(float a, float b, int N, float function_array[N+1]){//trapazoidal area calculator
	float sum=function_array[0]+function_array[N];//endpoints
	int i;
	for (i=1;i<N ;i++){//2 for every point in the middle
		sum=sum+2*function_array[i];}
	
return (b-a)*sum/(2*N);//add the term out front
}



int main(void){
float start =0;
float end =60;
int N=600;
float steps = (end-start)/N;//stepsize
float tana[N+1];//tan array
int i;

for (i=0;i<=N;i++){//fills the tan array with the tan of evenly spaced steps
	tana[i]=tan(radians(steps*i));
	}
float answer;
answer=area(radians(start),radians(end), N, tana);//call the area function
printf("Area is %f\n", answer);	

return 0;
}
