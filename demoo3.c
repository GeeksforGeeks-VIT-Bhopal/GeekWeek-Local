#include<stdio.h>
struct book{
	char name ;
	float price ;
	int pages ;
};
void input_data(char , float , int , struct book) ;
void print_data(struct book) ;
int main(){
	char c = 'a' ;
	struct book b1 , b2 , b3 ;
	input_data(c,10.50,80,b1) ;
	print_data(b1) ;
	return 0 ;
}
void input_data(char c , float pr, int pg, struct book b) {
	 b.name = c ; b.price = pr ; b.pages = pg ;
}
void print_data(struct book bbb) {
	printf("The values entered by the user \n") ;
	printf("Name = %c \n ",bbb.name);
	printf("Price = %f \n",bbb.price);
	printf("Pages = %d \n",bbb.pages);
	printf("i m the best");
}