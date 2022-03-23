#include <iostream>
#include <cctype>

int	main (int ac, char **argv)
{
	int	i;
	int j;
	j = 1;
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	while(j < ac)
	{
		i = -1;	
			while(argv[j][++i])
				argv[j][i] = toupper(argv[j][i]);
			std::cout << argv[j] << " ";
		j++;
	}
	std::cout << std::endl;
	return(0);
}