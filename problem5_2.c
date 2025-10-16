#include <stdio.h>

int main() {
    int initialChickens, weeks, maxCapacity, weeklySales;
    double breedingRate, mortalityRate, costPerChicken, salePricePerChicken;

    printf("Enter initial number of chickens: ");
    scanf("%d", &initialChickens);

    printf("Enter weekly breeding rate (decimal), e.g. 0.05 for 5%%: ");
    scanf("%lf", &breedingRate);

    printf("Enter weekly mortality rate (decimal), e.g. 0.02 for 2%%: ");
    scanf("%lf", &mortalityRate);

    printf("Enter maximum farm capacity: ");
    scanf("%d", &maxCapacity);

    printf("Enter cost per chicken: ");
    scanf("%lf", &costPerChicken);

    printf("Enter sale price per chicken: ");
    scanf("%lf", &salePricePerChicken);

    printf("Enter number of chickens sold weekly: ");
    scanf("%d", &weeklySales);

    printf("Enter number of weeks to simulate: ");
    scanf("%d", &weeks);

    double currentChickens = initialChickens;
    double totalCost = 0;
    double totalRevenue = 0;

    printf("Week 0: %.0f chickens\n", currentChickens);

    for (int week = 1; week <= weeks; week++) {
        // Breeding increases population
        currentChickens = currentChickens * (1 + breedingRate);

        // Mortality decreases population
        currentChickens = currentChickens * (1 - mortalityRate);

        // Ensure farm capacity is not exceeded
        if (currentChickens > maxCapacity) {
            currentChickens = maxCapacity;
        }

        // Sell chickens (cannot sell more than available)
        int chickensToSell = (currentChickens > weeklySales) ? weeklySales : (int)currentChickens;
        currentChickens -= chickensToSell;

        // Cost and revenue calculations
        totalCost += currentChickens * costPerChicken;
        totalRevenue += chickensToSell * salePricePerChicken;

        printf("Week %d: %.0f chickens, Sold: %d, Total Cost: %.2f, Total Revenue: %.2f\n",
               week, currentChickens, chickensToSell, totalCost, totalRevenue);
    }

    printf("After %d weeks:\n", weeks);
    printf("Remaining chickens: %.0f\n", currentChickens);
    printf("Total cost: %.2f\n", totalCost);
    printf("Total revenue: %.2f\n", totalRevenue);
    printf("Net profit: %.2f\n", totalRevenue - totalCost);

    return 0;
}
