#include <stdio.h>

void clearscreen();

int main() 
{
    int choice;

    do {
        int n, i;
        char itemName[10][20];
        int price[10], quantity[10];
        int total[10];
        int grossTotal = 0;
        float discount = 0, netTotal;

        printf("-----------------------------------------\n");
        printf("        WELCOME TO MINI MART\n");
        printf("-----------------------------------------\n\n");

        printf("Enter the number of items you want to buy: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            printf("\n-----------------------------------------\n");
            printf("Enter details of Item %d\n", i + 1);
            printf("Name: ");
            scanf("%s", &itemName[i]);
            printf("Price: ");
            scanf("%d", &price[i]);
            printf("Quantity: ");
            scanf("%d", &quantity[i]);

            total[i] = price[i] * quantity[i];
            grossTotal += total[i];
        } 

        printf("\n-----------------------------------------\n");
        printf("               BILL RECEIPT\n");
        printf("-----------------------------------------\n");
        printf("Item            Price     Qty     Total\n");
        printf("-----------------------------------------\n");

        for (i = 0; i < n; i++) {
            printf("%-15s Rs %-7d %-7d Rs %d\n",
                   itemName[i], price[i], quantity[i], total[i]);
        }

        printf("-----------------------------------------\n");
        printf("Gross Total:                       Rs %d", grossTotal);

        discount = grossTotal * 0.10;
        netTotal = grossTotal - discount;

        printf("\nDiscount (10%%):                    Rs %.0f\n", discount);
        printf("Net Total:                         Rs %.0f\n", netTotal);
        printf("-----------------------------------------\n");
        printf("Enter 1 to Restart the Billing System\n");
        printf("Enter 0 to Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            clearscreen();
        }
        else
        {
            printf("-----------------------------------------\n");
            printf("\t\tSee you again. Goodbye!!");
            printf("\n-----------------------------------------");
        }
    } while (choice == 1);

    return 0;
}

void clearscreen()
{
    int i;
    for(i=0; i<=15; i++)
    {
        printf("\n");
    }
}
