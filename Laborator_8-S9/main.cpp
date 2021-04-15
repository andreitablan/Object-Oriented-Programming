#include <fstream>
#include <string>
#include <map>
#include <queue>
using namespace std;

class Compare {
public:
	bool operator() (pair<string, int> p1, pair<string, int> p2) 
	{
		if (p1.second < p2.second)
			return true;
		if (p1.second > p2.second)
			return false;
		if (p1.first < p2.first)
			return false;
		return true;
	}
};


int main()
{	
	string text;
	ifstream file("input.txt");
	if (!file)
	{
		printf("eroare la deschiderea fisierului: input.txt");
		return 0;
	}
	//citim prima linie din fisier
	if (!getline(file, text)) 
	{
		printf("error la citirea din fisier: input.txt");
		return 0;
	}

	map<string, int> myMap;
	printf("Sirul de caractere citit este: %s\n", text.c_str());

	string cuvinte;
	int j = 0;
	for (int i = 0; i < text.size(); i++)
	{
		int k = 0;
		if (cuvinte != "")
		{
			j++;
			myMap[cuvinte]++;

		}
		cuvinte = "";
		while (text[i] != ' ' && text[i] != ',' && text[i] != '?' && text[i] != '!' && text[i] != '.' && i < text.size())
		{	
			if (text[i] >= 'A' && text[i] <= 'Z')
			{ 
				text[i] += 32;
				cuvinte += text[i] ;
			}
			else
			{
				cuvinte += text[i];
			}
			
			i++; 
		}

	}

	if (cuvinte != "")
		myMap[cuvinte]++;


	printf("Am separat cu succes cuvintele din textul dat\n");

	for(auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++)
		printf(" %s : %d \n", mapIterator->first.c_str(), mapIterator->second);

	priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> myQueue;
	
	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) 
	{
		myQueue.push(pair<string, int>(mapIterator->first, mapIterator->second));
	}
	
	printf("\n\n Cuvintele Sortate: \n");
	//Golim coada
	while (!myQueue.empty())
	{
		printf("%s => %d\n", myQueue.top().first.c_str(), myQueue.top().second);
		myQueue.pop();
	}
	
	system("pause");
	return 0;
}
