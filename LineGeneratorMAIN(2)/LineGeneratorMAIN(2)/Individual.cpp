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
Individual Individual::mate(Individual par2)
{
	Process ob;
	string child_chromosome = "";

	int len = chromosome.size();
	for (int i = 0; i < len; i++)
	{
		float p = ob.random_num(0, 100) / 100;

		if (p < 0.35)
			child_chromosome += chromosome[i];

		else if (p < 0.85)
			child_chromosome += par2.chromosome[i];

		else
			child_chromosome += ob.mutated_genes();
	}
	return Individual(child_chromosome);
};
