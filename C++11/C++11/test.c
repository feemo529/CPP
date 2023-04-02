#include <REGX52.h>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password, Count;

void main()
{
	LCD_Init();
	LCD_ShowString(1, 1, "Password:");
	while (1)
	{
		KeyNum = MatrixKey();
		if (KeyNum)
		{
			if (KeyNum <= 10) //���S1~S10�������£���������
			{
				if (Count < 4)
				{
					Password *= 10;		//��������һλ
					Password += KeyNum % 10; //��ȡһλ����
				}
				Count++;
			}
			LCD_ShowNum(2, 1, Password, 4);
		}
		if (KeyNum == 11) //11����Ϊȷ��
		{
			if (Password == 2345)
			{
				LCD_ShowString(1, 14, "OK ");
				Password = 0; //��������
				Count = 0;    //�ƴ�����
				LCD_ShowNum(2, 1, Password, 4);
			}
			else
			{
				LCD_ShowString(1, 14, "ERR");
				Password = 0; //��������
				Count = 0;    //�ƴ�����
				LCD_ShowNum(2, 1, Password, 4);
			}
		}
		if (KeyNum == 12)
		{
			Password = 0;
			Count = 0;
			LCD_ShowNum(2, 1, Password, 4);
		}

	}
}