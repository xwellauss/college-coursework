#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <vector>

float IoC(std::string s)
{
	std::map<char, int> freq_table; // For the encrypted text
	int N = 0;

	for(char ch : s)
	{
		if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			if(ch >= 97 && ch <= 122) ch -= 32; 
			freq_table[ch]++;
			N++;
		}
	}

	if (N <= 1) return 0.0f;

	float I = 0.0f;

	for(auto c : freq_table)
	{
		int n_i = c.second;
		I += n_i * (n_i - 1);
	}
	I /= (float)(N * (N-1));

	return I;
}

int main()
{
	std::ifstream file("ciphered.txt");

	if(!file.is_open())
	{
		std::cout << "Error\n";
		return 1;
	}

	std::string cipher_text((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	cipher_text.erase(std::remove(cipher_text.begin(), cipher_text.end(), ' '), cipher_text.end());

	// Step 1: Estimate the key length
	
	int L = 10; // Max key length;
	int l; // Estimated Key Length
	
	std::vector<float> key_ioc(L);
	for(int i = 1; i <= L; i++)
	{
		float avg_ioc = 0.0f;

		for(int j = 0; j < cipher_text.length()/i; j++)
		{
			std::string slice = cipher_text.substr(i*j, i);
			std::cout << slice << " ";

			avg_ioc += IoC(slice);
		}

		key_ioc[i-1] = avg_ioc / i;
	}

	for(auto x : key_ioc)
	{
		std::cout << x << "\n";
	}	

	file.close();

	return 0;
}
