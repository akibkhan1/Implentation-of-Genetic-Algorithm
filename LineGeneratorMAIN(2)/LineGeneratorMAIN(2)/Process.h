#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Process
{
public:
	string TARGET;
	void set_Target(string s);
	int random_num(int start, int end);
	char mutated_genes();
	string create_gnome();
};
