// インクルード
#include "Hello.h"
#include <cstdio>

// エントリーポイント
int main(int argc, char ** argv)
{
	Hello hello("Pepito");
	hello.sayHello(10);

	printf("Hello Gradle\n");
	
	return 0;
}
