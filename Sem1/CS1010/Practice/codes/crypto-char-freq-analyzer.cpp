/*
 Assignment: Character Frequency Analyzer Objective: Implement a C/C++ tool to perform character frequency analysis on an arbitrary text corpus. Read an unparsed text ﬁle (e.g., raw text extracted from Wikipedia) and count the occurrences of each letter (A—Z) and compute its relative frequency percentage: Count(c) f (c) = Total Alphabetic Characters × 100% Note that you have to handle both the uppercase and lowercase characters before tabulating. Inspect the standard ASCII table using the terminal command and pay close attention to character codes for upper (‘A‘ = 65, ‘Z‘ = 90) and lower (‘a‘ = 97, ‘z‘ = 122) ranges.
*/

#include <iostream>
#include <fstream>
#include <map>

int main()
{
	std::ifstream file("raw_text.txt");

	if(!file.is_open())
	{
		std::cout << "Error\n";
		return 1;
	}

	std::map<char, int> freq_table;
	int total = 0;

	char ch;
	while(file.get(ch))
	{
		if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			if(ch >= 97 && ch <= 122) ch -= 32; 
			freq_table[ch]++;
			total++;
		}
	}

	std::map<char, float> freq_dist;
	for(auto c : freq_table)
	{
		float f = (float)c.second/total * 100;

		freq_dist[c.first] = f;
	}

	for(auto x : freq_dist)
	{
		std::cout << x.first << ":" << x.second << "\n";
	}

	file.close();

	return 0;
}
