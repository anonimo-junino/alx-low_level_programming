/**
 * _isdigit - checks digit
 * @c: value to be checked
 *
 * Description: Function that checks for a digit
 * Return: On Success 1, otherwise 0
 */
int _isdigit(int c)
{
	int rval;
	int i;

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
