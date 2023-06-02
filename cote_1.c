#include <stdio.h>
#include <stdlib.h>
int ProcessScheduling(int TotalProcesses, int StartTime[], int Runtime[])
{

    // this is default OUTPUT. You can change it.
    int result = 0, i = 0, first_encounter = 0;

    // write your Logic here:
    for (int i = 0; i < TotalProcesses; i++)
    {
        if (StartTime[i] == StartTime[i + 1] || Runtime[i] >= StartTime[i + 1])
        {
            if (first_encounter == 0)
            {
                result += Runtime[i] + Runtime[i + 1] + StartTime[i];
                first_encounter = 1;
            }
            else if (first_encounter == 1)
            {
                result += Runtime[i] + Runtime[i + 1];
            }
        }
        else if (StartTime[i + 1] > Runtime[i])
        {
            result += StartTime[i + 1] + Runtime[i + 1];
            first_encounter = 0;
        }
        i++;
    }
    return result;
}

int main()
{
    // INPUT [uncomment & modify if required]
    int N = 4;
    int S[4] = {1, 1, 1, 1};
    int R[4] = {1, 4, 10, 20};

    // OUTPUT [uncomment & modify if required]
    printf("%d\n", ProcessScheduling(N, S, R));
    return 0;
}
