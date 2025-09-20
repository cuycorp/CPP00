#include <iostream>

bool	is_only_digits(std::string inID)
{
	size_t i;

	i = 0;
	for (i = 0; i < inID.length(); i++)
	{
        if (!isdigit(inID[i]))
            return (false);
	}
    return (true);
}