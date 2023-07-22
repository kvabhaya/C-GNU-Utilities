#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100

struct Product {
    int id;
    char name[50];
    double price;
    int quantity;
}

struct Product products[MAX_PRODUCTS];
int numProducts = 0;

void addProduct() {
    if (numProducts >= MAX_PRODUCTS) {
        printf("Cannot add more products. Maximum capacity reached.\n");
        return;
    }

    struct Product newProduct;
    newProduct.id = numProducts + 1;

    printf("Enter product name without spaces : ");
    scanf("%s", newProduct.name);

    printf("Enter product price: ");
    scanf("%lf", &newProduct.price);

    printf("Enter product quantity: ");
    scanf("%d", &newProduct.quantity);

    products[numProducts] = newProduct;
    numProducts++;

    printf("ID Number %d Product added successfully.\n",numProducts);
}

void editProduct() {
    int productId;
    printf("Enter the product ID to edit: ");
    scanf("%d", &productId);

    if (productId < 1 || productId > numProducts) {
        printf("Invalid product ID.\n");
        return;
    }

    struct Product *product = &products[productId - 1];

    printf("Enter product name (current: %s): ", product->name);
    scanf("%s", product->name);

    printf("Enter product price (current: %.2lf): ", product->price);
    scanf("%lf", &product->price);

    printf("Enter product quantity (current: %d): ", product->quantity);
    scanf("%d", &product->quantity);

    printf("Product updated successfully.\n");
}

void deleteProduct() {
    int productId;
    printf("Enter the product ID to delete: ");
    scanf("%d", &productId);

    if (productId < 1 || productId > numProducts) {
        printf("Invalid product ID.\n");
        return;
    }

    for (int i = productId - 1; i < numProducts - 1; i++) {
        products[i] = products[i + 1];
    }

    numProducts--;

    printf("Product deleted successfully.\n");
}

void viewProducts() {
    printf("Products List:\n");
    printf("ID\tName\t\tPrice\tQuantity\n");
    for (int i = 0; i < numProducts; i++) {
        printf("%d\t%s\t%.2lf\t%d\n", products[i].id, products[i].name, products[i].price, products[i].quantity);
    }
}

int main() {
    int choice;
    do {
        printf("\nRetail and E-commerce Manager\n");
        printf("1. Add Product\n");
        printf("2. Edit Product\n");
        printf("3. Delete Product\n");
        printf("4. View Products\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                editProduct();
                break;
            case 3:
                deleteProduct();
                break;
            case 4:
                viewProducts();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
