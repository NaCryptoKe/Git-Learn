#include <stdio.h>
//comment
const int PASS = 6497;

struct ATM
{
    int PIN;
    double balance;
    double deposit;
    double withdraw;
};

int main()
{
    struct ATM user;
    while (1)
    {
        printf("Enter your PIN: ");
        scanf("%d", &user.PIN);
        if (user.PIN == PASS)
        {
            scanf("%d", &user.balance);
            printf("%d is your balance.", user.balance);
        }
        else
        {
            printf("Incorrect PIN \n");
        }
    }
    
    
    return 0;
}