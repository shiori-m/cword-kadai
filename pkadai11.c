/**************************************************/
/* 作成者       ：松崎 史緒理                     */
/* 作成日       ：2017/04/25                      */
/* プログラム名 ：pkadai11.c                      */
/**************************************************/

/* インクルード */
#include <stdio.h>
#include <string.h> //文字列関数を利用するための宣言・strcmpを使うのに必要

/* データの数 */
#define BUFMAX 256

/* ---------------------------------------------- */
/* 関数名       ：PassChange                          */
/* 機能概要     ：パス入力(小文字は大文字に)      */
/* 作成者       ：松崎 史緒理                     */
/* 作成日       ：2017/04/26                      */
/* ---------------------------------------------- */

void PassChange( void )
{
	static char password[BUFMAX] = "VICTORY";	//パスワード
	char buf[BUFMAX];							//入力エリア

	int i = 0;
	int j;
	

	while( i<3 )			//パスワードと一致でないならループする
	{
		printf("password nyuuryoku please =>");	//入力エリア出力
		scanf("%s",buf);						//文字列の入力
		i++;

		/* アルファベットの小文字を大文字に変換 */
		for( j = 0 ; j <= strlen(buf) ; j++)
		{	/* アルファベットの小文字なら変換 */
			if(buf[j] >= 97 && buf[j]<=122)		//英小文字でASCIIコードの10進数は97から122
			buf[j] = buf[j]-32;					//英小文字をさす10進のASCIIコードは-32すると大文字になる
		}
		
//		if( strcmp(buf,password) != 0 )
//		{
//			printf("PASSWORD NG\n",buf);		//NGと出力し
//		}
		if( strcmp(buf,password) == 0 )			//パスワードと比較し一致なら
		{
			printf("PASSWORD OK\n",buf);		//OKと出力
			i = 0;
			break;
		}
	}	

//	printf("%d",i);
	if( i>=3 )
	{
		printf("PASSWORD NG\n",buf);		//NGと出力し
	}
}

/* メイン関数 */
void main( void )
{
	PassChange();
}