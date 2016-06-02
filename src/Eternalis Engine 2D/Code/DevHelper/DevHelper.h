#pragma once
// ====================================================================
// Functions and Whatnot to save time during testing and development
// ====================================================================

#include <iostream>
#include <fstream>


#pragma region MACROS

#define ForI(x) for (int i = 0; i < x; ++i)	// More compact form of for loop
#define CurrentFileLine "\nFile: ", __FILE__, "\nLine: ", __LINE__ // Shortcut to get a string of the current file and line (configured for ConsolePrint)		
																																												
#pragma endregion 


#pragma region FUNCTIONS

#ifndef DEVHELPER_FUNCTIONS
#define DEVHELPER_FUNCTIONS

// Print a given text
template<typename Text>
static void ConsolePrint(Text p_txt) {
	std::cout << p_txt;
	std::cout << std::endl;
}

// Print a variable number of text
template<typename Text, typename... TextOverflow>
static void ConsolePrint(Text p_txt, TextOverflow... p_overflow) {
	std::cout << p_txt;
	ConsolePrint(std::forward<TextOverflow>(p_overflow)...);
}

// Verify a given condition, if failed, print an error message to the console and abort the program
template<typename... Text>
static void AssertWithMessage(bool p_condition, Text... p_overflow) {
	if (!p_condition) {
		ConsolePrint("ASSERT FAILED: ", std::forward<Text>(p_overflow)...);
		abort();
	}
}

#endif

#pragma endregion											
															
															
															 