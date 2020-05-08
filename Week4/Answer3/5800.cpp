// BOJ 5800
#include <cstdio>

int main()
{
    int i = 0, j, k, l, gap, cn, sn, score[50];
    scanf("%d", &cn);

    while (i++ < cn)
    {
        scanf("%d", &sn);
        for (j = 0; j < sn; j++)
            scanf("%d", &score[j]);

        for (j = 0; j < sn; j++)
            for (k = j; k < sn; k++)
                if (score[j] < score[k])
                {
                    l = score[j];
                    score[j] = score[k];
                    score[k] = l;
                }

        gap = 0;
        for (j = 1; j < sn; j++)
            if (gap < score[j - 1] - score[j])
                gap = score[j - 1] - score[j];

        printf("Class %d\n", i);
        printf("Max %d, Min %d, Largest gap %d\n", score[0], score[sn - 1], gap);
    }

    return 0;
}