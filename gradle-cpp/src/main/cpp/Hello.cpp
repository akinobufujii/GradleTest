#include "Hello.h"
#include <cstdio>

Hello::Hello(const char * who)
: _who(who)
{
}

void Hello::sayHello(unsigned n)
{
	for(unsigned i = 0; i < n; ++i)
	{
		printf("%s\n", _who);
	}
}
