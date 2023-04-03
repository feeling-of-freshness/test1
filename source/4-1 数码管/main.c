#include <REGX52.H>

/*
	�����������ָ����ʾ9
*/


unsigned int Nixie[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71,0x00};


/*ָ�������λ�ã�Y0~Y7�ĸ�ֵ*/
int Nixie_tube(int location,unsigned int number)
{
	switch(location)
	{
			//��1�������
		case 1: 
			P2_2=1;
			P2_3=1;
			P2_4=1;
			break;
		
			//��2�������
		case 2:
			P2_2=0;
			P2_3=1;
			P2_4=1;
			break;
			//��3�������
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
	
	/*��Ҫ��ʾʲô���֣������޸����д���ȿ�*/
	Nixie_tube(7,3);

	return 0;
}
