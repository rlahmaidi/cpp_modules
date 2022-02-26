#include "ex00.hpp"

int	main (int ac, char **argv)
{
	int	i;
	int j;
	j = 1;
	while(j < ac)
	{
		i = -1;	
			while(argv[j][++i])
				argv[j][i] = toupper(argv[j][i]);
			std::cout << argv[j] << " ";
		j++;
	}
	return(0);
}