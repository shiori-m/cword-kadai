
#include <stdio.h>

void main()
{
	char a[] ="VZ@GTRP";
	char b[7];
	char i;
	
	i=0;
	
	for( i = 0 ; i < 7 ; i++) //7回(文字が7種あるので)繰り返す
	{
//		printf("Line[%2d] b[%d]:<0x%X>:a[%d]:<0x%X>\n",__LINE__,i,b[i],i,a[i]);	//○?
		if( 0 != ( a[i] & 0x01 ) ) //0ビット目を反転する
		{	
			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
			
			b[i] = a[i]&0xFE; //1だったら0にする
			
			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
		}
		else
		{
			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);

			b[i] = (a[i] | 0x01); //0だったら1にする

			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
		}

		if( 0 != (b[i] & 0x04 ) ) //2ビット目を反転する
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);

			b[i] = b[i]&0xFB; //1だったら0にする

			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}
		else
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
			
			b[i] = (b[i] | 0x04); //0だったら1にする
			
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}

		if( 0 != (b[i] & 0x10 ) ) //4ビット目を反転する
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
			
			b[i] = b[i]&0xEF; //1だったら0にする
			
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}
		else
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
			
			b[i] = (b[i] | 0x10); //0だったら1にする
			
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}
		printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
	}
	printf("%s\n", b);
}
