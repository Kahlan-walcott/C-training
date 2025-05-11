/*
Let’s get back to understanding variables in C. Now that we have our variable, we know its name and what it can hold, what do we do with it? Right now it’s empty and doesn’t serve any real purpose. A variable’s power comes from its ability to be set, changed, and examined. So the question is, how do we do that?

There are two ways to set a value, for now let’s look at how to set the value when you create the variable itself:

int example = 3;

In this case, not only have you created the variable, named it example, and identified it to hold whole numbers, you have set its value to be 3. We’ve saved time by doing all these parts in one line!

When declaring a char, you need single quotes around it:

char foo = 'a';
char goo = '2';
*/

# include <stdio.h>

int main() {

    int numOfBooks;
    char favLetter;
    char favDigit;
    double costOfCandyBar;

    printf("Number of books: %d\n", numOfBooks);
    printf("Your Favorite Letter is: %c\n", favLetter);
    printf("Your Favorite Digit is: %c\n", favDigit);
    printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}


// fixed

# include <stdio.h>

int main() {

    int numOfBooks = 6;
    /* The code has several variables(names and types already set up correctly).First, set an appropriate value for
    numOfBooks variable.
    Notice that the code does compile without the other variables set to specific values, but you get some strange results.
    This is a good lesson to keep in mind; the compiler will run your code if you don’t set a value ( in most cases) but you
    won’t be able to depend on the value in the variable.It’s good practice to set a default value for variables you create
    as soon as is practical in your code. */
    char favLetter = 'k';
    /* What is your favorite letter? Put it in for the value for favLetter.Remember, since it’s a char, you’ll need to put
    single quotes around the value when you declare it. */
    char favDigit = '8';
    /* Do you have a favorite digit? Put that into favDigit.Remember, since it’s a char, you’ll need to put single quotes
    around the value when you declare it.As a char it can only take one digit, so for example '7' would be valid but '70'
    would not be. */
    double costOfCandyBar = 5.50;
    /* Last, what does a candy bar cost at your local store? Set this into the costOfCandyBar variable. */
    printf("Number of books: %d\n", numOfBooks);
    printf("Your Favorite Letter is: %c\n", favLetter);
    printf("Your Favorite Digit is: %c\n", favDigit);
    printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}

