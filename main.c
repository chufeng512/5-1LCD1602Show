#include <STC89C5xRC.H>
#include "LCD1602.h"

void main()
{
    LCD1602_Init();  // ��ʼ��LCD1602

    int num = 5;  // Ҫ��ʾ������

    LCD1602_DisplayString(0, 0, "B");  // �ڵ�һ�е�һ����ʾ����
	
		LCD1602_DisplayNum(0,3,num);

    while (1)
    {
        // �����ѭ������
    }
}
