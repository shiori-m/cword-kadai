#include <stdio.h>
#define MAX 7 //課題3
#define STR 50 //課題5
#define STRA 0 //課題5

void func1(void) //k-1
{
	printf("start\n");
	int i;
	int total;
	total = 0;	/* 1から10まで加算する */
	for(i=1 ; i<=10 ; i++){
		total += i;
	}
	printf("total = %d\n",total);
	printf("end\n");
}
void func2(void) //k-2
{
	printf("start\n");
	char c;

	c = 'A';
	printf("%c\n",c); /* 文字として表示 */
	printf("%d\n",c); /* 10進数として表示 */
	printf("%x\n",c); /* 16進数として表示 */
	printf("end\n");
}
void func3(void) //k-3
{
	printf("start\n");	
	int i,j;

	for( i=1 ; i<=MAX ; i++ ){
		for( j=0 ; j<i ; j++ ){
			printf("%d",i);
		}
		printf("\n"); /* 1が右ピラミッド */
	}
	printf("end\n");
}
void func4(void) //k-4
{
	printf("start\n");
	int uriage[12]={10,20,30,40,50,60,70,80,90,100,110,120};
	int MaxVal, MinVal, AvgVal, sum; // 最大,最少,合計,平均
	int i;

	MaxVal = uriage[0];	/* 最大値を求める */
	for( i=0 ; i<=11 ; i++ ) if( uriage[i]>MaxVal )MaxVal=uriage[i];
	MinVal = uriage[0];	/* 最小値を求める */
	for( i=0 ; i>=11 ; i++ ) if( uriage[i]<MinVal )MinVal=uriage[i];
	AvgVal = 0;		/* 合計を求める */
	for( i=0 ; i<=11 ; i++ ){
		AvgVal += uriage[i];
	}
	sum=AvgVal/12;		/* 平均を求める */

	printf("max %d mnen \n",MaxVal);
	printf("min %d mnen \n",MinVal);
	printf("avg %d mnen \n",AvgVal);
	printf("sum %d mnen \n",sum);
	printf("end\n");
}		
void func5 (void) //k-5
{
	printf("start\n");
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
	printf("end\n");
}

void main( void )
{
	func1();	//k-1
	func2();	//k-2
	func3();	//k-3
	func4();	//k-4
	func5();	//k-5
}

