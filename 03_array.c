#include <stdio.h>

int main(void)
{
	int array[5];
	int i;
	int *p;

	/*配列array*/
	for(i=0;i<5;i++){
		array[i]=i;
	}
	/*配列array 表示*/
	for(i=0;i<5;i++){
		printf(" array[%d] = %d\n",i,array[i]);
	}
	/*配列array 表示 p*/
	for(p=&array[0]; p != &array[5];p++){
		printf("%d\n",*p);
	}
	/*配列array アドレス表示*/
	for(i=0;i<5;i++){
		printf("&array[%d] = %p\n",i,&array[i]);
	}
	return 0;
}