#include "Engine.h"

extern Engine* g_Engine = nullptr;

// Initialized an instance of 'Engine'
void Engine::StartUp() {
	AssertWithMessage(!g_Engine, "Only one instance of the 'Engine' class may exist at any given time.\n"); // Cause a breakpoint if StartUp is called a 2nd time
	g_Engine = new Engine();
}


// Begin the Engine Loop
void Engine::StartLoop() {
	AssertWithMessage(g_Engine, "Trying to start the Engine Loop before the initialization of the Engine. Use [StartUp()] to initialize.\n"); // Cause a breakpoint if called before the creation of the engine 
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
