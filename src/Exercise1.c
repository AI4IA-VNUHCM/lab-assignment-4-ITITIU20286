/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int nhithuc(int n, int k);
void Ex1(int n){
	
    for (int line = 0; line <= n; line++)
    {
     for (int i = 0; i <= line; i++)
            printf("%d ", nhithuc(line, i));
        printf("\n");
    }
}
int nhithuc(int n, int k)
{
    int res = 1;
    if (k > n - k)
    { k = n - k ; }
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}