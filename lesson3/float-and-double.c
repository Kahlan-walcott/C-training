/*
A float has less precision than a double, 6 vs 15 possible decimal places respectively, and therefore takes up less
memory (4 vs 8 bytes). However, a double run faster, so you gain speed at the cost of more memory usage.

The other thing to be aware of is that the system is rounding the values you store in either. This can cause unexpected
results, especially with a float as they have less precision. This is why you will see double being used any time
accuracy is important, such as in scientific, medical or financial applications.
*/

# include <stdio.h>

int main() {

    // Modify this variable value, start low and increase until something odd appears in the results
    int numOfLoops = 10;

    // Please do not modify anything below this point
    float a = 0.1
    f;
    float b = 0;
    double x = 0.1;
    double y = 0;

    printf("At the start, our target float b is:%f\n", b);
    printf("At the start, our target double y is:%f\n", y);

    // If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
    for (int i = 0; i < numOfLoops; i++) {
        b += a;
        y += x;
    }

    printf("At the end, our target float b is:%f\n", b);
    printf("At the end, our target double y is:%f\n", y);

}

// fixed

# include <stdio.h>

int main() {

    // Modify this variable value, start low and increase until something odd appears in the results
    /* In this example much of the code is already in place, don’t worry at this point if you can’t follow everything that
    is going on yet, you will learn about loops in a later lesson. For now, you will want to experiment with numOfLoops and
    keep increasing its value until something unusual happens with the output, specifically the float value.

    In general, the program takes a double and a float and adds 0.1 to each over and over again numOfLoops times.So if you
    set it to 10, that means it’s adding 0.1 ten times, or 0.1 x 10 so the output would be 1.0.float and double both give
    you this value, but keep making numOfLoops higher and a float will start to give unexpected results, showing their
    lower precision and rounding issues.*/

    int numOfLoops = 39;

    // Please do not modify anything below this point
    float a = 0.1f;
    float b = 0;
    double x = 0.1;
    double y = 0;

    printf("At the start, our target float b is:%f\n", b);
    printf("At the start, our target double y is:%f\n", y);

    // If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
    for (int i = 0; i < numOfLoops; i++) {
    b += a;
    y += x;
    }

    printf("At the end, our target float b is:%f\n", b);
    printf("At the end, our target double y is:%f\n", y);

}

