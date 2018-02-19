#include <stdio.h>
#include<conio.h>
void main() {
	int a,b,c;
  clrscr();
	printf("\n enter the number of a");
	scanf("%d\n",&a);
	printf("\n enter the number of b");
	scanf("%d\n",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n tha swap value is%d%d",a,b);
getch();
}
