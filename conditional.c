#include <stdio.h>

int main() {
    int choice;
    
    // List of food items and their prices
    char *foodItems[] = {"Pizza", "Burger", "Pasta", "French Fries", "Sandwich"};
    int prices[] = {239, 129, 179, 99, 149};
    
    // Prompt the user to enter a number between 1 and 5
    printf("Enter a number from 1 to 5: ");
    scanf("%d", &choice);
    
    // Check if the input is within the valid range
    if (choice < 1 || choice > 5) {
        printf("Invalid input. Please enter a number between 1 and 5.\n");
    } else {
        // Adjust the index to be zero-based
        int index = choice - 1;
        
        // Print the selected food item and its price
        printf("Food item - %s\n", foodItems[index]);
        printf("Price - Rs %d\n", prices[index]);
    }
    
    return 0;
}
