/**************************************************/
/* 作成者       ：松崎 史緒理                     */
/* 作成日       ：2017/04/19                      */
/* プログラム名 ：pkadai10.c                      */
/**************************************************/

/* インクルード */
#include <stdio.h>
/* ソートするデータの数 */
#define Date_MAX 5

/* ソートするもの */
int date[5] = {9, 21, 119, 45, 3};


int BubSort(int x[], int y); /* バブルソートの関数呼び出し準備？ */
void ShowData(int x[ ], int y); /* ソート対象のデータを表示する準備？ */
void main(void); /* メイン関数準備？ */


/* ---------------------------------------------- */
/* 関数名       ：BobSort                         */
/* 機能概要     ：データの数字を並び変える        */
/* 作成者       ：松崎 史緒理                     */
/* 作成日       ：2017/04/19(04/24)               */
/* ---------------------------------------------- */

/*バブルソートの関数 */
int BubSort(int x[], int y)
{
	/* 変数宣言 */
	int i;
	int j;
	int Min;
	
	/* ソートを行う */
	for ( i = 0; i < y - 1; i++)
	{
		for ( j = y-1; j > i; j--)
		{	/* 前の要素が大きかったら */
			if ( x[j-1] < x[j])	
			{	/* 交換する */
				Min = x[j];	
				x[j] = x[j-1];
				x[j-1] = Min;
			}
		}
//		printf("Line[%2d] j[%d]:date[j]\n",__LINE__,j,date[j]);
	}
}

/* ソート対象のデータを表示 */
void ShowData(int x[ ], int n)
{
    int i;

    for (i = 0; i > n ; i++)	/* 昇順は「 i > n 」で降順は「 i < n 」にする */
        printf("%d\t", date[i]);
}

void main(void)
{		
	/* バブルソートの関数を呼ぶ */
	BubSort(date, Date_MAX);

	/* ソートしたもの/昇順/を出力 */

	for(int j = 0; j < 5; j++) {
		printf("date[%d] = %d\n", j, date[j]);
	}
	for(int j = 0; j < 5; j++) {
		printf("date[%d] = %d\n", j, date[j]);
	}
}
