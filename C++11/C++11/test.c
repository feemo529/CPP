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
			if (KeyNum <= 10) //如果S1~S10按键按下，输入密码
			{
				if (Count < 4)
				{
					Password *= 10;		//密码左移一位
					Password += KeyNum % 10; //获取一位密码
				}
				Count++;
			}
			LCD_ShowNum(2, 1, Password, 4);
		}
		if (KeyNum == 11) //11按键为确认
		{
			if (Password == 2345)
			{
				LCD_ShowString(1, 14, "OK ");
				Password = 0; //密码清零
				Count = 0;    //计次清零
				LCD_ShowNum(2, 1, Password, 4);
			}
			else
			{
				LCD_ShowString(1, 14, "ERR");
				Password = 0; //密码清零
				Count = 0;    //计次清零
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