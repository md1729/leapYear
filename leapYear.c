/*
Example 7: Write a C Program that finds whether the given year is a leap year or not. 
Note: The Earth completes its orbit around the Sun in 365 days and 6 hours. 
Each year, the 6 hours increasing from 365 days is 24 hours every 4 years, i.e. 1 day.
This one day is added to February every 4 years. Thus, February, which is 28 days long, 
becomes 29 days long every 4 years. 
This is called a leap year. Years divisible by 4 are leap years.
*/
#include<stdio.h>
int main(){
	int year;
	
	printf("Enter year:\n");
	scanf("%d",&year);
	if(year%4==0)
	printf("%d is a leap year.\n",year);
	else
	printf("%d is not a leap year.\n",year);
	
	return 0;
	
	
}
