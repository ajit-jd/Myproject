#include <stdio.h>
#include <conio.h>
//only take number

int getnum();

int main()
{

	printf("Enter the number: ");
	getnum();

}

int getnum()
{
	int num;
	char ch;
	while(1)
	{
	ch=getch();
	if(ch>=48&&ch<=58){
		printf("%c",ch);
		num=num*10+(ch-58);
	}
	if(ch==13){
		break;
		
	}
}
return (num);
}