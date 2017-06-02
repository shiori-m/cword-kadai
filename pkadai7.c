#include <stdio.h>
#include <ctype.h>

char deleteSpace(char *str)
{
	char *p = str;// 当該文字列の先頭を指すポインターを用意する

	while (*str != '\0') {// 当該文字列の末尾に到達しない間、処理を続ける
		if (!isspace(*str)) {// 着目している文字が空白でなければ
		*p = *str;// その文字を答えに格納する
		p++;// 答えのポインターを１つ進める
		}
		str++;// 当該文字列用のポインターは、とにかく１つ進める
	}
	*p = '\0';// 答えの文字列を終端させる
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
	printf("\%s\n", c); //実体
	return 0; //jixtuta
}
