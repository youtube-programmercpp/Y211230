#include <iostream>
#include <sstream>
int main()
{
	std::string s;
	if (std::getline(std::cin, s)) {
		int a, b;
		if (std::istringstream(s) >> a >> b) {
			std::cout << a - b << '\n';
		}
	}
}
