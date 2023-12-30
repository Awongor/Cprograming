#include <stdio.h>
#include <stdlib.h>
int main()
{
    char card_name[3];
    puts("Enter the card _name:");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K')
    {
        val = 0;
    }
    else if (card_name[0] == 'Q')
    {
        val = 10;
    }
    else if (card_name[0] == 'J')
    {
        val = 10;
    }
    else if (card_name[0] == 'A')
    {
        val = 11;
    }
    else
    {
        printf("atoi is going to run\n");
        val = atoi(card_name);
    }
    printf("the card value is :%i/n", val);
    return 0;
}
