#include "Game.h"
#include "KatamariGame.h"


int WINAPI main(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	KatamariGame* game;
	bool result;


	// Create the system object.
	game = new KatamariGame;
	if (!game)
	{
		return 0;
	}

	// Initialize and run the system object.
	result = game->Initialize();
	if (result)
	{
		game->Run();
	}

	// Shutdown and release the system object.
	game->Shutdown();
	delete game;
	game = 0;

	return 0;
}