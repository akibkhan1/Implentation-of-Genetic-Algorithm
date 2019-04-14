#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Individual
{
public:
	string TARGET;
	string chromosome;
	int fitness;
	Individual(string chromosome);
	Individual mate(Individual parent2);
	int cal_fitness();
};

