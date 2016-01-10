#include <stdio.h>
#include <stdlib.h>
int main()
{
    freopen("data.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i,j,k;
    double input[200][200] = {0}, ans[200]  = {0};
    for(i  =0; i < 200;i++)
        for(j = 0; j < 200; j++)
            scanf("%lf",&input[i][j]);

    for(i = 0; i < 200; i++)
    {
        for(j = 0; j < 200; j++)
        {
            for(k = 0;k < 200;k++)
            {
                ans[i] += input[i][k] * input[j][k];
            }
        }
    }
    for(i = 0; i < 200; i++)
    printf("%.2lf\n",ans[i]);
    return 0;
}