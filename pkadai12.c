/**************************************************/
/* 作成者       ：松崎 史緒理                     */
/* 作成日       ：2017/04/26                      */
/* プログラム名 ：pkadai12.c                      */
/**************************************************/

/* インクルード */
#include <stdio.h>

/* データの数 */
#define MAX 10


/* ---------------------------------------------- */
/* 関数名       ：main                            */
/* 機能概要     ：入力したデータが何番目か表示    */
/* 作成者       ：松崎 史緒理                     */
/* 作成日       ：2017/04/26                      */
/* ---------------------------------------------- */

/* メイン関数 */
void main( void )
{							/*  10のみ何番目なのか出力されない   */
	static int date[MAX] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};	//探すデータ
						 // 0, 1,  2,  3,  4,  5,  6,  7,  8,  9, 
	
	int i;										//入力値
	int j;
	int low;									//一番小さい値
	int high;									//一番大きい値
	int mid;									//中央値
	
	low = 0;									//lowはdate[0]が初期値
	high = MAX-1;								//highはdate[MAX]が初期値
	mid = ( low + high )/2;						//midはlowとhighを足して割った中央値
	
	printf( "date input please =>" );			//探したいデータを
	scanf( "%d",&i );							//                入力
	printf( "ssssssssss\n" );
	
	for( j = 0 ; j < MAX ; j++ )				//date[m]が入力値iを見つけるまでループ
	{											//→9回繰り返されてしまうがwhileだとno dateになる:while(i=mid)
		printf( "%d banme\n",mid );
		if( date[mid] < i )						//iがdate[mid]より大きければ
		{
		printf( "%d banme1\n",mid );
			low = ( mid + 1 );					//lowをmidより1大きい配列に移動
			mid = ( low + high )/2;				//midは(1UPしたlow＋変更なしhigh)÷2に変更
		printf( "%d banme2\n",mid );
		continue;
		}
//ここから
		printf( "%d banme3\n",mid );			
		if( date[mid] > i )						//iがdate[mid]より小さければ
		{
		printf( "%d \n",i );
		printf( "%d banme4\n",mid );
			high = ( mid - 1 );					//highをmidより1小さい配列に移動
			mid = ( low + high )/2;				//midは(1DOWNしたhigh+変更なしlow)÷2に変更
		printf( "%d \n",i );
		printf( "%d banme5\n",mid );
		}
	}
//ここまでが機能していないっぽい
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
