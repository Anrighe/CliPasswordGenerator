#include <iostream>

#include "password_generator.hpp"

/** Generates a random password of a given length if provided, otherwise uses the default length (15) */
int main (int argc, const char *argv[]) {

	// Argument parsing
	constexpr short OPTIONAL_PASSWORD_LENGTH_ARGUMENT_POSITION = 1;
	constexpr short DEFAULT_PASSWORD_LENGTH = 16;

	unsigned short passwordLength;
	if (argc == 2) {
		passwordLength = std::atoi(argv[OPTIONAL_PASSWORD_LENGTH_ARGUMENT_POSITION]);
		if (passwordLength < 1) {
			std::cerr<<"Error: password length must be greater than 0\n";
			return 1;
		}
	} else
		passwordLength = DEFAULT_PASSWORD_LENGTH;

	// Password generation
	std::cout<<generatePassword(passwordLength)<<"\n";
	return 0;
}
