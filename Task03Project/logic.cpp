int rounding(float number)
{
	int result = number;

	return (number - result) >= 0.5 ? result + 1 : result;
}