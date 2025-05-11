/*
A more interesting casting option is converting a char to a number type, or the other way around. Just like before, you
have to be careful how you set this up. In the back-end, a char doesn’t store 'a', it stores the value representing
that: 97 for lowercase and 65 for uppercase.

int targetInt;
char sourceChar = 'a';
targetInt = (int)sourceChar;

Now targetInt equals 97.

When you cast an int to a char, you get the opposite process and the char is set to the value at the int value. So if
you did:

int sourceInt = 65;
char targetChar;
targetChar = (char)sourceInt;

targetChar now equals 'A'.
*/

# include <stdio.h>

int main() {

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    // Cast here

    // No need to change below here
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}


// fixed

# include <stdio.h>

int main() {

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    // Cast here
    /* If 'a' is 97, what do you suppose we would get if we set an int to 99 and cast it to a char? Let’s find out.The initial state is set so you need to cast our sourceInt to targetChar.
    Set targetChar equal to sourceInt and explicitly cast it by using (char).*/
    targetChar = (char)sourceInt;

    /* Now let’s see what happens when you cast a double into a char.Set targetChar to sourceDouble using implicit casting (no type identifier for the cast). */
    targetChar = sourceDouble;

    // (No need to change below here)
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}

