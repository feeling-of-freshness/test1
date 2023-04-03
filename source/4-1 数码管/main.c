#include <REGX52.H>

/*
	在数码管任意指定显示9
*/


unsigned int Nixie[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71,0x00};


/*指定数码管位置，Y0~Y7的赋值*/
int Nixie_tube(int location,unsigned int number)
{
	switch(location)
	{
			//第1个数码管
		case 1: 
			P2_2=1;
			P2_3=1;
			P2_4=1;
			break;
		
			//第2个数码管
		case 2:
			P2_2=0;
			P2_3=1;
			P2_4=1;
			break;
			//第3个数码管
		case 3:
			P2_2=1;
			P2_3=0;
			P2_4=1;
			break;
		
		case 4:
			P2_2=0;
			P2_3=0;
			P2_4=1;
		break;
		
		case 5:
			P2_2=1;
			P2_3=1;
			P2_4=0;
			break;
		
		case 6:
			P2_2=0;
			P2_3=1;
			P2_4=0;
			break;
		
		case 7:
			P2_2=1;
			P2_3=0;
			P2_4=0;
			break;
		
		case 8:
			P2_2=0;
			P2_3=0;
			P2_4=0;
			break;
	}
	
	P0=Nixie[number];
	return 0;
}


int main()
{
	
	/*需要显示什么数字，仅需修改下行代码既可*/
	Nixie_tube(7,3);

	return 0;
}
