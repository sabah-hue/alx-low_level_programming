/**
 * _isupper - check that checks for uppercase character.
 *
 * Desccription: check uppercase character
 *@c: check parameter
 *
 * Return: 1 uppercase , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
