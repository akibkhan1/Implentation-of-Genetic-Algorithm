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
    while (1)
    {

        sort(population.begin(), population.end());
        if (population[0].fitness <= 0)
        {
            break;
        }

        vector<Individual> new_generation;

        int s = (10 * POPULATION_SIZE) / 100;
        for (int i = 0; i < s; i++)
            new_generation.push_back(population[i]);
        s = (90 * POPULATION_SIZE) / 100;
        for (int i = 0; i < s; i++)
        {
            int len = population.size();
            int r = ob1[i].random_num(0, 50);
            Individual parent1 = population[r];
            r = ob1[i].random_num(0, 50);
            Individual parent2 = population[r];
            Individual offspring = parent1.mate(parent2);
            new_generation.push_back(offspring);
        }
        population = new_generation;
        cout << "Generation: " << generation << "\n";
        cout << "String: " << population[0].chromosome << "\n";
        cout << "Fitness: " << population[0].fitness << "\n\n";

        generation++;
    }
}

