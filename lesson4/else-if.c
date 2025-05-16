/*
So what happens if you want more than two possible outcomes?

This is where else if comes in!

if (condition) {
  // Some code
} else if (condition) {
  // Some code
} else {
  // Some code
}

The else if statement always comes after the if statement and before the else statement (if there is one). Like the else
statement, else if statements are also always optional!

The else if then takes a condition, and you can have more than one of them. Here’s an example with three of them:

if (grade == 9) {
  printf("Freshman\n");
} else if (grade == 10) {
  printf("Sophomore\n");
} else if (grade == 11) {
  printf("Junior\n");
} else if (grade == 12) {
  printf("Senior\n");
} else {
  printf("Super Senior\n");
}
*/

# include <stdio.h>

int main() {

    double ph = 7.9;

    // Start the if, else if , else here:
}

// fixed

# include <stdio.h>

int main() {

    double ph = 7;

    // Start the if, else if , else here:
    // In chemistry, pH is a scale used to specify the acidity or basicity of an aqueous solution. Write an if statement that checks if ph is greater than 7, then print “Basic” if it is.
    if (ph > 7) {
        printf("Basic");
    } else if (ph < 7){
        printf("Acidic");
    } else {
        printf("Neutral");
    }
    // Change double ph = 7.9 to double ph = 4.6.Now attach an else if statement to that if statement and have it check if ph is less than 7, then print “Acidic” if it does.
    // Change double ph = 4.6 to double ph = 7. Add an else statement that prints “Neutral” if all conditions fail to pass.
}

