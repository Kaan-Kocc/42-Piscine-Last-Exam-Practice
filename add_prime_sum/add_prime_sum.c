#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int sign = 1;
	int result = 0;
	int a = 0;
	while(str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
	{
		a++;
	}
	if(str[a] == '-'|| str[a] == '+')
	{
		if(str[a] == '-')
			sign *= -1;
		a++;
	}
	while(str[a] >= 48 && str[a] <= 57)
	{
		result = result * 10 + (str[a] - 48);
		a++;
	}
	return(result * sign);
}

void ft_putnbr(int n)
{
	long nb;
	char c;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1,&c,1);
	}

}
int is_prime(int nb)
{
	int i = 2;
	if (nb < 2)
		return (0);
	while(i*i <= nb)
	{
		
		if(nb % i == 0)
		{
			return(0);
		}
		i++;
	}
	return (1);

}
int main(int argc, char **argv)
{
	int ournumber;
	int i = 0;
	int total = 0;
	if(argc == 2)
	{
		ournumber = ft_atoi(argv[1]);
		if(ournumber <= 0)
			write(1,"0",1);
		else
		{
			while(ournumber > 0)
			{
				if(is_prime(ournumber) == 1)
					total += ournumber;
				ournumber--;
			}
			ft_putnbr(total);
		}	
		
	}   
	write(1,"\n",1);
}
