unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int hcf = 2;
	if (a == 0 || b == 0)
		return 0;
	while(hcf <= a || hcf <= b)
	{
		if (a % hcf == 0 && b % hcf == 0)
			break;
		hcf++;
	}
	if (hcf > a || hcf > b)
		hcf = 1;
	int product = a * b;
	if (product < 0)
		product *= -1;
	return product / hcf;
}