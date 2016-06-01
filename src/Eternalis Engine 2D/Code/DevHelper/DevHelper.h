#pragma once
// ====================================================================
// Functions and Whatnot to save time during testing and development
// ====================================================================
#pragma region INCLUDES

#include <iostream>
#include <fstream>
#include <Windows.h>

#pragma endregion

#pragma region MACROS

#define ConsolePrint(p_message) std::cout << p_message << std::endl; // Write to console shortcut
#define ForI(x) for (int i = 0; i < x; ++i)	// More compact form of for loop

//#define DebugLog(p_dbgMessage)	{
//	std::ofstream logFile("DebugLog.txt", std::ios_base::out | std::ios_base::app);			\
//	logFile << p_dbgMessage << std::end;													\
//}																							

// Cause a breakpoint when condition fails, while also outputing an error message to both the console and the debug output window
#define AssertWithMessage(p_condition, p_message) {				\
	if (!p_condition) {											\
		ConsolePrint(p_message);								\
		OutputDebugString(p_message);							\
		__debugbreak();											\
	}															\
}																											
#pragma endregion 											
															
															
															 