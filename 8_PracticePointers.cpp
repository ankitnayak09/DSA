#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int *p;
  // p = (int *) malloc(5 * sizeof(int));  // In C
  p = new int[5];
  p[0]=10; p[1]=15; p[2]=20; p[3]=30;
  for (int i = 0; i < 5; i++)
    cout << p[i] <<endl;
  
  delete [] p; //must delete the memory from heap before the end of the program
  // free(p); => Used in C
  return 0;
}