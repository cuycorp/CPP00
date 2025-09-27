#include <iostream>

int	main(int ac, char **av)
{
	int i;
	int j;

	j = 1;
	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	else
	{
		while(j < ac)
		{
			while (av[j][i])
			{
				std::cout << (char)std::toupper(av[j][i]);
				i++;
			}
			i = 0;
			j++;
		}
        std::cout << std::endl;
	}
}

/*
Test cases
1. multiple strings -> done
2. empty string -> done
3. no input
*/