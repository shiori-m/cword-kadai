/**************************************************/
/* �쐬��       �F���� �j����                     */
/* �쐬��       �F2017/04/25                      */
/* �v���O������ �Fpkadai11.c                      */
/**************************************************/

/* �C���N���[�h */
#include <stdio.h>
#include <string.h> //������֐��𗘗p���邽�߂̐錾�Estrcmp���g���̂ɕK�v

/* �f�[�^�̐� */
#define BUFMAX 256

/* ---------------------------------------------- */
/* �֐���       �FPassChange                          */
/* �@�\�T�v     �F�p�X����(�������͑啶����)      */
/* �쐬��       �F���� �j����                     */
/* �쐬��       �F2017/04/26                      */
/* ---------------------------------------------- */

void PassChange( void )
{
	static char password[BUFMAX] = "VICTORY";	//�p�X���[�h
	char buf[BUFMAX];							//���̓G���A

	int i = 0;
	int j;
	

	while( i<3 )			//�p�X���[�h�ƈ�v�łȂ��Ȃ烋�[�v����
	{
		printf("password nyuuryoku please =>");	//���̓G���A�o��
		scanf("%s",buf);						//������̓���
		i++;

		/* �A���t�@�x�b�g�̏�������啶���ɕϊ� */
		for( j = 0 ; j <= strlen(buf) ; j++)
		{	/* �A���t�@�x�b�g�̏������Ȃ�ϊ� */
			if(buf[j] >= 97 && buf[j]<=122)		//�p��������ASCII�R�[�h��10�i����97����122
			buf[j] = buf[j]-32;					//�p������������10�i��ASCII�R�[�h��-32����Ƒ啶���ɂȂ�
		}
		
//		if( strcmp(buf,password) != 0 )
//		{
//			printf("PASSWORD NG\n",buf);		//NG�Əo�͂�
//		}
		if( strcmp(buf,password) == 0 )			//�p�X���[�h�Ɣ�r����v�Ȃ�
		{
			printf("PASSWORD OK\n",buf);		//OK�Əo��
			i = 0;
			break;
		}
	}	

//	printf("%d",i);
	if( i>=3 )
	{
		printf("PASSWORD NG\n",buf);		//NG�Əo�͂�
	}
}

/* ���C���֐� */
void main( void )
{
	PassChange();
}