#include <iostream>
#include <vector>

int main() {
	
	int base10 = 0;
	std::vector<char> vec;
	std::cout << "Enter a string of hex\n";
	std::cout << "Enter a 0 when string is complete\n";
	while(std::cin >> std::hex >> base10) {
		if(base10 == 0) {break;}
		char ascii = base10;
		vec.push_back(ascii);
	}
	for(auto x : vec) {
		std::cout << x;
	}

return 0;
}
