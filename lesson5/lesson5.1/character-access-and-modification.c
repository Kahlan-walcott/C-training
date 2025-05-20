/*
The characters of a string are accessed using the same methods as those for a regular array. It’s important to note that
since strings are arrays of characters, they are subject to all of the same constraints as an array. This means a string
cannot be extended to add new characters, and a character in a string cannot be deleted!

Recall from the lesson on arrays that an element in an array is accessed like so:

arr[idx]

In the case of strings, the index, idx, represents the character at that index. And just like arrays, the nth character
is at index n-1. Here is an example:

char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
char str2[] = "Hello World";

printf("%c\n", str[6]); // "%c" required to instruct printf() that it is to expect a character.
printf("%c", str2[6]);

The code above creates the string “Hello World” in both ways. str[6] and str2[6] will access the character at index six,
which is the seventh character in both strings, respectively. In this case, this character is 'W', which is the same for
both strings since they are identical.

Modifying a character in a string is done in the same way as modifying an element in an array regardless of how the
string was created:

arr[idx] = newValue

In the case of strings, newValue represents the new character to be placed. Remember, that it is not possible to add
characters or delete them. Here is an example:

char str[] = "Hello World";
printf("%s\n", str); // This will print Hello World to the screen

str[6] = 'W'; // Replace 'Y' with 'W'
printf("%s\n", str); // This will print Hello World to the screen
*/

#include <stdio.h>

int main() {
  char p[] = "processor";
  // Checkpoint 1 code goes here
  // Checkpoint 2 code goes here
  printf("%s", p);
}

// fixed

#include <stdio.h>

int main() {
  char p[] = "processor";
  // Checkpoint 1 code goes here. Print the third character of the string p.
  printf("%c\n", p[2]);
  // Checkpoint 2 code goes here. The string p incorrectly attempts to spell the word “processor”. Correct this mistake and print the string to the console.
  p[5] = 's';
  p[6] = 's';
  printf("%s", p);
}

