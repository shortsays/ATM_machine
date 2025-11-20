#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin, amount, option, bankChoice, gap, bal1, bal2, bal3, bal4;
    printf("------- ATM MACHINE -------\n\n");
    printf("Select Your Bank\n\n");
    printf("1. State Bank of India (SBI)\n");
    printf("2. HDFC Bank\n");
    printf("3. ICICI Bank\n");
    printf("4. Kotak Mahindra Bank\n");
    scanf("%d", &bankChoice);

    if (bankChoice == 1)
    {
        printf("Welcome User (SBI)\n");
        printf("> Press 1: Withdraw Money\n");
        printf("> Press 2: Check Balance\n");
        bal1 = 450000;
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter 4-digit PIN:\n");
            scanf("%4d", &pin);
            if (pin == 2255)
            {
                printf("Enter withdrawal amount:\n");
                scanf("%d", &amount);
                if (amount > bal1)
                {
                    printf("Insufficient Balance\n");
                }
                else
                {
                    printf("Collect Your Cash\n");
                    printf("Debited: Rs.%d\n", amount);
                    gap = bal1 - amount;
                    printf("Available Balance: Rs.%d\n", gap);
                }
            }
            else
            {
                printf("Incorrect PIN\nTry Again:\n");
                scanf("%4d", &pin);
                if (pin != 2255)
                {
                    printf("Account Locked. Try Tomorrow.\n");
                }
                else
                {
                    printf("Enter withdrawal amount:\n");
                    scanf("%d", &amount);
                    if (amount > bal1)
                    {
                        printf("Insufficient Balance\n");
                    }
                    else
                    {
                        printf("Collect Your Cash\n");
                        printf("Debited: Rs.%d\n", amount);
                        gap = bal1 - amount;
                        printf("Available Balance: Rs.%d\n", gap);
                    }
                }
            }
        }
        else if (option == 2)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin != 2255)
            {
                printf("Wrong PIN! Try Again:\n");
                scanf("%4d", &pin);
                if (pin != 2255)
                {
                    printf("Account Locked. Try Tomorrow.\n");
                }
                else
                {
                    printf("Account Balance: Rs.%d\n", bal1);
                }
            }
            else
            {
                printf("Account Balance: Rs.%d\n", bal1);
            }
        }
        else
        {
            printf("Invalid Option\n");
        }
    }

    else if (bankChoice == 2)
    {
        printf("Welcome User (HDFC Bank)\n");
        printf("> Press 1: Withdraw Money\n");
        printf("> Press 2: Check Balance\n");
        bal2 = 520000;
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin == 3344)
            {
                printf("Enter withdrawal amount:\n");
                scanf("%d", &amount);
                if (amount > bal2)
                {
                    printf("Insufficient Balance\n");
                }
                else
                {
                    printf("Collect Cash\n");
                    gap = bal2 - amount;
                    printf("Remaining Balance: Rs.%d\n", gap);
                }
            }
            else
            {
                printf("Incorrect PIN\nTry Again:\n");
                scanf("%4d", &pin);
                if (pin != 3344)
                {
                    printf("Account Locked\n");
                }
                else
                {
                    printf("Enter amount:\n");
                    scanf("%d", &amount);
                    if (amount > bal2)
                    {
                        printf("Insufficient Balance\n");
                    }
                    else
                    {
                        printf("Cash Dispensed\n");
                        gap = bal2 - amount;
                        printf("Remaining Balance: Rs.%d\n", gap);
                    }
                }
            }
        }
        else if (option == 2)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin == 3344)
            {
                printf("Balance: Rs.%d\n", bal2);
            }
            else
            {
                printf("Wrong PIN! Try Again:\n");
                scanf("%4d", &pin);
                if (pin != 3344)
                    printf("Account Locked.\n");
                else
                    printf("Balance: Rs.%d\n", bal2);
            }
        }
        else
        {
            printf("Invalid Option\n");
        }
    }

    else if (bankChoice == 3)
    {
        printf("Welcome User (ICICI Bank)\n");
        printf("> Press 1: Withdraw Money\n");
        printf("> Press 2: Check Balance\n");
        bal3 = 410000;
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin == 5566)
            {
                printf("Enter amount:\n");
                scanf("%d", &amount);
                if (amount > bal3)
                    printf("Insufficient Balance\n");
                else
                {
                    printf("Cash Dispensed\n");
                    gap = bal3 - amount;
                    printf("Balance: Rs.%d\n", gap);
                }
            }
            else
            {
                printf("Incorrect PIN\nTry Again:\n");
                scanf("%4d", &pin);
                if (pin != 5566)
                    printf("Account Locked\n");
                else
                {
                    printf("Enter amount:\n");
                    scanf("%d", &amount);
                    if (amount > bal3)
                        printf("Insufficient Balance\n");
                    else
                    {
                        printf("Cash Dispensed\n");
                        gap = bal3 - amount;
                        printf("Balance: Rs.%d\n", gap);
                    }
                }
            }
        }
        else if (option == 2)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin == 5566)
                printf("Balance: Rs.%d\n", bal3);
            else
            {
                printf("Wrong PIN! Try Again:\n");
                scanf("%4d", &pin);
                if (pin != 5566)
                    printf("Account Locked\n");
                else
                    printf("Balance: Rs.%d\n", bal3);
            }
        }
        else
        {
            printf("Invalid Option\n");
        }
    }

    else if (bankChoice == 4)
    {
        printf("Welcome User (Kotak Mahindra Bank)\n");
        printf("> Press 1: Withdraw Money\n");
        printf("> Press 2: Check Balance\n");
        bal4 = 380000;
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin == 7788)
            {
                printf("Enter amount:\n");
                scanf("%d", &amount);
                if (amount > bal4)
                    printf("Insufficient Balance\n");
                else
                {
                    printf("Collect Cash\n");
                    gap = bal4 - amount;
                    printf("Balance: Rs.%d\n", gap);
                }
            }
            else
            {
                printf("Incorrect PIN\nTry Again:\n");
                scanf("%4d", &pin);
                if (pin != 7788)
                    printf("Account Locked\n");
                else
                {
                    printf("Enter amount:\n");
                    scanf("%d", &amount);
                    if (amount > bal4)
                        printf("Insufficient Balance\n");
                    else
                    {
                        printf("Cash Done\n");
                        gap = bal4 - amount;
                        printf("Balance: Rs.%d\n", gap);
                    }
                }
            }
        }
        else if (option == 2)
        {
            printf("Enter PIN:\n");
            scanf("%4d", &pin);
            if (pin == 7788)
                printf("Balance: Rs.%d\n", bal4);
            else
            {
                printf("Wrong PIN! Try Again:\n");
                scanf("%4d", &pin);
                if (pin != 7788)
                    printf("Account Locked\n");
                else
                    printf("Balance: Rs.%d\n", bal4);
            }
        }
        else
        {
            printf("Invalid Option\n");
        }
    }

    else
    {
        printf("Invalid Bank Selection\n");
    }

    return 0;
}
