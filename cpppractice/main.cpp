#include <stdio.h>
#include "Convertion.h"
#include "myTool.h"

int main()
{	
    	Choices();
	
	int time = 65;
	int hours, mins, sec;
	
	convertTime(time, &hours, &mins, &sec);	
	displayTime(time, &hours, &mins, &sec);
	

	
	return 0;
}

