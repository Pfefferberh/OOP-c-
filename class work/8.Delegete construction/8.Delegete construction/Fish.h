#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Fish
{
	static int ocean[10][10];
	static int fish_count;
	int x;
	int y;
	int health;

public:
	Fish();
	 void Show_ocean();
	 void Move_fish();


	~Fish();
};
