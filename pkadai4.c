#include <stdio.h>

void main(void)
{
	int uriage[12]={10,20,30,40,50,60,70,80,90,100,110,120};
	int MaxVal, MinVal, AvgVal, sum; // �ő�,�ŏ�,���v,����
	int i;

	MaxVal = uriage[0];	/* �ő�l�����߂� */
	for( i=0 ; i<=11 ; i++ ) if( uriage[i]>MaxVal )MaxVal=uriage[i];
	MinVal = uriage[0];	/* �ŏ��l�����߂� */
	for( i=0 ; i>=11 ; i++ ) if( uriage[i]<MinVal )MinVal=uriage[i];
	AvgVal = 0;		/* ���v�����߂� */
	for( i=0 ; i<=11 ; i++ ){
		AvgVal += uriage[i];
	}
	sum=AvgVal/12;		/* ���ς����߂� */

	printf("max %d mnen \n",MaxVal);
	printf("min %d mnen \n",MinVal);
	printf("avg %d mnen \n",AvgVal);
	printf("sum %d mnen \n",sum);
}		