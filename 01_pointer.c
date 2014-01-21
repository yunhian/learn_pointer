#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>

int main(void)
{
	int foo = 5;
	int bar = 10;
	int *foo_p;

	/*変数アドレス表示*/
	printf("&foo = %p\n",&foo);
	printf("&bar = %p\n",&bar);
	printf("&foo_p = %p\n",&foo_p);

	/*ポインタ変数foo_pにfooのアドレスを代入*/
	foo_p = &foo;
	printf("foo_p = %p\n",foo_p);

	/*foo_pを経由してfooの内容表示*/
	printf("*foo_p = %d\n",*foo_p);

	/*foo_pを経由してfooの内容変更*/
	*foo_p =20;
	printf("foo = %d\n",foo);

	return 0;
}