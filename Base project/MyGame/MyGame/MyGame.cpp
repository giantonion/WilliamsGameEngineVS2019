#pragma once
#include <set>
#include <string>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Engine/GameEngine.h"
#include "GameScene.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

const std::string WINDOW_TITLE = "Space Shooter";

int main()
{
	srand((int)time(NULL));

	GAME.initialize(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

	GameScenePtr scene = std::make_shared<GameScene>();
	GAME.setScene(scene);

	GAME.run();

	return 0;
}
