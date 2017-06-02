#include <stdio.h>

char deletespace(char x[50], char y[50]);
int main (int argc, const char *argv[])
{
	static char a[50] = "A BC   D E  FG  ";
	static char aa[50] = {"\0"};
	static char b[50] = "B  B  B C D  B";
	static char c[50] = "I have a pen";
	char a1 =  deletespace(a,aa);
	printf("\%s\n", aa);
	char a2 = deletespace(b,aa);
	printf("\%s\n", aa);
	char a3 = deletespace(c,aa);
	printf("\%s\n", aa);	

	return 0;
}

char deletespace(char x[50], char y[50])
{
	char space = ' ';
	int k = 0;
	for(int i=0 ; i<50 ; i++){
		if(x[i]== space){
		}	else{
				y[k]=x[i];
				k++;
			}
	}
	//printf(y);

}