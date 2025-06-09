#include <stdio.h>
#include <string.h>

// Structure to store item details
struct Item {
    int id;
    char name[30];
    float price;
};

// Function prototypes
void displayItems(struct Item items[], int size);
void placeOrder(struct Item items[], int size);

int main() {
    // Array of items
    struct Item items[] = {
        {1, "T-shirt", 500.0},
        {2, "Jeans", 1200.0},
        {3, "Jacket", 2000.0}, 
        {4, "Sweater", 1500.0},
        {5, "Shorts", 700.0},
        {6, "Cap", 300.0},
        {7, "Socks", 150.0}, 
        {8, "Scarf", 250.0},
        {9, "Gloves", 400.0},
        {10, "Track Pants", 1000.0}, 
        {11, "Sports Shoes", 2500.0},
        {12, "Belt", 800.0},
        {13, "Casual Shirt", 900.0},
        {14, "Formal Pants", 1800.0},
        {15, "Leather Jacket", 3500.0}, 
        {16, "Woolen Cap", 400.0},
        {17, "Thermal Wear", 1200.0}, 
        {18, "Raincoat", 1500.0},
        {19, "Umbrella", 500.0},
        {20, "Sneakers", 3000.0},
        {21, "Flip-Flops", 200.0},
        {22, "Handkerchief", 50.0}, 
        {23, "Tie", 600.0},
        {24, "Sunglasses", 1500.0},
        {25, "Watch", 5000.0}, 
        {26, "Backpack", 3500.0},
        {27, "Duffel Bag", 4000.0},
        {28, "Wallet", 1200.0},
        {29, "Laptop Bag", 4500.0}, 
        {30, "Headphones", 2000.0}
    };

    int size = sizeof(items) / sizeof(items[0]);
    int choice;

    printf("Welcome to Online Shopping App!\n");

    do {
        printf("\nMenu:\n");
        printf("1. View Items\n");
        printf("2. Place Order\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayItems(items, size);
                break;
            case 2:
                placeOrder(items, size);
                break;
            case 3:
                printf("Thank you for visiting! Goodbye.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}

void displayItems(struct Item items[], int size) {
    printf("\nAvailable Items:\n");
    printf("ID\tName\t\tPrice\n");
    printf("----------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%-15s\t%.2f\n", items[i].id, items[i].name, items[i].price);
    }
}

void placeOrder(struct Item items[], int size) {
    int id, quantity;
    float total = 0.0;

    printf("\nEnter the ID of the item you want to order (Enter -1 to stop): ");
    while (1) {
        scanf("%d", &id);
        if (id == -1)
            break;

        int found = 0;
        for (int i = 0; i < size; i++) {
            if (items[i].id == id) {
                printf("Enter quantity for %s: ", items[i].name);
                scanf("%d", &quantity);
                total += items[i].price * quantity;
                printf("%d x %s added to cart. Subtotal: %.2f\n", quantity, items[i].name, total);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Invalid ID! Please try again.\n");
        }
        printf("\nEnter the next ID (or -1 to finish): ");
    }

    if (total > 0)
        printf("\nOrder placed successfully! Total Amount: %.2f\n", total);
    else
        printf("\nNo items ordered.\n");
}
