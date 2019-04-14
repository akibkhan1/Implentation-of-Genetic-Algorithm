#include "Process.h"
#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
bool operator<(const Individual& ind1, const Individual& ind2)
{
    return ind1.fitness < ind2.fitness;
}
int main()
{
    string TARGET="LINE GENERATOR";
    Process ob1[100];
    int POPULATION_SIZE = 100;
    int generation = 1;

    vector<Individual> population;
    for (int i = 0; i < POPULATION_SIZE; i++)
    {
        string gnom = ob1[i].create_gnome();
        population.push_back(Individual(gnom));
    }
}

