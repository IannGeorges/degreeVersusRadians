#include<stdio.h>
#define pi 3.141593
int main(){
int degrees =0;
double radians;
while (degrees <=360) {
	radians = degrees*pi/180;
	printf("%6d %9.6f \n" , degrees, radians);
	degrees += 10;
}
return 0;
}


