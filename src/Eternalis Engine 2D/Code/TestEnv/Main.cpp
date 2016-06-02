#pragma once
#include <iostream>
#include "..\DevHelper\DevHelper.h"
#include "..\Engine\Core\Engine.h"

int main()
{
	ConsolePrint("Test ", 5, " Test2");
	GEngine->StartUp();
	GEngine->StartLoop();
	system("pause");
}