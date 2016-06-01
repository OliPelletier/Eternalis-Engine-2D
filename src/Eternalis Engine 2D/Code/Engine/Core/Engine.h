#pragma once

#include "..\..\DevHelper\DevHelper.h"
#include "..\Interfaces\IEngineLoop.h"
#include "Renderer.h"

#pragma region MACROS
#define GEngine g_Engine			// For consistency with the other GEngine macros
#pragma endregion

#pragma region ENGINE CLASS
class Engine : IEngineLoop {

#pragma region FUNCTIONS
public:
	void StartUp();
	void StartLoop();

private:
	Engine();
	~Engine();
	void Init();
	void Run();
	void Stop();

protected:
	/// Engine loop (IEngineLoop)
	void Update();
	void ShutDown();
#pragma endregion

#pragma region VARIABLES
public:

private:
	Renderer* m_renderer;
	bool m_isRunning;
	
#pragma endregion



};
#pragma endregion

extern Engine* g_Engine;
