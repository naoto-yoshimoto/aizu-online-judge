/*
大小関係

２つの整数 a, b を読み込んで、a と b の
大小関係を出力するプログラムを作成して下さい。

Input
入力は空白で区切られた２つの整数 a, b から構成されています。

Output
a より b の方が大きければ
a < b

a より b の方が小さければ、
a > b

a と b が等しければ、
a == b

と出力して下さい。

Constraints
-1,000 ≤ a, b ≤ 1,000

Sample Input 1
1 2

Sample Output 1
a < b

Sample Input 2
4 3

Sample Output 2
a > b

Sample Input 3
5 5

Sample Output 3
a == b


*/

#include <stdio.h>

int main(void)
{
	int a , b;
	scanf("%d %d",&a,&b);

	if(a == b)
	{
		printf("a == b\n");
	} else if(a < b)
	{
		printf("a < b\n");
	}else
	{
		printf("a > b\n");
	}
	return 0;
}