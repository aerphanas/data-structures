#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size_mem = 1; // size of mem
  int* p;

  p = (int*) calloc(size_mem,sizeof(int));
  *p = 1; // add integer to heap

  // add another integer to heap
  size_mem++; // set new size mem
  p = (int*) realloc(p, size_mem * sizeof(int)); // change heap size
  *(p+1) = 2; // add new integer to heap memory

  // add another integer to heap
  size_mem++; // set new size mem
  p = (int*) realloc(p, size_mem * sizeof(int)); // change heap size
  *(p+2) = 3; // add new integer to heap memory

  // add another integer to heap
  size_mem++; // set new size mem
  p = (int*) realloc(p, size_mem * sizeof(int)); // change heap size
  *(p+3) = 4; // add new integer to heap memory

  // add another integer to heap
  size_mem++; // set new size mem
  p = (int*) realloc(p, size_mem * sizeof(int)); // change heap size
  *(p+4) = 5; // add new integer to heap memory

  // add another integer to heap
  size_mem++; // set new size mem
  p = (int*) realloc(p, size_mem * sizeof(int)); // change heap size
  *(p+5) = 6; // add new integer to heap memory

  // add another integer to heap
  size_mem++; // set new size mem
  p = (int*) realloc(p, size_mem * sizeof(int)); // change heap size
  *(p+6) = 7; // add new integer to heap memory

  // print current memory size
  printf("Heap Memsize : %d \n", size_mem);

  // print all member inside list heap
  printf("Member       : ");
  for (size_t i = 0; i < size_mem; i++)
    printf("%d ", *(p+i));
  printf("\n");

  free(p); // free heap memory
  return 0;
}
