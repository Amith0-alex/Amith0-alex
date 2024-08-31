#include <stdio.h>
union book {
    char name[20];
    int pages;
    float price;
};
int main() {
    union book b; // Declare the book variable

    printf("Enter the name of the book: ");
    scanf("%s", b.name); // Remove & from b.name

    printf("Enter the number of pages: ");
    scanf("%d", &b.pages);

    printf("Enter the price of the book: ");
    scanf("%f", &b.price);

    printf("The name of the book is %s\n", b.name);
    printf("The number of pages is %d\n", b.pages);
    printf("The price of the book is %.2f\n", b.price);

    return 0;
}