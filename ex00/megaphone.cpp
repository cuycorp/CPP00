#include <iostream>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	else

	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] < 'z')
                av[1][i] -= 32;
            std::cout << av[1][i];
            i++;
		}
        std::cout << std::endl;
	}
}