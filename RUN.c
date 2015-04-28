#include <stdio.h>

int main()
{
    //step 1
    float input[5];
    float sum;
    int i = 0;
    //step 2
    do{
        printf("Enter floewrwerat number : ");
        scanf("%f", &input[i]);
        i++;
    }while(i<5);

    printf("\n\n");

    //step 3
    for(i=0; i<5; i++){
        printf("outputHelloewerewrwrwerweooooooo : %.2f \n", input[i]);
        sum += input[i];
    }

    //step 4
    printf("\nSum total is %.2f \n\n", sum);

    return 0;
}
