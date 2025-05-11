/*
In most cases, variable values can be changed in the program, however, there are cases where you do not want to allow
for your variables to change value. This is where constants come into play. These special types prevent any changes
during execution once the value is set at declaration.

Any basic data type in C, like those we have gone over, can be declared as a constant using the keyword const before the
type. So instead of our template of type variable_name, it would be const type variable_name.

It is also a best practice to use all upper case letters when declaring a constant:

const int DAYSINWEEK = 7;
*/

# include <stdio.h>

int main() {

    // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
    double SPEEDOFLIGHT;
    int timeTraveledInSeconds = 30;
    
    SPEEDOFLIGHT = 1.86;
    
    // No need to change below here
    printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

}



// fixed


# include <stdio.h>

int main() {

    // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.(The speed of light is a constant, so a great candidate for an example of the const variable type.For the first step, identify the SPEEDOFLIGHT as a constant.)
    const double SPEEDOFLIGHT = 1.86;
    int timeTraveledInSeconds = 30;

    /* The program now violates the rules of constants. We know the speed of light won’t change, so how can you fix the code to run correctly by obeying the rules of constants? */

    // No need to change below here
    printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

}

