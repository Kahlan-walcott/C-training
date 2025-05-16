/*
Now that you’ve interacted with a loop, let’s write one!

The while loop looks very similar to an if statement. And just like an if statement, it executes the code inside of it
if the condition is true. The difference, however, is that the while loop will continue to execute the code inside of
it, over and over again, as long as the condition is true.

Here’s a simple form of the while loop:

while (condition) {
  // Statement(s)
}

In other words, instead of executing if something is true, it executes while that thing is true.

while (guess != 8) {
  printf("Wrong guess, try again: ");
  scanf("%d", &guess);
}

In this example, the program will keep asking the user to input a new number while guess is not equal to 8. It will exit
the while loop once the user types 8, allowing the condition to finally become false and let the program continue.
*/


#include <stdio.h>

int main() {

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  // Write a while loop here:

  if (guess == 8) {
    printf("You got it!\n");
  }
}

// fixed

#include <stdio.h>

int main() {

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  // Write a while loop here:
  /* We have a program that asks the user to guess a number between 1 and 10. 
  The answer we’re looking for is 8!

  Run the program a couple of times and try guessing wrong numbers first. 
  Then guess the correct number to get a feel for how the program repeats 
  itself.

  As a reminder, here’s how to compile and execute your code:
  gcc guess.c
  ./a.out
  while (guess != 8) {
    printf("Wrong number, try again: ");
    scanf("%d", &guess);
  }*/
  while (guess != 8 && tries < 50) {
    printf("Wrong number, try again: ");
    scanf("%d", &guess);
    tries++;
  }

  /* Now instead of just asking the user once, let’s add a while loop to handle the repetition of guesses. To limit the loop, we’ll allow up to 50 tries: */

  if (guess == 8) {
    printf("You got it!\n");
  }
}

