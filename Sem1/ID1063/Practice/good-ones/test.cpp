#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
	std::vector<int> v = {1, 2, 2, 2, 1};
	std::unordered_map<int, int> freq;

	for(int i = 0; i < v.size(); i++)
	{
		freq[v[i]]++;
	}

	for(auto x : freq)
	{
		std::cout << x.first << " : " << x.second << "\n";
	}

	return 0;
}
