#include <stdio.h>
char line[1000]; ///�~���ŧi���A�|��l����0
int main()
{
    ///char line[1000]; �S����l��int i ����0�A�N�|�~�P!
    scanf("%s",line);


    int ans=0; ///�j��e��ans=0
    for(int i=0 ; i<1000 ; i++)
    {
        if (line[i] == '2' ) ans++;
        ///�j�餤��ans++;
    }
    printf("%d\n",ans);
}
