#include <stdio.h>

int main() {
    int initialChickens, weeks;
    double breedingRate;
    
    printf("Enter initial number of chickens: ");
    scanf("%d", &initialChickens);
    
    printf("Enter weekly breeding rate as decimal, e.g., 0.05 for 5%%: ");
    scanf("%lf", &breedingRate);
    
    printf("Enter number of weeks: ");
    scanf("%d", &weeks);
    
    double currentChickens = initialChickens;
    
    printf("Chicken Farm Growth Simulation\n");
    printf("Week 0: %.0f chickens\n", currentChickens);
    
    for (int week = 1; week <= weeks; week++) {
        currentChickens = currentChickens * (1 + breedingRate);
        printf("Week %d: %.0f chickens\n", week, currentChickens);
    }
    
    printf("After %d weeks: %.0f chickens\n", weeks, currentChickens);
    
    return 0;
}
