#include <stdio.h>

struct book{
	int no;
	char title[20];
	int price;
};

int main(void)
{
	int i=0;

	struct book book1;
	book1.no =1;
	stcopy(book1.title,"c_pointer");
	book1.price=2300;

	printf("book1 :No %d, タイトル =%s, price =%d\n",book1.no,book1.title,book1.price);

	struct book book2={}
	}
}