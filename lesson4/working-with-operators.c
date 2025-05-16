/*
We’ve already seen relational operators at work. Conditionals incorporate them in all their forms.

For example, we can do something like:

if (grade >= 60) {
  // Do something
}

In much the same fashion, we could’ve used a <=, or !=, or even ==. These relational operators naturally result in true
or false expressions, which make them perfect for conditionals!

However, sometimes we need to write multiple conditions in one conditional statement. In a past lesson, we learned about
logical operators. We can use these operators here as well!

Let’s recap the logical operators:

&& AND
|| OR
! NOT
When placed in a conditional statement, logical operators work together to produce one true or false output across
multiple conditions.

For example:

if (a > 0 && b > 0) {
  printf("Positive\n");
}

The above conditional checks if both conditions are true, and if they both are, the if statement passes. If either a or
b was a negative number, the if statement would be false.
*/

#include <stdio.h>

int main() {

  int a = 10;
  int b = -5;

  if (a > 0 && b > 0) {
    printf("Positive\n");
  }
}

// fixed

#include <stdio.h>

int main() {

  int a = 10;
  int b = -5;
  // Change the logical operator in the conditional statement from a > 0 && b > 0 to a > 0 || b > 0. What do you think will happen?
  if (a > 0 || b > 0) {
    printf("Positive\n");
  }
  // Now add another if statement that checks if both a > 0 and !(b > 0) are true and prints “Positive too” if they are. What do you think will happen?
  if (a > 0 && !(b > 0)) {
    printf("Positive too");
  }
}

