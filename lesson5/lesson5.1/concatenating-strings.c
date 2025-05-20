/*
Just like there exists a function for strings that returns its length (strlen()), the string library contains other
useful string functions. In this exercise, we will explore how to concatenate two strings together using the strcat()
function.

The strcat() function takes one string, src, and appends it to the end of another string, dst. Using this function does
not create a separate third string, but modifies the dst string to include the src string at the end. The syntax for
this is:

strcat(dst, src);

At first glance, it may appear that some magic has taken place here because it is known that strings (because they are
arrays) are immutable! What actually happens is the function takes the two strings and creates a char array of size
strlen(src) + strlen(dst) + 1. It then populates the array with the characters of both strings starting with dst.
Finally, it discards the memory occupied by the original dst string and associates the dst string variable with the new
char array created. This is all done for you “under the hood” using the concept of pointers, a topic that will be
discussed in a future lesson.

Here it is in action:

#include<stdio.h>
#include<string.h> // Don't forget to include this!

int main() {
  char s1[] = "abcd";
  char s2[] = "efgh";
  strcat(s1, s2);
  printf("%s", s1);
  // Output will be "abcdefgh"
}
*/

#include <stdio.h>
#include <string.h>

int main() {

    char s1[] = "London";
    char s2[] = " Bridge";

    char n[] = "New";
    char y[] = " York";
    char c[] = " City";

// Code for checkpoint 1 goes here

// Code for checkpoint 2 goes here

}

// fixed


#include <stdio.h>
#include <string.h>

int main() {

    char s1[] = "London";
    char s2[] = " Bridge";

    char n[] = "New";
    char y[] = " York";
    char c[] = " City";

    // (Code for checkpoint 1 goes here. Concatenate strings s1 and s2 and print the result, include a new line at the end of the output.
    strcat(s1, s2);
    printf("%s\n", s1);
    // Code for checkpoint 2 goes here. Concatenate the strings n, y, c and print the result.
    strcat(n, y);
    strcat(n, c);
    printf("%s\n", n);
}

