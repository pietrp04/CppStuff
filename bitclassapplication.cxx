#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdint.h>
#include <iomanip>
#include "bitclass.h"

int main(int argc, char* argv[]) {
	
	uint32_t num = 42;
	uint8_t n = 2;
	bit a(num, n);
	bool x = a.is_set();
	std::cout << x << std::endl;
	
	std::cout << +n << std::endl; //ricorda che per stampare l'8 bit ci vuole il +
	a.setbit(1);
	std::cout << +n << std::endl;
	
	a.fdtbint(num);
	
	return 0;
}

