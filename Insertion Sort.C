/*Rushikesh Powar
this program is for insertion */
#include <stdio.h>
#include <stdbool.h>

#define MAX 5

int intArray[MAX];

void printline(int count) {
   int i;

   for(i = 0;i < count-1;i++) {
      printf("=");
   }

   printf("=\n");
}

void display() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0;i < MAX;i++) {
      printf("%d ",intArray[i]);
   }

   printf("]\n");
}

void insertionSort() {

   int value;
   int Position;
   int i;

   // loop through all numbers
   for(i = 1; i < MAX; i++) {

      // select a value to be inserted.
      value = intArray[i];

      // select the  position where number is to be inserted
      Position = i;

      // check if previous no. is larger than value to be inserted
      while (Position > 0 && intArray[Position-1] > value) {
         intArray[Position] = intArray[Position-1];
         Position--;
         printf(" item moved : %d\n" , intArray[Position]);
      }

      if(Position != i) {
         printf(" item inserted : %d, at position : %d\n" , value,Position);
         // insert the number at  position
         intArray[Position] = value;
      }

      printf("Iteration %d#:",i);
      display();

   }
}

int main() {
   printf("Input Array: ");
   for(int i=0;i<5;i++)
    scanf("%d",&intArray[i]);

   display();
   printline(50);
   insertionSort();
   printf("Output Array: ");
   display();
   printline(50);
}
