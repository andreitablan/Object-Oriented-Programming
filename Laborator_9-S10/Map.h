
#include <iostream>

template <typename K, typename V>
class Map {
	struct Element {
		K key;
		V value;
		int index;
	} *vector;

	
	int index;
	
	int size;	

};
