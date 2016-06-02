#include "Engine.h"

#define IfNullEngine g_Engine == nullptr

extern Engine* g_Engine = nullptr;

// Initialized an instance of 'Engine'
void Engine::StartUp() {
	g_Engine = new Engine();
}


// Begin the Engine Loop
void Engine::StartLoop() {
	ConsolePrint("Engine Started!");
	/// Loop' variables (re)initialization
	m_isRunning = true;
	Run();
}

Engine::Engine()
	: m_isRunning(false)
	, m_renderer(nullptr)
{
	Init();
}


Engine::~Engine() {
	delete m_renderer;
	g_Engine = nullptr;
}

void Engine::Init() {
	m_renderer = new Renderer();
}

void Engine::Run() {
	// Engine Loop
	while (m_isRunning) {
		
		
		Update();

		m_renderer->Draw();

		// TODO : Stop condition (break the loop but doesn't destroy anything)
	}

	Stop();

}

void Engine::Update() {
	// TODO: Update all active component
	ConsolePrint("Engine Update");
}

void Engine::Stop() {
	// TODO : Gestion and option to either restart the loop and ShutDown the engine
}

void Engine::ShutDown() {
	// TODO : Destroy and clean everything
}
