int sod(int num1, int num2)
{
	if (num1 == num2)
		return num1;
	if (num1 < num2)	//if num1 smaller then num2
		return num1 + (sod(num1 + 1, num2));
	return num2 + (sod(num2 + 1, num1));	//if num2 is smaller then num2 (as we taken out bigger and eqreal before, add 1 to num2 and give it num1 place for the next calls
}
printf("%d\n", sod(3, 6)); //3+4+5+6 = 18
printf("%d", sod(2, 5)); //2+3+4+5 = 14

