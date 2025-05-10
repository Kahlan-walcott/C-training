/*
In C, a byte of memory can be accessed using a pointer. A pointer containing the address of a variable is said to
“point” to that variable.

A pointer to a variable is the address of the first of these bytes. A pointer can be created for every type of variable:
be it primitive (for example int, char, or double), a custom data type created using a struct (we’ll cover those in a
later lesson), or even another pointer. The syntax of a pointer is the following:

dataType* nameOfPointer;

or

dataType *nameOfPointer;

For example, to declare a pointer variable (called ptr) that points to an int, you would write:

int* ptr; // Pointer to an int
int *ptr; // Same as above but different style.

In this case, ptr stores the address of the first byte of a block of memory containing an int. To print this address to
the screen, printf() is used like so:

int x; // Create an int variable
int* ptr = &x; // Pointer to that int (we'll dive into what "&" means in the coming exercises)
printf("%p", ptr); // %p needed to instruct printf() that ptr is of type pointer

This will output a hexadecimal integer that represents the address in memory that is storing a variable of type int.
This number will be different every time the program is executed.

If we had another pointer named ptr2 that doesn’t point to a declared variable, printing it will result in (nil) rather
than a hexadecimal address:

int* ptr2;
printf("%p", ptr2); // Prints: (nil)
*/

#include<stdio.h>

int main() {
    // Checkpoint 1 code goes here.

    // Checkpoint 2 code goes here.

    // Checkpoint 3 code goes here.
}

// fixed code (my code)
#include<stdio.h>

int
main()
{
  // Checkpoint 1 code goes here.Create a double variable named dblVar
  double dblVar;
  double * dblPtr = & dblVar;
  printf("%p", dblPtr);
  // Checkpoint 2 code goes here. Create a pointer variable called dblPtr that points to dblVar.
  dblPtr x;
  dblPtr * ptr = &dblVar

  // Checkpoint 3 code goes here. Print the address stored in dblPtr to the screen.
  printf("%p", dblPtr)
}

// the solution code
#include<stdio.h>

int main() {
  double dblVar;
  double* dblPtr = &dblVar;
  printf("%p", dblPtr);
}

