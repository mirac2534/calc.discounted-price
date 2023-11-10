#include <stdio.h>

// DO NOT CHANGE THE FUNCTION SIGNATURE
double calculateDiscountedPrice(double, int, int);



int main() {
    // DO NOT CHANGE THE MAIN FUNCTION

    // Example usage of the function
    double baseSubscriptionPrice; // Base price for the subscription
    int userAge; // Age of the user
    int subscriptionDurationMonths; // Subscription duration in months

    double discountedPrice; //discounted price

    // get the necessary input from the user
    printf("what is the base subscription plan price: ");
    scanf("%lf", &baseSubscriptionPrice);
    printf("what is the user's age: ");
    scanf("%d", &userAge);
    printf("how many months has the user been a member? ");
    scanf("%d", &subscriptionDurationMonths);

    discountedPrice = calculateDiscountedPrice(baseSubscriptionPrice, userAge, subscriptionDurationMonths);

    printf("Your base subscription plan price is %.3f\nThe discounted subscription price is: %.3f.", baseSubscriptionPrice, discountedPrice);
    return 0;
}

/*
    IMPLEMENT THE BELOW FUNCTION
    Your function, named calculateDiscountedPrice, will accept the following parameters:

    - basePrice: The price of the subscription (double).
    - userAge: The age of the subscriber (int).
    - subscriptionDuration: The number of months the subscription is for (int).

    The function should apply the following discounts in the order listed:

    1. An age-based discount of 20% for users under 18 (including 18) or over 60 (including 60).
    2. A duration-based discount of 10% for subscriptions of 6-12 (both 6 and 12 included) months and 15% for subscriptions longer than 12 months.

*/
double calculateDiscountedPrice(double basePrice, int userAge, int subscriptionDuration)
{
int discountedPrice;

if(userAge<=18 || userAge>=60)
{
    discountedPrice=basePrice-basePrice*20/100;

    if(subscriptionDuration>=6 && subscriptionDuration<=12)
    {
        discountedPrice=discountedPrice-discountedPrice*10/100;
        return discountedPrice;
    }
    else if(subscriptionDuration>12)
    {
        discountedPrice=discountedPrice-discountedPrice*15/100;
        return discountedPrice;
    }
else
{
    return discountedPrice;
}

}
else if (subscriptionDuration>=6 && subscriptionDuration<=12)
    {
        discountedPrice=basePrice-basePrice*10/100;
        return discountedPrice;
    }
    else if(subscriptionDuration>12)
    {
        discountedPrice=basePrice-basePrice*15/100;
        return discountedPrice;
    }
    else
    {
    return basePrice;
    }
}
