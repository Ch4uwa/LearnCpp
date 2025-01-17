// LearnCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#define log(x) std::cout << x << "\n";

class Game
{
public:
	Game() :place(1), name("None"), points(0) { log("Constructed"); };
	~Game() { log("Deconstructed"); };

	
	void newPlayer() 
	{
		std::cout << "Enter your name: ";
		getline(std::cin, this->name);



	};

	void printScore() 
	{
		std::cout << "#" << place << "\t" << name << "\t" << points << "\n";
	};
	
	void save() 
	{
		std::ofstream oFile(fileName);
		if (oFile.is_open())
		{
			oFile << place << "\n" << name << "\n" << points << "\n";
		}
		
		oFile.close();
	};

	void load()
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
	};

private:
	const char* fileName = "TopScore.txt";

	std::vector<std::string> vPlayer;
	std::vector<int> vPoints;
	std::vector<int> vPlace;

	std::string name;
	int points;
	int place;


};


int main()
{
	

    
	std::cin.get();
}