#include <stdio.h>
#include <stdlib.h>

int totalBonus(float bonus);
int minusBonus(float bonus);

int main()
{
    printf("Welcome!\n");
    int income, years;

    printf("Whats your income?: \n");
    scanf("%d", &income);

    printf("How many years have you been working?: \n");
    scanf("%d", &years);

    if(years > 5){
        int bonus = totalBonus(income);
        printf("You have worked %d ", years);
        printf(" And thats an total income of %d ", bonus);

    }


    else if(years < 5){
        int bonus = minusBonus(income);
        printf("You have worked %d", years);
        printf(" And your bad so you get negative bonus your new income is: %d", bonus);
    }




    return 0;
}

int totalBonus(float bonus){
    float extrabonus = bonus + 1000;

    return extrabonus;

}
int minusBonus(float bonus){
    float extrabonus = bonus - 1000;

    return extrabonus;
}
