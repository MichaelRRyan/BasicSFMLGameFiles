/// Basic Game
/// @Author Michael Rainsford Ryan
/// @Date 04/01/2019
/// Time: 13:00 - 13:17 - Setup the basic game files

/////////////////////////////////////////////////////////////////////////////////////////
/// Basic starter files written by Michael Rainsford Ryan with the intent for them to ///
/// be used by anyone creating a new SFML project. Anyone is free to use these files. ///
/////////////////////////////////////////////////////////////////////////////////////////

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif

#include "Game.h"

int main()
{
	Game game;
	game.run();

	return 0;
}
