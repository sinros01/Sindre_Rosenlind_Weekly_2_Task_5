#include <iostream>
#include <string>

int main() {
	int i = 5;
		for (int i = 5; i <= 50; i++) {
			if (i % 5 == 0) {
				std::cout << i << std::endl;
			}
		}
	return 0;
}