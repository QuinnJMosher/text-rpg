#include <iostream>

#ifndef _Game_h_
#define _Game_h_

class Game {
public:
	Game();
	~Game();

	int Run();

private:
	//Player player;
	//Vector<Enemy> enemies
	//Grid grid

	void Initalize();
	void TakeCommand();
	void showScreem();
};

#endif