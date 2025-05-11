/*
Before, we said that there are two times when you can set a variable’s value. We just examined how to set it at
declaration, but if that’s the only place it could be set, variables would have limited value (we will see in a moment
an exception to this rule). It turns out they can also be set at any future point in the code! As an example:

int total_units;
…
…
…
total_units = 3;

Notice that once we have declared the type we no longer reference the type, we just use the name of the variable. You
can also set a variable to be the same as what is stored in another variable, such as a = b. If you change b after this,
the values will no longer match (there is a way to tie the two variables together so they always match, but we will get
to that in a later lesson).
*/

# include <stdio.h>

int main() {

    // These variables were created and had a starting value for you, no need to change
    char bookVersionReview = 'A';
    char movieVersionReview = 'B';
    double ticketPrice = 10.25;
    double bookPrice = 19.99;
    
    // Update the movie review score here
    
    // Update the ticket price here
    
    // No need to change below here
    printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
    printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}


// fixed

# include <stdio.h>

int main() {

    // These variables were created and had a starting value for you, no need to change
    char bookVersionReview = 'A';
    char movieVersionReview = 'B';
    double ticketPrice = 10.25;
    double bookPrice = 19.99;

    // Update the movie review score here (The initial movie reviews were generous, but have gone down since opening weekend, the average score for the movie is now a C, please update this score.)
    movieVersionReview = 'C';
    // Update the ticket price here (Set the price of the movie ticket equal to the price of the book.)
    ticketPrice = bookPrice;

    // No need to change below here
    printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
    printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}

