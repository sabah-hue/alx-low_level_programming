#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) if(x > 0), \
	(-1 *  x), \
	else, \
	(x)
#endif
