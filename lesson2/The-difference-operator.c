/*
If we have a pointer that is assigned the memory address of a variable, eventually we will need to access the data that
it contains so we can use or manipulate it. The data contained in the memory address pointed to by a pointer can be
accessed using the dereference operator (*). The syntax is as follows:

*pointerName;

Once a pointer is dereferenced, we can use its contents as we would a regular variable. It is important not to confuse
this operator with the multiplication operator as they are represented by the same symbol!

Here is a full example:

int x = 4;
int* ptr = &x; // ptr stores the memory address of variable x

int y = *ptr; // Declare variable y and assign to it the data stored in memory pointed to by ptr, which is the value of
variable x

printf("%i", y);

The code above illustrates how to obtain the data stored in the address pointed to by ptr by dereferencing it. Since
ptr stores the address of variable x, the value obtained by dereferencing ptr is the value of x. If the value of a
dereferenced pointer is changed, the value of the corresponding variable will change in the same way:

int x = 4;
int* ptr = &x;

*ptr = 200; // The data in the memory address pointed to by ptr now contains the value 200

printf("%i", x); // This will output 200

The code above declares a variable x with an initial value of four. The pointer ptr points to the memory address of x.
*ptr = 200 changes the data at the memory address stored in ptr to 200. Since this memory address is that of the
variable x, the value of x now changes from four to 200.
*/

# include<stdio.h>

int main() {

    int k = 2000;
    int * ptr = & k;

    // Checkpoint 1 code goes here.
    
    // Checkpoint 2 code goes here.

    printf("%i\n", k); // Notice how variable k changed value after Checkpoint 2!
}

// fixed

# include<stdio.h>

int main() {

    int k = 2000;
    int * ptr = & k;

    // Checkpoint 1 code goes here.
        printf("%i\n", *ptr);
    // Checkpoint 2 code goes here.
    * ptr = 961;

    printf("%i\n", k); // Notice how variable k changed value after Checkpoint 2!
}

