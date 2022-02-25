#include <stdio.h>
char line[1000]; ///外面宣告的，會初始成為0
int main()
{
    ///char line[1000]; 沒有初始化int i 成為0，將會誤判!
    scanf("%s",line);


    int ans=0; ///迴圈前面ans=0
    for(int i=0 ; i<1000 ; i++)
    {
        if (line[i] == '2' ) ans++;
        ///迴圈中間ans++;
    }
    printf("%d\n",ans);
}
