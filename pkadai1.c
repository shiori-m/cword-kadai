#include <stdio.h>
void main( void )
{
	int i;
	int total; /* ���v */

	total = 0;
	/* 1����10�܂ŉ��Z���� */
	for(i=1 ; i<=10 ; i++){
		total += i;
	}
	/* ���v��\������ */
	printf("���v = %d\n",total);
}
