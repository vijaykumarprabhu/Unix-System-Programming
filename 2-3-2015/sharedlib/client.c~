#include <stdio.h>
#include "static.h"

int main()
{
	int a;
	a=add(5,6);
	printf("after adding %d \n",a);
	return 0;
}

/*static lib
http://www.adp-gmbh.ch/cpp/gcc/create_lib.html

gcc -c static.c -o static.o
ar  rcs static.a  static.o
gcc -c -fPIC static.c -o static.o
gcc -shared -Wl,-soname,static.so.1 -o static.so.1.0.1  static.o
gcc -static client.c -L. -lmean -o statically_linked
to check dynamic or not :ldd statically_linked

./statically_linked


--dynamically linked--
gcc client.c -o dynamically_linked -L. -lstatic
/dynamically_linked 
*/
