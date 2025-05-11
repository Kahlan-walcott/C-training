/*
Sometimes it’s useful, or even necessary, to change the value type of a variable and use it for other purposes. For
instance, if you had a double with a percent score on a test, say 0.95, you would most likely want to display 95% to the
user instead. Notice, we are not changing the type of the variable, nor the value stored in the source variable. What we
are doing is displaying the changed variable as a new type or storing it in a different variable that might be a
different type.

So you could do this:

int a;
double b = 3.0;
a = b;

There are two types of conversions, implicit and explicit. When you set one variable to be the same as another, such as
a = b above, but their types do not match, the compiler will try to convert them. However, this can be dangerous as you
might not know what values will be in the variable at runtime, and it might not be implicitly convertible to another
type. Our example above was implicit, the compiler in this case will make a best guess.

The other way to convert a variable from another type is explicitly. You can do this by simply telling the compiler what
type you want to set it to. So in our example above we could change the line a = b to a = (int)b. That way if b was
something other than 3.0, such as 3.2, we are telling the compiler to make it work, so it would set it to 3.
*/

# include <stdio.h>

int main() {

    double testScore = 95.7;
    int displayScore = 0;

    // No need to change below here
    printf("Great work, you got a %d%% on your test\n", displayScore);

}


// fixed


# include <stdio.h>

int main() {

    double testScore = 95.7;
    int displayScore = 0;
    /* Let’s take our example above where we want to take the percent score as a double and convert it to an int for display.Set the displayScore to be testScore.(displayScore = testScore;).*/
    /* Now try doing the conversion explicitly by adding on the (int) to your setting of displayScore = testScore; */

    displayScore = (int) testScore;

    // No need to change below here
    printf("Great work, you got a %d%% on your test\n", displayScore);

}

