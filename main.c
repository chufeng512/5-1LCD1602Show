#include <STC89C5xRC.H>
#include "LCD1602.h"

void main()
{
    int num = 5;
	
    LCD1602_Init();  // 初始化LCD1602

    //int num = 5;  // num声明位置不当，应该放到第一句，与keil支持的ANSI C标准有关

    LCD1602_DisplayString(0, 0, "B");  // 在第一行第一列显示数字
	
		LCD1602_DisplayNum(0,3,num);

    while (1)
    {
        // 你的主循环代码
    }
}
