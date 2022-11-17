#include <REGX52.H>
#include "LCD1602.h"	
#include "Delayms.h"
#include "MatrixKey.h"
unsigned char num = 0;
void main(){
	LCD_Init();
	LCD_ShowString(1,1,"Password:");
	LCD_ShowNum(2,1,0,1);
	while(1){
		num = matrixKey();	
		if(num){
			LCD_ShowNum(2,1,num,2);
		}
	}
}
