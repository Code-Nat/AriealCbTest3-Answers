#include <stdio.h>

int Q6(int number)
{
	//A: not good as all numbers are possible as its or and all numbers are bigger then 40 or smaller then 100 so any number lower then 40 or bigger then 100 will show it dose not work
	if ((number >= 40) || (number <= 100))
		printf("ok");
	else
		printf("not ok");


	//B: Good
	if ((number >= 40) && (number <= 100))
		printf("ok");
	else
		printf("not ok");


	//C: Not good, only numbers that are not in the zone, can prove with putting any number between 40 to 100 or putting a number bigger then 100 or smaller then 40
	if ((number < 40) && (number > 100))
		printf("ok");
	else
		printf("not ok");


	//D: Good
	if ((number > 39) && (number < 101))
		printf("ok");
	else
		printf("not ok");
	
}