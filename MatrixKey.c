#include <reg52.h>
#include "Delayms.h"
//采用放开按键再响应的模式
unsigned char matrixKey(){
	unsigned char keynum = 0;
	P3 = 0xfe;
	switch(P3){
		case 0xee:delayms(10);while(P3==0xee);delayms(10);keynum=0;break;
		case 0xde:delayms(10);while(P3==0xde);delayms(10);keynum=1;break;
		case 0xbe:delayms(10);while(P3==0xbe);delayms(10);keynum=2;break;
		case 0x7e:delayms(10);while(P3==0x7e);delayms(10);keynum=3;break;
	}
	P3 = 0xfd;
	switch(P3){
		case 0xed:delayms(10);while(P3==0xed);delayms(10);keynum=4;break;
		case 0xdd:delayms(10);while(P3==0xdd);delayms(10);keynum=5;break;
		case 0xbd:delayms(10);while(P3==0xbd);delayms(10);keynum=6;break;
		case 0x7d:delayms(10);while(P3==0x7d);delayms(10);keynum=7;break;
	}	
	P3 = 0xfb;
	switch(P3){
		case 0xeb:delayms(10);while(P3==0xeb);delayms(10);keynum=8;break;
		case 0xdb:delayms(10);while(P3==0xdb);delayms(10);keynum=9;break;
		case 0xbb:delayms(10);while(P3==0xbb);delayms(10);keynum=10;break;
		case 0x7b:delayms(10);while(P3==0x7b);delayms(10);keynum=11;break;
	}	
	P3 = 0xf7;
	switch(P3){
		case 0xe7:delayms(10);while(P3==0xe7);delayms(10);keynum=12;break;
		case 0xd7:delayms(10);while(P3==0xd7);delayms(10);keynum=13;break;
		case 0xb7:delayms(10);while(P3==0xb7);delayms(10);keynum=14;break;
		case 0x77:delayms(10);while(P3==0x77);delayms(10);keynum=15;break;
	}
	return keynum;
}
