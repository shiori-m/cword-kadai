#include <stdio.h>
#include <ctype.h>

char deleteSpace(char *str)
{
	char *p = str;// ���Y������̐擪���w���|�C���^�[��p�ӂ���

	while (*str != '\0') {// ���Y������̖����ɓ��B���Ȃ��ԁA�����𑱂���
		if (!isspace(*str)) {// ���ڂ��Ă��镶�����󔒂łȂ����
		*p = *str;// ���̕����𓚂��Ɋi�[����
		p++;// �����̃|�C���^�[���P�i�߂�
		}
		str++;// ���Y������p�̃|�C���^�[�́A�Ƃɂ����P�i�߂�
	}
	*p = '\0';// �����̕�������I�[������
}

char deletespace(char *x[], char *y[]);
int main (int argc, const char *argv[])
{
	static char a[] = "A BC   D E  FG  ";
	static char b[] = "B  B  B C D  B";
	static char c[] = "I have a pen";	
	deleteSpace(a);
	printf("\%s\n", a);
	deleteSpace(b);
	printf("\%s\n", b);
	deleteSpace(c);
	printf("\%s\n", c); //����
	return 0; //jixtuta
}
