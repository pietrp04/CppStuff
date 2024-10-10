
#ifndef BIT
#define BIT

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdint.h>
#include <iomanip>

class bit 
{
	public:
	bit(uint32_t num, uint8_t bit);
	bit(float numf, uint8_t bit);
	
	 	
 	uint32_t mult_by_pow_2() {return m_num<<m_bit;}
        bool is_set() {return m_num & (1 << m_bit);}
 	uint32_t flip_bit() {return m_num ^ (1 << m_bit);}
 	uint32_t make1() {return m_num | (1 << m_bit);}
 	uint32_t make0() {return m_num & ~(1 << m_bit);}
 	uint8_t getbit() {return m_bit;}
 	void setbit(uint8_t bit);
 	uint32_t getnum() {return m_num;}
 	void setnum(uint32_t num);
 	void fdtbint(uint32_t num);
 	void fdtbfloat(float numf);
 	
 	
 	
 	friend std::ostream& operator<<(std::ostream &o, bit b);
 	
 	
 	
 	protected:
 	uint32_t m_num;
 	uint8_t m_bit;
 	float m_numf;
};

std::ostream& operator<<(std::ostream &o, bit b)
{
  o << b.m_num << b.m_bit;
   
  return o;  
}

bit::bit(float numf, uint8_t bit)
{
	m_numf = numf;
	m_bit = bit;
}

void bit::fdtbint(uint32_t num) {
  m_num = num;
  for(int i = 31; 0 <= i ; i-- ) {
     bool a = (num) & (1 << i);
     std::cout << a; //std::cout << static_cast<uint32_t>(num) & (1 << i); errore dato: std::basic_ostream<char>::__ostream_type {aka std::basic_ostream<char>} per num
   } 
  std::cout << "\n";
}

void bit::setbit(uint8_t bit) {
m_bit = bit;
}


bit::bit(uint32_t num, uint8_t bit)
{
	m_num = num;
	m_bit = bit;
}

void bit::setnum(uint32_t num) {
m_num = num;
}

void bit::fdtbfloat(float numf) {
m_numf = numf;
unsigned int *m = reinterpret_cast<unsigned int *>(&numf);
  for(int i= sizeof(numf)*8 -1; i >= 0; i--) {
    int b = (*m>>i) & 1;
    std::cout << b;
  }
}

#endif
