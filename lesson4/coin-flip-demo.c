/*
Before we dive deep into the syntax of the if statement, let’s do a demo!

title

Here, we have a coinflip.c program that simulates a coin toss:

50% of the time, it’s Heads.
50% of the time, it’s Tails.
*/

// just run the program to see how the if/else statements work


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Create a number that’s 0 or 1
  srand (time(NULL));
  int coin = rand() % 2;

  // If number is 0: Heads
  // If it is not 0: Tails
  if (coin == 0) {
    printf("Heads\n");
  } else {
    printf("Tails\n");
  }
}

