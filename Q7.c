int big(int numl, double num2)

//1
printf("%d\n", big(5, 7.34)); //Assuming exstra ) was a mestike will pass, as its what is asked in the function is given
//2
int b = big(2.0, 5); //Will pass as can "traslate 2.0 to 2 and 5 to 5.0
//3
int d = big(n1, n2) && big(n1, n3); // will pass as int can be converted to double when calling the function the result will be 1 or 0 that will go into int
//4
printf("%d", big(n1, n2) && !big(n1, 5.8)); //the print will be 1 or 0 depending on the result of the function with no issue int can be converted