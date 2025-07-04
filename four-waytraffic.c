#include<reg51.h>

void delay()
{
unsigned int y;
for (y=0; y<65000; y++);
}

void count()
{
	int x;
	for( x=5; x>0; x--)
	{
		P1=x;
		delay();
	}
}
void main()
{
	while(1)
	{
		{
P2=0X14;
P3=0X03;
count();
	}
		{
P2=0X8C;
P3=0X08;
count();
		}
		{
P2=0X62;
P3=0X08;
count();
		}
		{
P2=0X21;
P3=0X05;
count();
}
		}
}