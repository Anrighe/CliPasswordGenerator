#include <string>
#include <random>

#include "string_utils.hpp"

/**
 * Generates a random password of a given length by using characters from the ascii charset.
 * The password is generated using a random number generator which uses a uniform distribution.
 * @param passwordLength The length of the password to generate
 * @return The generated password
 */
std::string generatePassword(short passwordLength) {
    // Charset and random number generation
	constexpr const char* AVAILABLE_CHARSET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"$%&/()=?^[]{}+*#@-_,.;:<>";
	unsigned short availableCharsetLength = constexprStrlen(AVAILABLE_CHARSET);

    std::random_device randomDevice;
	std::mt19937 generator(randomDevice());
	std::uniform_int_distribution<> distribution(0, availableCharsetLength - 1);
	
	// Password generation
	std::string generatedPassword;
	generatedPassword.reserve(passwordLength);

	for (unsigned short i = 0; i < passwordLength; ++i)
		generatedPassword += AVAILABLE_CHARSET[distribution(generator)];

    return generatedPassword;
}