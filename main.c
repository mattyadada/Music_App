#include <stdio.h>

float getSales();
float getAdvancedPay();
float determineCommissionRate(double sales);


int main()
{
    float sales, commissionRate, advancedPay;
    float pay;

    sales = getSales();
    advancedPay = getAdvancedPay();
    commissionRate = determineCommissionRate(sales);

    pay = sales * commissionRate - advancedPay;

    printf("The pay is $ %f", pay);

    if(pay < 0)
        printf("The salesperson must reinburse the company");

}
 
float getSales()
{
    float monthlySales;

    printf("Enter the salesperson's monthly sales.");
    scanf("%f", &monthlySales);

    return monthlySales;
}

float getAdvancedPay()
{
    float advanced;

    printf("Enter the amount of advanced pay, or 0 if no advanced pay was given.");
    scanf("%f", &advanced);

    return advanced;
}

float determineCommissionRate(double sales)
{
    float rate = 0;

    if(sales < 10000.00){
        rate == 0.10;
    }else if(sales >= 10000.00 && sales <= 14999.99){
        rate == 0.12;
    }else if(sales >= 15000.00 && sales <= 17999.99){
        rate == 0.14;
    }else if(sales >= 18000.00 && sales <= 21999.99){
        rate == 0.16;
    }else{
        rate == 0.18;
    }
    return rate;
}
