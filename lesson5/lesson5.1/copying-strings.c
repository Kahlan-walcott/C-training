/*
In this exercise, we will take a look at the strcpy() function which is used to copy a string into an empty character
array (empty string). The syntax for this function is this:

strcpy(dst, src);

Given a string src and an empty string (empty character array) dst, the strcpy() function copies the contents of the src
string into the dst string. It is important that the size of the empty character array, dst, be greater than or equal to
the length of the string src plus one for the null character (‘\0’) in order to accommodate all incoming characters. If
the dst char array is too short, the program will exhibit undefined behavior. Similar to the strcat() function, a new
string will not be created.

The following example illustrates the use of strcpy():

#include<stdio.h>
#include<string.h>

int main() {
  char s1[] = "ABCD";
  char s2[5]; // Empty string of five characters
  strcpy(s2, s1);
  printf("%s", s2); // Prints: ABCD
}
*/

#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "banana";
    char dst[7];

    char pan[] = "How vexingly quick daft zebras jump!";
    int len = 0; // Checkpoint 2
    char dst2[len];

    // Code for checkpoint 1 goes here

    printf("%s\n", dst);

    // Code for checkpoint 3 goes here

    printf("%s", dst2);
}

// fixed

#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "banana";
    char dst[7];

    char pan[] = "How vexingly quick daft zebras jump!";
    int len = strlen(pan) + 1; // Checkpoint 2. The variable len represents the size of an empty char array that will be used to receive a copied string.Initially, it contains the number zero.Change the variable len so that the empty char array, dst2, has enough space to store the letters of the string pan.
    char dst2[len];

    // Code for checkpoint 1 goes here. Copy the string from src to dst.
    strcpy(dst, src);
    printf("%s\n", dst);

    // Code for checkpoint 3 goes here. Copy the letters of pan into dst2.
    strcpy(dst2, pan);
    printf("%s", dst2);
}

