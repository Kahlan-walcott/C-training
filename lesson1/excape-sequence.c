/*
they are \n and \t. There are more but thoese were the only ones that were covered
*/
// code that will cause errors
#include <stdio.h>

int main() {
  // Simple Recipe
  printf("2 Cups: All Purpose Flour\n");
  printf("1 Cups: Unsalted Butter(Room Temperature)");
}

// fixed code

#include <stdio.h>

int main() {
  // Simple Recipe
  printf("\n");
  printf("2 Cups: All Purpose Flour\n");
  printf("1 Cups: Unsalted Butter\t(Room Temperature)");
  printf("\n2/3 Cups: Granulated Sugar");
}

