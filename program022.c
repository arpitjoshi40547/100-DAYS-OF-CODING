#include <stdio.h>

int main()
{
    int profit, loss_percentage,selling_price,cost_price;
    printf("Enter selling price  and cost price respectively\n");
    scanf("%d %d",&selling_price,&cost_price);
    if(selling_price>cost_price)
    {
         profit=selling_price-cost_price;
         printf("Profit =%d\n",profit);
    }
    else 
    {
        loss_percentage=((cost_price-selling_price)/cost_price)*100;
        printf("loss percentage = %d\n",loss_percentage);
    }
    return 0;
}