/*
Just like with arrays, we can also loop through a string to access or modify its characters! 
You can use a while loop or a for loop, but in most cases, a for loop is much more convenient. 
Here is an example of looping through a string:

char str[] = "Hello World";

for(int i = 0; i < 11; i++) {
  printf("%c", str[i]);
}

This code will loop through the string “Hello World” and print the characters to the screen. Note that in a loop, you do
not need to account for the null terminating character as it is unlikely you will need to use it.

However, there is a small problem with this code. The for loop hard codes the length of the string (11 in this case) in
the condition statement. Writing loops in such a way presents a problem as the length of the string is rarely known
beforehand and makes this loop valid only for strings with 11 characters! To remedy this problem and make the loop valid
for strings of any length, we can use the strlen() function. This function determines the length of the string. It is
used like so:

strlen(str)

The strlen() function is a special string function contained in the string library. To use it, the code must include the
following line at the top of the file:

#include<string.h>

The example code from above can now be written like this:

#include<stdio.h>
#include<string.h>

int main() {
  char str[] = "Hello World";

  for(int i = 0; i < strlen(str); i++) { // Using strlen instead of hard coding the string length
    printf("%c", str[i]);
  }
}

Note that strlen() does not account for the null terminating character.
*/

#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "pool loop";
  // Checkpoint 1 code goes here
  printf("%s\n", s);
  // Checkpoint 2 code goes here
  printf("%s", p);
}

// fixed

#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "pool loop";
  // Checkpoint 1 code goes here. The string s contains a message that must be concealed. Using a loop, replace every character in the string with the character '*'.
  for(int i = 0; i < strlen(s); i++) {
    s[i] = '*';
  }
  printf("%s\n", s);
  // Checkpoint 2 code goes here. String p contains the string “pool” and its mirror string “loop”. Loop through the string and replace the first half with '#'s.
  for(int j = 0; j < strlen(p)/2; j++) {
    p[j] = '#';
  }
  printf("%s", p);
}

