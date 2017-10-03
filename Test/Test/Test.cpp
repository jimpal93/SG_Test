// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

struct people
{
		string Name;	 //Person Name
		int Birth_Year;  //Person's Birth Year
		int End_Year;    //Person's End Year		

};

void main()
{

	people p[8];
	p[0] = { "Harry Potter",1901,1978 }; // Person 1
	p[1] = { "Rick",1912,1990 };		 // Person 2
	p[2] = { "Morty",1950,1999 };		 // Person 3
	p[3] = { "Mr_Hotpot",1920,1935 };	 // Person 4
	p[4] = { "Goku",1930,1992 };		 // Person 5
	p[5] = { "Vegeta",1970,2000 };		 // Person 6
	p[6] = { "Summer",1927,1960 };		 // Person 7
	p[7] = { " Buu",1910,1930 };		 // Person 8
	int counter[101] = { 0 };  //to check how many people alive.
	int years[101] = { 0 };	// years from 1900 -2000
	int curr_maxpopulation = 0 ;
	list<people> My_People;
	My_People.push_back(p[0]);
	My_People.push_back(p[1]);
	My_People.push_back(p[2]);
	My_People.push_back(p[3]);
	My_People.push_back(p[4]);
	My_People.push_back(p[5]);
	My_People.push_back(p[6]);
	My_People.push_back(p[7]);
	
	for (int i = 0; i < My_People.size(); i++)                // loops for every person in the list
	{
		for (int j = p[i].Birth_Year; j <= p[i].End_Year; j++)  // loops for every persons lifetime
			{

				counter[j - 1900]++;
			}
	}
	for (int i = 0; i < 101; i++)								// loops for every year
	{
		
	
			if(curr_maxpopulation < counter[i])
			{
				curr_maxpopulation = counter[i];				//stores the current population that year
				
			}
	

	}
	int max_maxpopulation = curr_maxpopulation;												//stores the max population
	cout << "The highest population during a time period is	" << curr_maxpopulation<<"\n";
	cout << "The year where the population is the highest is"<<"	";

	for (int i = 0; i < 101; i++)
	{
		
		if (max_maxpopulation == counter[i])												//checks to see what if the population is max that year.
		{
			years[i] = 1900 + i;
			
			cout << years[i];																//prints out the years the population is the highest.
			cout << "	";
		}
		
	}
	getchar();
	}


