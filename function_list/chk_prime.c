//check is prime�ˬd�O�_����ơA�O�^1�_�^0 
int chk_prime(int n)
{
	int i, rslt = 1;
	if(n <= 1)
	{
		return 0;
	}
	for(i = 2; i < n/2; i++)
	{
		if((n % i) == 0)
		{
			//printf("%d\n", i);
			rslt = 0;
			break;
		}
	}
	//printf("%d\n", rslt);
	return rslt;
}

