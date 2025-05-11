/*
At their core, computers are basically fancy calculators. So it’s a good thing to learn how to perform basic
mathematical operations early on in your language development.

Addition and subtraction work just as you would expect them to. a = 2 + 3 will store 5 in the variable a. You can also
use these variables as part of the math (or all of it).

int a = 2;
int b = 3;
int c = a + b;

These same foundational principles of mathematics hold true for subtraction, multiplication, and division.
*/

# include <stdio.h>

int main() {

    // Variables set for you, do not change here
    int booksSold = 100;
    double bookCost = 9.99;
    double totalSalesValue;
    
    // Make your changes here
    
    // Output logic, no need to change this
    printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
}

// fixed

# include <stdio.h>

int main() {

    // Variables set for you, do not change here
    int booksSold = 100;
    double bookCost = 9.99;
    double totalSalesValue;

    // Make your changes here
    // Your task is to modify the values stored in the variables using basic mathematical symbols given any changes.It was a good week, you sold 200 more books! Update the booksSold accordingly.
    booksSold += 200;

    // Now that you have the updated book sale counts, calculate the totalSalesValue.
    totalSalesValue = booksSold * bookCost;

    // Your publisher takes half of the total sales as part of their cut.Update your totalSalesValue accordingly (you can do this with multiplication or division in the real world, but for practice, please use division).
    totalSalesValue /= 2;

    // Output logic, no need to change this
    printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
}

