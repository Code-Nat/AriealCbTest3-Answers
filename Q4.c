#include <stdio.h>
#include <stdlib.h>

int main()
{
	int last, i=1, j, counter = 0;
	int* arr = (int*)malloc(sizeof(int));
	printf("Please input your 1 and 0 and then outher number:\n");
	scanf_s("%d", arr);

	do
	{
		arr = (int*)realloc(arr, sizeof(int)*(i+1));
		scanf_s("%d", arr+(i));
		i++;
	} while (!arr[i - 1] || arr[i-1] == 1);

	//1 1 1 0 0 1 1 0 0 1 0 1 1 1 1 0 0 1 1 0 0 8

	printf("First number is: %d\n", arr[0]);
	printf("Lenguth of serizes: ");
	last = arr[0];
	for (i=1, j=1; !arr[i] || arr[i] == 1; i++)
	{
		if (last != arr[i])
		{
			printf("%d ", j);
			j = 1;
			last = arr[i];
			counter++;
		}
		else
			j++;
	}

	printf("%d ", j);
	j = 1;

	printf("\nNumber of time numbers have chaned is %d", counter);

	return 0;
	
}