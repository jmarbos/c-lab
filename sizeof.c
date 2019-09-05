/* Size in bits of several types */

#include <stdio.h>

int main()
{
	printf("char         %ld\n", sizeof(char)*8);
	printf("short int    %ld\n", sizeof(short int)*8);
	printf("int          %ld\n", sizeof(int)*8);
	printf("long int     %ld\n", sizeof(long int)*8);
	printf("float        %ld\n", sizeof(float)*8);
	printf("double       %ld\n", sizeof(double)*8);
	printf("long double  %ld\n", sizeof(long double)*8);
	printf("void*        %ld\n", sizeof(void*)*8);

	return 0;
}
