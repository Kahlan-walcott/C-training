/*
You might have noticed printf() at the bottom of some exercises. This allows for text output to the terminal.
The basic format is printf("string to display", [list of optional parameters]).

The optional parameters let you add values dynamically into the string, such as values stored in the variables we have
been learning about. For example, if we wanted to output Hello World, today is the 3rd!, you could do that like this:

int day = 3;
printf("Hello World, today is the %drd!", day);

When the compiler runs the code it will replace %d with the value in the variable list, taking them in the order found
in the string matching the order they are listed; first in the string is matched with first in the list of parameters).

There are lots of optional formatting and parameter types that can be used, but for our purposes here are a few of the
basic ones.

To indicate a variable type you want to replace:

symbol	type
%d or %i	int
%f	double or float
%c	char
You can also use some reserved symbols within the string to have invoked formatting, here are a few common ones.

symbol	effect
\n	newline
\r	carriage return
\t	tab
*/

# include <stdio.h>

int main() {

    int ageLearnedToRide = 5;

    printf("I was years old when I learned to ride a bike.");
    printf("I hope I still remember how to ride.");
}

// fixed


# include <stdio.h>

int main() {

    int ageLearnedToRide = 5;

    // 1 Add newline command at the end of the first printf() so that the output is cleaner.
    printf("I was %d years old when I learned to ride a bike.\n", ageLearnedToRide);
    // 2 Modify the printf() command in the code to add the variable to the output so that the output makes sense.
    printf("I hope I still remember how to ride.");
}

