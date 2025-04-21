/**
 * Iterates over a c-style string and returns its length.
 * @param str The c-style string to measure
 * @return The length of the string
 */
constexpr short constexprStrlen(const char* str) {
	short len = 0;
	while (str[len] != '\0') 
        ++len;

	return len;
}