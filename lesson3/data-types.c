/*
What about that first part of our template type (from type variable_name)? We saw some examples in the previous exercise
when you corrected the bad variable names, but let’s talk about what they are.

The type of a variable denotes what kind of information can be stored in it. C has a good number of types you can use,
but in this lesson, we will go over some of the most common ones: int, float, double, and char.

In C, you must specify the type of the variable when you declare it. Once it is set, that type of information is the
only type that can go into that variable. So if you create a variable of type int, which can only store whole numbers,
you will not be able to store "a" nor 1.2 in it. The table below details these types we are going over and what
information can go into each.

Type	Description	Values
int	a whole number	-2,147,483,648 to 2,147,483,647
float	a number with possible decimals	6 decimal places
double	a number with possible decimals	15 decimal places
char	stores one character (letter or number)	a single character

There are a few questions you might be asking yourself looking at these descriptions. What’s the difference between a
float and a double? We are going to look at this in the next exercise. char holds a single letter or number, but what
if you want to store something like a person’s name, that is more than one character (in most cases)? That gets a bit
more technical and you will learn about how that works in the lesson on strings later in the course!
*/

# include <stdio.h>

int main() {

    // Fix the missing data types
    // The code in the editor is ready to display basic information about an imaginary student. The problem is the
    programmer forgot to declare the data types for each variable at the top of the program, so it will fail with errors.
    //Go in and add appropriate data types to each variable so when you run the application the program completes and
    student information is displayed.
    studentRank;
    studentFeeTotal;
    studentGradeLetter;
    
    // No need to make any changes below here, use these as a hint to how each variable above should be declared
    studentRank = 1;
    studentFeeTotal = 100.56;
    studentGradeLetter = 'A';
    
    printf("Student's Rank in class: %dst\n", studentRank);
    printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
    printf("Student's Grade: %c\n", studentGradeLetter);
}

// fixed code


# include <stdio.h>

int main() {

    // Fix the missing data types
    
    int studentRank;
    float studentFeeTotal;
    char studentGradeLetter;
    
    // No need to make any changes below here, use these as a hint to how each variable above should be declared
    studentRank = 1;
    studentFeeTotal = 100.56;
    studentGradeLetter = 'A';
    
    printf("Student's Rank in class: %dst\n", studentRank);
    printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
    printf("Student's Grade: %c\n", studentGradeLetter);
}

