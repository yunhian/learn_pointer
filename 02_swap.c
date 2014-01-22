#include <stdio.h>

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
	int temp = *a;
	*a=*b;
	*b=temp;
}