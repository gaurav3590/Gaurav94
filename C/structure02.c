#include<stdio.h>
#include<string.h>
struct bill
{
    int rate,qty,amt;
    char name[50];
    int dis,bill_amt,gst,netbill;
};
int main()
{
    struct bill b[5];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Product :");
        scanf("%s",&b[i].name);
        printf("Quntity :");
        scanf("%d",&b[i].qty);
        printf("Eneter Rate :");
        scanf("%d",&b[i].rate);
    }
    printf("--------------------------------------------------------------------------------\n");
    printf("                         SHREE GANESH GENERAL STORE");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nProduct\tQty\tRate\tAmt\tDis\tBill Amt\tGST\tNet Bill");
    printf("\n-------------------------------------------------------------------------------");
    for(i=0;i<2;i++)
    {
    b[i].amt = b[i].rate + b[i].qty;
    b[i].dis = (b[i].amt  * 5) / 100;
    b[i].bill_amt = b[i].amt - b[i].dis;
    b[i].gst = (b[i].bill_amt * 18) / 100;
    b[i].netbill = b[i].bill_amt + b[i].gst;  
    printf("\n%s\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d",b[i].name,b[i].qty,b[i].rate,b[i].amt,b[i].dis,b[i].bill_amt,b[i].gst,b[i].netbill);
    }
    printf("\n--------------------------------------------------------------------------------\n");
    printf("                            THANK YOU VISIT AGAIN...");
    printf("\n--------------------------------------------------------------------------------");
}