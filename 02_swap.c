#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>

void swap(int *a,int *b);

int main(void)
{
	int x=5,y=10;
	printf("x=%d,y=%d\n",x,y);
	
	swap(&x,&y);
	printf("x=%d,y=%d\n",x,y);

}
void swap(int *a,int *b)
{
	int temp;

	temp =*a;
	*a=*b;
	*b=temp;
}