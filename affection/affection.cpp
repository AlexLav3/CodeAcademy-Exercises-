#include <iostream>
#include "profile.hpp"

int main() {

	Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
	sam.add_hobby("listening to audiobooks and podcasts");
	std::cout << sam.view_profile();

}