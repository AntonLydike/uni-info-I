int AddOrMultiply(int number1, int number2)
{
	int a;

	if (number1 < 0) {
		number1 = number1 * (-2);       /*multiply number1 by -2*/
		a = number1 + number2;          /*add number1 to number2*/
	} /*endif*/
	else
		a = number1 * number2;  /* multiply number1 with number2*/
	                                /*endelse*/
	a = a + 1;
	return a;
}
