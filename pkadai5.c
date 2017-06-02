#include <stdio.h>
#define STR 50
#define STRA 0

int main (int argc, const char *argv[])
{
	static char a[STR] = "A BC   D E  FG  ";
	char b[STR];
	char space = ' ';
	int k = 0;
	for(int i=0 ; i<50 ; i++){
		if(a[i]== space){
		}	else{
				b[k]=a[i];
				k++;
			}
		}
	printf("\%s\n", b);
	return 0;
}