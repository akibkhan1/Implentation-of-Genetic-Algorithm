#include "Individual.h"
#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include "Process.h"
using namespace std;
Individual::Individual(string chromosome)
{
	this->chromosome = chromosome;
	fitness = cal_fitness();
};
