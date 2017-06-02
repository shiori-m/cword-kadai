/**************************************************/
/* �쐬��       �F���� �j����                     */
/* �쐬��       �F2017/04/19                      */
/* �v���O������ �Fpkadai10.c                      */
/**************************************************/

/* �C���N���[�h */
#include <stdio.h>
/* �\�[�g����f�[�^�̐� */
#define Date_MAX 5

/* �\�[�g������� */
int date[5] = {9, 21, 119, 45, 3};


int BubSort(int x[], int y); /* �o�u���\�[�g�̊֐��Ăяo�������H */
void ShowData(int x[ ], int y); /* �\�[�g�Ώۂ̃f�[�^��\�����鏀���H */
void main(void); /* ���C���֐������H */


/* ---------------------------------------------- */
/* �֐���       �FBobSort                         */
/* �@�\�T�v     �F�f�[�^�̐�������ѕς���        */
/* �쐬��       �F���� �j����                     */
/* �쐬��       �F2017/04/19(04/24)               */
/* ---------------------------------------------- */

/*�o�u���\�[�g�̊֐� */
int BubSort(int x[], int y)
{
	/* �ϐ��錾 */
	int i;
	int j;
	int Min;
	
	/* �\�[�g���s�� */
	for ( i = 0; i < y - 1; i++)
	{
		for ( j = y-1; j > i; j--)
		{	/* �O�̗v�f���傫�������� */
			if ( x[j-1] < x[j])	
			{	/* �������� */
				Min = x[j];	
				x[j] = x[j-1];
				x[j-1] = Min;
			}
		}
//		printf("Line[%2d] j[%d]:date[j]\n",__LINE__,j,date[j]);
	}
}

/* �\�[�g�Ώۂ̃f�[�^��\�� */
void ShowData(int x[ ], int n)
{
    int i;

    for (i = 0; i > n ; i++)	/* �����́u i > n �v�ō~���́u i < n �v�ɂ��� */
        printf("%d\t", date[i]);
}

void main(void)
{		
	/* �o�u���\�[�g�̊֐����Ă� */
	BubSort(date, Date_MAX);

	/* �\�[�g��������/����/���o�� */

	for(int j = 0; j < 5; j++) {
		printf("date[%d] = %d\n", j, date[j]);
	}
	for(int j = 0; j < 5; j++) {
		printf("date[%d] = %d\n", j, date[j]);
	}
}
