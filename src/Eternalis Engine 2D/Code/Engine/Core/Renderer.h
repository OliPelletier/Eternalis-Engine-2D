#pragma once

#include "..\..\DevHelper\DevHelper.h"
#include "..\Interfaces\IEngineLoop.h"
#include "..\Interfaces\IDraw.h"

class Renderer : IDraw/*, IEngineLoop */ {
friend class Engine;

public:
	Renderer();
	~Renderer();

private:
	void Init();

protected:
	void Draw(); // (IDraw)

	/// Engine loop (IEngineLoop)
	//void Update();
	//void ShutDown();

};
