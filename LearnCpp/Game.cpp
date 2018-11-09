#include "Game.h"

Game::Game()
	: place(1), name("None"), points(0)
{
	log("Constructed");
}

Game::~Game()
{
	log("Deconstructed");
}

void Game::newPlayer()
{
	std::cout << "Enter your name: ";
	getline(std::cin, this->name);


}

void Game::printScore()
{
	std::cout << "#" << place << "\t" << name << "\t" << points << "\n";
}

void Game::save()
{
	std::ofstream oFile(fileName);
	if (oFile.is_open())
	{
		oFile << place << "\n" << name << "\n" << points << "\n";
	}

	oFile.close();
}

void Game::load()
{
	std::ifstream inFile(fileName);
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			inFile >> place;
			inFile.ignore();
			getline(inFile, name);
			inFile >> points;
		}
	}
	else
	{
		std::cout << "No file named " << fileName << " found\n";
	}
	inFile.close();
}
