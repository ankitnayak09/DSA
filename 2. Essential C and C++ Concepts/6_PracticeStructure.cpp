#include<iostream>
using namespace std;


struct Rectangle {
  int length;
  int breadth;
  char x; // * takes up 4 bytes(size of nearest data type) but uses only 1 byte => Known as Padding
};

int main(){
  struct Rectangle r1={10,5};

  r1.length = 15;
  r1.breadth = 7; // * Dot (.) Operator is used to Access the Member of the Rectangle Data Type

  // cout << sizeof(r1); // ? 12
  cout << r1.length << endl;
  cout << r1.breadth << endl;
  return 0;
}