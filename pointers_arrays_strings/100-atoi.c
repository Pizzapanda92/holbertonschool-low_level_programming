/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

while (*s == ' ' || (*s == '-' && *(s + 1) != '\0') || (*s == '+' && *(s + 1) != '\0'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

	if (result > 214748364 || (result == 214748364 && digit > 7))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}

		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
