/*
範囲

３つの整数a, b, cを読み込み、
それらが a < b < cの条件を満たすならば"Yes"を、
満たさないならば"No"を出力するプログラムを作成して下さい。

Input
３つの整数が空白で区切られて与えられます。

Output
YesまたはNoを１行に出力して下さい。

Constraints
0 ≤ a, b, c ≤ 100
Sample Input 1
1 3 8
Sample Output 1
Yes
Sample Input 2
3 8 1
Sample Output 2
No
*/

#include <stdio.h>

int main(void)
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if(b < c && a < b)
	{
		printf("Yes\n");
	}else
	{
		printf("No\n");
	}

	return 0;
}