int primo(unsigned int val)
{
	if (val <= 3)
	{
		return 1;
	}
	else
	{
		for (int i = 2; i < val; ++i)
		{
			if ((val % i) == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}