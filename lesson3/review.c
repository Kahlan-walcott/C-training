/*
In this Lesson on variables in C we learned:

The rules for naming variables in C.
The main data types in C: int, float, double, and char.
Declaration and initialization of data types in C, as well as how to change their value.
How to cast from one data type to another and some potential limitations in C.
We went over a general introduction to variables, but there is much more to learn. You should now have the building
blocks we will add on to. In the next lesson, we will go over more options you have with variables, such as arithmetic,
comparisons, and logical operators that will allow you to expand on the power of variables in C.
*/

# include <stdio.h>

int main() {

    int variableInt;
    char variableChar;
    double variableDouble;

    // Feel free to play around with what you have learned about variables here.You can also create new ones if you like, but right now only the ones created for you are set to be displayed.
    // added after copying:

    variableInt = 7;
    variableChar = 'f';
    variableDouble = 3.5;


    variableInt = variableChar;

    // Output logic
    printf("display an int here: %d\n", variableInt);
    printf("display a char here: %c\n", variableChar);
    printf("display a double with 2 decimal places here: %.2f\n", variableDouble);

}

