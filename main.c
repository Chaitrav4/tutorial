#include <stdio.h>

int main() {
    double meal_cost, tax_rate, tip_percentage, total_cost;

    
    printf("Enter the cost of the meal: $");
    scanf("%lf", &meal_cost);

    printf("Enter the tax rate (e.g., 0.08 for 8%%): ");
    scanf("%lf", &tax_rate);

    printf("Enter the tip.   percentage:");
    scanf("%lf", &tip_percentage);

    
    total_cost = meal_cost + (meal_cost * tax_rate) + (meal_cost * tip_percentage);

    printf("The total cost of the meal, including tax and tip, is: $%.2lf\n", total_cost);

    return 0;
}