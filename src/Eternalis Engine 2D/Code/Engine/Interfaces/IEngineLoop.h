#pragma once

class IEngineLoop {
protected:
	virtual void Update()	= 0;
	virtual void ShutDown() = 0;
};