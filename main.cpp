#include <iostream>
using namespace std;

int addFive(int number){
  number += 5;
  return number;
}

void addFiveToArray(int numArray[], int size){
  for(int i = 0; i < size; i++){
    numArray[i] += 5;
  }
}

int main(){
  int x = 0;
  addFive(x); // pass by value
  cout << endl << "x is equal to: " << x << endl;
  
  int xArray[5] = {0, 5, 7, 9, 11};
  addFiveToArray(xArray, 5);
  
  for(int i = 0; i < 5; i++){
    cout << endl << xArray[i];
  }

  return 0;
}
