#include <REGX52.H>
void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms)
	{
			i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}

	
}

void main()
{
		P2=0xfe;//1111 1110
		Delay1ms(100);
		P2=0xfD;//1111 1101
		Delay1ms(100);
		P2=0xfB;//1111 1011
		Delay1ms(100);
		P2=0xf7;//1111 0111
		Delay1ms(100);
		P2=0xEF;//1110 1111
		Delay1ms(100);
		P2=0xDF;//1101 1110
		Delay1ms(100);
		P2=0xBF;//1011 1110
		Delay1ms(100);
		P2=0x7F;//0111 1110
		Delay1ms(100);
	
	
}