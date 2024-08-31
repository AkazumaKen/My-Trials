#include<stdio.h>

void convertTime(int time, int* hours, int* mins, int* sec)
{
	*hours = time/60;
	*mins = (time%3600)/60;
	*sec = (time%3600)%60;
}
void displayTime(int time, int* hours, int* mins, int* sec)
{
	printf("%d time in seconds is %d in hour(s), %d in minuite(s), and %d in sec(s)",time , *hours,*mins,*sec);
	
}

