
#include <stdio.h>

void main()
{
	char a[] ="VZ@GTRP";
	char b[7];
	char i;
	
	i=0;
	
	for( i = 0 ; i < 7 ; i++) //7��(������7�킠��̂�)�J��Ԃ�
	{
//		printf("Line[%2d] b[%d]:<0x%X>:a[%d]:<0x%X>\n",__LINE__,i,b[i],i,a[i]);	//��?
		if( 0 != ( a[i] & 0x01 ) ) //0�r�b�g�ڂ𔽓]����
		{	
			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
			
			b[i] = a[i]&0xFE; //1��������0�ɂ���
			
			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
		}
		else
		{
			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);

			b[i] = (a[i] | 0x01); //0��������1�ɂ���

			printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
		}

		if( 0 != (b[i] & 0x04 ) ) //2�r�b�g�ڂ𔽓]����
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);

			b[i] = b[i]&0xFB; //1��������0�ɂ���

			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}
		else
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
			
			b[i] = (b[i] | 0x04); //0��������1�ɂ���
			
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}

		if( 0 != (b[i] & 0x10 ) ) //4�r�b�g�ڂ𔽓]����
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
			
			b[i] = b[i]&0xEF; //1��������0�ɂ���
			
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}
		else
		{
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
			
			b[i] = (b[i] | 0x10); //0��������1�ɂ���
			
			printf("Line[%2d] b[%d]:<0x%X>,b[%d]:<0x%x>\n",__LINE__,i,b[i],i,b[i]);
		}
		printf("Line[%2d] b[%d]:<0x%X>,a[%d]:<0x%x>\n",__LINE__,i,b[i],i,a[i]);
	}
	printf("%s\n", b);
}
