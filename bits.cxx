#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdint.h>
#include <iomanip>


using namespace std;
void FromDecimalToBinaryFloat(float fnum) {
  unsigned int *m = reinterpret_cast<unsigned int *>(&fnum);
  for(int i= sizeof(fnum)*8 -1; i >= 0; i--) {
    int b = (*m>>i) & 1;
    std::cout << b;
  }
}

uint32_t mult_by_pow_2(uint32_t num, uint8_t n) {
  return num<<n;
}

bool is_set(uint32_t num, uint8_t n) {
  return num & (1 << n);
} //checks if the n-th bit is set

void FromDecimalToBinary(uint32_t num) {
  for(int i = 31; 0 <= i ; i-- ) {
     std::cout << is_set(num, i);
   } 
  std::cout << "\n";
}

uint32_t flip_bit(uint32_t num, uint8_t n) {
  return num ^ (1 << n);
}


uint32_t setBit(uint32_t num, uint8_t n) {
  return num | (1 << n);
}

uint32_t clearBit(uint32_t num, uint8_t n) {
  return num & ~(1 << n);
}

int main(int argc, char* argv[])
{
  uint32_t num = 8;
  uint8_t n = 2;
  uint32_t X = mult_by_pow_2(num, n);
  std::cout << +X << std::endl;


  //uint32_t convert = atoi(argv[1]);
  //std::cout << convert << std::endl;

  //for(int i = 31; 0 <= i ; i-- ) {
  //std::cout << is_set(convert, i);

  
  std::cout << "\n";

  uint32_t prova = 42;
  FromDecimalToBinary(42);
  
  float prova1 = 0.3;
  FromDecimalToBinaryFloat(prova1);
  






  return 0;


}       

