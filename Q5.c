//B
int sod2(int n)	//function dose a factorial on the given number (n!)
{
	if (n == 0)
		return 1;
	else
		return n * sod2(n - 1); //2*1*1 = 2
}

//A
int sod1(int n)	//function sums all digits of a number
{
	if (n == 0)
		return 0;
	return n % 10 + sod1(n / 10); //3 + 2 + 1 + 0 = 6
}