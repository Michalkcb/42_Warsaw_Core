#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	if (ac == 4 && av[2][0] && av[3][0] )
	{
	i = 0;
		if (!av[2][1])
		{
			if (!av[3][1])
			{
				while(av[1][i] != 0)
				{
					if (av[1][i] != av [2][0])
						write(1, &av[1][i],1);
					if (av[1][i] == av[2][0])
					{
						av[1][i] = av[3][0];
						write(1, &av[1][i],1);
					}
					i++;
				}
			}
		}
	}
	write(1, "\n",1);
	return (0);
}
