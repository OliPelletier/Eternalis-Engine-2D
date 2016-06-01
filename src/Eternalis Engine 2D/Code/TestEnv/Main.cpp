#pragma once
#include <iostream>
#include "..\DevHelper\DevHelper.h"
#include "..\Engine\Core\Engine.h"

int main()
{
	GEngine->StartUp();
	GEngine->StartLoop();

	system("pause");
}