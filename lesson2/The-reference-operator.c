/*
Since pointers are used to store the memory address of a variable, we need to obtain this address first. This is done
by using the reference operator (&). The syntax for this is:

&variableName;

Consider the following piece of code:

int x = 9;
printf("%p", &x);

This will output to the screen the memory address of the variable x. To assign an address to a pointer, the following
syntax is used:

pointer = &variableName;

Consider the following example:

int x = 727; // Declare variable x
int* ptr = &x; // Declare a pointer to an int variable and assign to it the address of variable x
printf("%p\n", &x); // Print the address of x
printf("%p\n", ptr); // Print the address pointed to by ptr

The code above declares an integer variable x and an int pointer variable ptr. The pointer is then assigned the memory
of the variable x. The last two printf() statements print this address; both lines will output the same hexadecimal
number as they both refer to the same address in memory.

The address a pointer contains is not constant. A pointer may be reassigned to a new address so long as type consistency
is maintained (e.g., int pointer points to a variable of type int).
*/

# include<stdio.h>

int main() {

    double g = 9.81;
    double pi = 3.14;

    // Checkpoint 1 code goes here.

    // Checkpoint 2 code goes here.

    // Checkpoint 3 code goes here.

}


// fixed (my code)

# include<stdio.h>

int main() {

    double g = 9.81;
    double pi = 3.14;

    // Checkpoint 1 code goes here.
    double* dblPtr = & g;

    // Checkpoint 2 code goes here.
    printf("%p", dblPtr);
    // Checkpoint 3 code goes here.
    dblPtr = &pi;
}

