  
#include <stdio.h>

float randomGen(int minRdm, int maxRdm)
{
    int jump = (maxRdm - minRdm + 1);
    printf("%d",jump);
    float rdmNumber = (rand() % jump) + minRdm;
    return rdmNumber;
}


/**
TEST CODE
int main()
{
    srand (time (NULL));
    float test = randomGen(35,55);
    printf("%f", test);
    return 0;
}**/
