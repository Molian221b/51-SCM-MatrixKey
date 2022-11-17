#include<reg52.h>
sbit dula = P2^6;
sbit wela = P2^7;
unsigned char code table[]={
	0x3f,0x06,0x5b,0x4f,
	0x66,0x6d,0x7d,0x07,
	0x7f,0x6f,0x77,0x7c,
	0x39,0x5e,0x79,0x71
};
void nixie(unsigned char n, unsigned char num){
	P0 = 0xff;
	wela = 1;
	switch(n){
		case 1:	P0 = 0xfe;break;
		case 2:	P0 = 0xfd;break;
		case 3:	P0 = 0xfb;break;
		case 4:	P0 = 0xf7;break;
		case 5:	P0 = 0xef;break;
		case 6:	P0 = 0xdf;break;
		case 7:	P0 = 0xbf;break;
		case 8:	P0 = 0x7f;break;
	}
	wela = 0;

	dula = 1;
	P0 = table[num];
	dula = 0;

}
