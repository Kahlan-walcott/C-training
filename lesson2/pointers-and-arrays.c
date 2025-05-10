/*
In the lesson on arrays, you learned that an array is a contiguous block of memory reserved for many variables of the
same type. Because of this structured organization, a pointer is well suited to work with this data type. If we have an
integer array, we can use pointers and pointer arithmetic to iterate through the array to access or manipulate its
values.

Consider an array of integers arr. Since arrays are contiguous blocks of memory, if we have a pointer to the first
element, we can use pointer arithmetic to access the rest of the array. Keep in mind that while this is a valid way to
work with arrays, it is unsafe. Accessing memory outside of the bounds of the array will not cause a program crash, but
will silently corrupt data stored in those addresses. In the case of a read operation, it will return a random value.

With caution in mind, let’s see how we can carefully access and manipulate elements in an array using pointers. The
following code prints all of the elements of an array:

int arr[10] = {2, 4, 7, 1, 10, 3, 11, 6, 20, 5};
int* ptr = &arr[0]; // Pointer to the first element

for(int i = 0; i < 10; i++){
  printf("%i\n", *ptr); // Dereference the pointer and print the value
  ptr++; // Increment the pointer to point to the next int in the array
}

The following code illustrates how to change the values of an array using pointers by changing all the elements in an
array to three:

int arr[10] = {2, 4, 7, 1, 10, 3, 11, 6, 20, 5};
int* ptr = &arr[0]; // Pointer to the first element

for(int i = 0; i < 10; i++){
  *ptr = 3; // Dereference the pointer and assign the value at the ptr address to three
  ptr++; // Increment the pointer to point to the next int in the array
}

for(int i = 0; i < 10; i++){
  printf("%i",arr[i]);
}

The output of the code above will be a string of 10 threes. These techniques are also applicable to strings since they
are arrays too.
*/

# include<stdio.h>
# include<string.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

    // Code for Checkpoint 1 goes here.

    // Code for Checkpoint 2 goes here.

    // Code for Checkpoint 3 goes here.

    // Code for Checkpoint 4 goes here.

    printf("%s\n", s);
}

// fixed code


# include<stdio.h>
# include<string.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

    // Code for Checkpoint 1 goes here. (Create a pointer to an int called ptr and have it point to the last element in array arr.)
    int* ptr = & arr[9];
    // Code for Checkpoint 2 goes here. (Using pointer arithmetic, loop through arr and print the contents in reverse.)
    for (int i = 0; i < 10; i++){
    printf("%i\n", * ptr);
    ptr--;
    }
    // Code for Checkpoint 3 goes here. (Create a pointer to a char called ptr2 and set it to point to the first character in string s.)
    char *ptr2 = & s[0];
    // Code for Checkpoint 4 goes here. (Using pointer arithmetic on ptr2, loop through the string s and replace all the characters with the character ‘#‘.)
    for (int i = 0; i < strlen(s); i++){
    *ptr2 = '#';
    ptr2++;
    }
    printf("%s\n", s);
}

