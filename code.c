#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int goalDiff(int N, char S[])
{
    // this is default OUTPUT. You can change it.
    int result = -404, r_goals = 0, b_goals = 0;

    // WRITE YOUR LOGIC HERE:
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'R')
        {
            r_goals += 1;
        }
        else if (S[i] == 'B')
        {
            b_goals += 1;
        }
    }
    result = b_goals - r_goals;

    return result;
}
int main(void)
{
    int N = 10;
    char S[10] = {'R', 'B', 'R', 'R', 'B', 'R', 'B', 'B', 'B', 'B'};
    // INPUT [uncomment & modify if required]

    // OUTPUT [uncomment & modify if required]
    printf("%d\n", goalDiff(N, S));
    system("PAUSE");
    return 0;
}
