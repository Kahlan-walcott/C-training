/*
Remember that a pointer is a special type of integer variable. This implies that basic arithmetic operations can be done
on pointers.

The only arithmetic operations allowed for pointers are addition and subtraction. Conceptually, adding to (or
subtracting from) a pointer means the pointer will point to some new address. Multiplication is not allowed because the
address of a byte of memory is usually a large number; therefore, multiplying an address may yield an even larger
number, possibly representing an address outside the bounds of the available memory space. Division is not allowed as
it potentially allows a pointer to illogically point to an address with a non-integer index.

The addition operation for a pointer is only valid when adding an integer to a pointer; you cannot add two or more
pointers together! The syntax is traditional addition illustrated by the following example (here, n represents an
integer):

pointer = pointer + n;
pointer += n; // Same outcome with different syntax

The important thing to note here is that adding n to a pointer does not increment the address to point to a value n
bytes away. It moves the pointer by n * (size of the data type in bytes). For example, if a pointer to an int, the size
of which is four bytes, initially contains address 100 (we will use a decimal address for simplicity), and three is
added to the pointer, the pointer will now point to address 112.

Let’s take a look at how this works:

int main() {
  int* ptr;
  ptr += 3; // Increment pointer by three blocks.
}

This code increments the pointer ptr to store the address that is three int sizes away. Incrementing by one can be done
in the following ways:

pointer++;
pointer += 1; // Same outcome with different syntax

Subtracting from a pointer behaves in the same way with the address being decremented instead of incremented.

Working with pointer arithmetic can be dangerous if used carelessly. If an attempt is made to increment (or decrement)
a pointer beyond the bounds of the memory space of a program, a crash will occur. Pointers are so dangerous, that many
high-level languages (such as Java) will not even allow such operations.
*/

#include<stdio.h>

int main() {
  double* ptr1;

  // Code for Checkpoint 1 goes here:

  // Code for Checkpoint 2 goes here:
}

// fixed

# include<stdio.h>

int
main()
{
    double * ptr1;

    // Code for Checkpoint 1 goes here:
    ptr1 += 5;
    // Code for Checkpoint 2 goes here:
    ptr1 -= 4;
}

