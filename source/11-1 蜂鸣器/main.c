#include <REGX52.H>
void Delay(unsigned int xms)		
{
	unsigned char i, j;
	while(xms--)
	{
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	}
}
void main()
{
	while(1)
	{
		P2_5=!P2_5;
		Delay(2);
	}
}
