/**************************************************/
/* �쐬��       �F���� �j����                     */
/* �쐬��       �F2017/04/26                      */
/* �v���O������ �Fpkadai12.c                      */
/**************************************************/

/* �C���N���[�h */
#include <stdio.h>

/* �f�[�^�̐� */
#define MAX 10


/* ---------------------------------------------- */
/* �֐���       �Fmain                            */
/* �@�\�T�v     �F���͂����f�[�^�����Ԗڂ��\��    */
/* �쐬��       �F���� �j����                     */
/* �쐬��       �F2017/04/26                      */
/* ---------------------------------------------- */

/* ���C���֐� */
void main( void )
{							/*  10�̂݉��ԖڂȂ̂��o�͂���Ȃ�   */
	static int date[MAX] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};	//�T���f�[�^
						 // 0, 1,  2,  3,  4,  5,  6,  7,  8,  9, 
	
	int i;										//���͒l
	int j;
	int low;									//��ԏ������l
	int high;									//��ԑ傫���l
	int mid;									//�����l
	
	low = 0;									//low��date[0]�������l
	high = MAX-1;								//high��date[MAX]�������l
	mid = ( low + high )/2;						//mid��low��high�𑫂��Ċ����������l
	
	printf( "date input please =>" );			//�T�������f�[�^��
	scanf( "%d",&i );							//                ����
	printf( "ssssssssss\n" );
	
	for( j = 0 ; j < MAX ; j++ )				//date[m]�����͒li��������܂Ń��[�v
	{											//��9��J��Ԃ���Ă��܂���while����no date�ɂȂ�:while(i=mid)
		printf( "%d banme\n",mid );
		if( date[mid] < i )						//i��date[mid]���傫�����
		{
		printf( "%d banme1\n",mid );
			low = ( mid + 1 );					//low��mid���1�傫���z��Ɉړ�
			mid = ( low + high )/2;				//mid��(1UP����low�{�ύX�Ȃ�high)��2�ɕύX
		printf( "%d banme2\n",mid );
		continue;
		}
//��������
		printf( "%d banme3\n",mid );			
		if( date[mid] > i )						//i��date[mid]��菬�������
		{
		printf( "%d \n",i );
		printf( "%d banme4\n",mid );
			high = ( mid - 1 );					//high��mid���1�������z��Ɉړ�
			mid = ( low + high )/2;				//mid��(1DOWN����high+�ύX�Ȃ�low)��2�ɕύX
		printf( "%d \n",i );
		printf( "%d banme5\n",mid );
		}
	}
//�����܂ł��@�\���Ă��Ȃ����ۂ�
	printf("ssssssssss\n");
	if( i == date[mid] )
	{
		printf("%d banme haxtuken\n", mid+1);
	}
	printf( "%d \n",mid );				

	if( i != date[mid] )
	{
		printf("no date\n");
	}
}
