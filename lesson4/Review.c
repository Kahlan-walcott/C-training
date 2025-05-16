/*
Congratulations on completing the lesson on conditionals! 🙌

Let’s review some of the major concepts from the lesson:

An if statement checks a condition and will execute a task if that condition evaluates to true.
if / else statements make binary decisions and execute different code blocks based on a provided condition.
We can add more conditions using else if statements.
Relational operators, including <, >, <=, >=, ==, and != can compare two values.
Logical operators, including &&, ||, and ! can allow multiple conditions in one conditional statement.
A switch statement can be used to simplify the process of writing multiple else if statements. The break keyword stops
the remaining cases from being checked and executed in a switch statement.
A ternary operator can be used to simplify the process of an if else statement.
*/



/* Optional: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.c program that helps him keep track of his target weight by: It should ask him what his earth weight is. Ask him to enter a number for the planet he wants to fight on. It should then compute his weight on the destination planet.

Compile and execute:

gcc space.c
./a.out

Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19
*/

// ways to do this

/*To compute his weight on the planet he is fighting on, multiply his earth weight and the relative gravity of that planet.
Try using both if, else if , else and a switch statement!
One possible answer: */

# include <stdio.h>

int main() {

    double weight;
    int x;

    printf("Please enter your current earth weight: ");
    scanf("%lf", & weight);

    printf("\nI have information for the following planets:\n\n");
    printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
    printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

    printf("Which planet are you visiting? ");
    scanf("%d", & x);

    if (x == 1) {
        weight = weight * 0.38;
    } else if (x == 2) {
        weight = weight * 0.91;
    } else if (x == 3) {
        weight = weight * 0.38;
    } else if (x == 4) {
        weight = weight * 2.34;
    } else if (x == 5) {
        weight = weight * 1.06;
    } else if (x == 6) {
        weight = weight * 0.92;
    } else if (x == 7) {
        weight = weight * 1.19;
    }
    printf("\nYour weight: %lf\n", weight);
}


