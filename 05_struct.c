#include <stdio.h>

struct book{
	int no;
	char title[20];
	int price;
};

int main(void)
{
	int i=0;

	struct book book1={01,"c_pointer",2300};

	printf("book1 : No=%d,タイトル=%s,値段=%d\n",book1.no,book1.title,book1.price);

	return 0;
}