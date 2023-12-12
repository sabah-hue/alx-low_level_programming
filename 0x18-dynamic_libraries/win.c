#include <stdlib.h>
/**
 * rand - ...
 * Return: ...
 */
int rand() {
	static int i = 0;
	int numbers[6] = {9, 8, 10, 24, 75, 9};
	return numbers[i++ % 6];
}
