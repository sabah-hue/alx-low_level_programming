/**
 * _isdigit - check the digits
 *
 *Description: cfunction to check the digits from 0 to 9
 *@c: input parameter
 *
 * Return:1 if digit , 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
