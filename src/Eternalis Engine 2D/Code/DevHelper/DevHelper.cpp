#include "DevHelper.h"
#include <stdlib.h>

// Print a given string in the console -- UNSAFE VERSION
// [!] Must have a ' "" ' as the last argument, otherwise you'll get an infinite loop.
// Use "ConsolePrint" defined macro for a safer use.
void FncConsolePrint(char* p_string, ...) {
	std::cout << p_string << " ";
}
