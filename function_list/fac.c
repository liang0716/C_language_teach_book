//n! = 1 * 2 * 3 * 4 * (n-1) * n

int fac(int n)
{
	int rslt = 1;
	while(n > 0)
	{
		rslt *= n;
		n--;
	}
	//printf("rslt = %d\n", rslt);

	return rslt;
}


//rescurse
int fac_r(int n)
{
	int rslt = 1;

	if(n == 1)
	{
		rslt = 1;
	}
	else
	{
		rslt = n * fac_r(n-1);
	}
	//printf("rslt = %d\n", rslt);

	return rslt;
}

