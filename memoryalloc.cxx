#include <iostream>
#include <vector>
#include <string>

int main()
{
  int *ptr;
  ptr = new int;
  *ptr = 75;
  std::cout << *ptr << std::endl;
  delete ptr;

  int *ptr1;
  int *ptr2;
  int *ptr3;
  int  avrg;

  ptr1=new int;
  ptr2=new int;
  ptr3=new int;
  
  std::cout << "Enter three nums;" << std::endl;
  std::cin >> *ptr1 >> *ptr2 >> *ptr3;

  avrg = ( *ptr1 + *ptr2 + *ptr3 )/3;
  std::cout << "The average is " << avrg << std::endl;

  delete ptr1;
  delete ptr2;
  delete ptr3;
  
  //if we are using vectors here is how we use the new function
  int size;
  std::cout << "Enter the size of the vector" << std::endl;
  std::cin >> size;
  int *ptr4;
  ptr4 = new int[size];

  std::cout << "Enter the elements:" << std::endl;
  for(int i=0; i<size; i++) {
    std::cout << "Element " << i << std::endl;
    std::cin >> ptr4[i];
  }

  std::cout << "Elements you have entered: " << std::endl;
  for(int i=0; i<size; i++) {
    std::cout << ptr4[i] << std::endl;

  }
  
  delete[] ptr4;
  return 0;






}


//ricorda che la stack, la memoria fisica preallocata con la dichiarazione delle variabili in c++ è molto più veloce della heap che invece allocandi dinamicamente la memoria, non la prende in blocchi continui.
