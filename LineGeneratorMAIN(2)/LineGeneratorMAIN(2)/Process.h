#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Process
{
public:
	string TARGET;
	int random_num(int start, int end);
	char mutated_genes();
	string create_gnome();
};
