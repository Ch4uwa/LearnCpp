#pragma once
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


class Game
{
private:
	const char* fileName = "TopScore.txt";

	std::vector<std::string> vPlayer;
	std::vector<int> vPoints;
	std::vector<int> vPlace;

	std::string name;
	int points;
	int place;

public:
	Game();
	~Game();


	void newPlayer();
	void printScore();
	void save();
	void load();

};