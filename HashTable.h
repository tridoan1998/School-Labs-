#include <iostream>
#include <ostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include <assert.h>

#include "HashTable.h"

using namespace std;

int HashTable::Counter = 0;
vector<string> HashTable::wordBank;


/************************Access Functions*****************/
int HashTable::hash(string key) const {
	int sum = 0;
	for (unsigned int i = 0; i < key.length(); i++)
		sum += (int) key[i];
	return (sum % SIZE);
}
int HashTable::countBucket(int index) const {
	assert((0 <= index) && (index < SIZE));
	return bstTable[index].getSize();
}

int HashTable::VECsearch(string word) const {
	vector<string>::iterator Iterator;
	//int i = 0;
	int index = -1;
	for (unsigned int i = 0; i < wordBank.size(); i++) {
		if (wordBank[i] == word)
			index = i;
	}
	return index;
}

//search array for word
//returns -1 if b is not in the table

/*int HashTable::search(Recipe r) const // FIXXX++++++++++++++++++++++
 {
 string key = r.get_Name()+r.get_Category()+r.get_Flavor();
 if (Table1[hash(key)].isEmpty()){
 cout << "empty\n";
 return -1;
 }
 else if(Table1[hash(key)].search(r))
 return hash(key);
 else{
 cout << "NOT FOUND\n";
 return -1;
 }
 }*/
//Prints all the books at index according to inOrderPrint
//pre: 0<= index < SIZE
//Should print according to the following formula:
//Prints each book at that index in the format:
//<title> by <author>
//$<X.XX>
//ISBN#: <isbn>
//followed by a blank line
void HashTable::printBucket(ostream& out, int index) const {
	assert((0 <= index) && (index < SIZE));
	bstTable[index].inOrderPrint(out);
}

//Prints the first book at each index
//along with a count of the total books
//at each index by calling count_bucket
//as a helper function
//Prints in the format:
//Books in the Catalogue:
//<new line>
//Group <bucket>
//<title> by <author>
//$<X.XX>
//ISBN: <isbn>
//+<number of elements at this index> -1 more similar book(s)
//<new line><new line><new line>
void HashTable::printTable(ostream& out) const {
	out << "Recipes in the Catalogue:\n" << endl;
	for (int i = 0; i < SIZE; i++) {
		if (!bstTable[i].isEmpty()) {
			out << "Group: " << i + 1;
			out << bstTable[i].getRoot();
			out << '+' << countBucket(i) - 1 << " or more similar recipe(s)\n"
					<< endl;
		}

	}
}

void HashTable::printTableID(ostream& out) const {
	out << "Word ID's in the Catalogue:\n" << endl;
	for (int i = 0; i < SIZE; i++) {
		if (!listTable[i].isEmpty()) {
			out << "Group: " << i + 1;
			listTable[i].print();
			out << '+' << countBucket(i) - 1 << " or more similar keyword(s)\n"
					<< endl;
		}
	}
}

/*********************Manipulation Procedures**************/
void HashTable::BSTinsert(Recipe r) {
	///need to call something to ensure the keyword array has key words
	vector<string>::iterator Iterator1;
	vector<string>::iterator Iterator2;
	unsigned int j;
	unsigned int k;
	//cout << "num of key words in recipe vector: " << r.get_keys().size()<< endl;
	for (j = 0; j < r.get_keys().size(); j++) {
		if (j < r.get_keys().size())
			for (k = 0; k < wordBank.size(); k++) {
				if (r.get_keys()[j] == wordBank[k]) {
					bstTable[k].insert(r);

				}

			}
	}

}

void HashTable::BSTremove(Recipe r) {
	vector<string>::iterator Iterator1;
	vector<string>::iterator Iterator2;
	unsigned int j;
	unsigned int k;
	//for (int i = 0; i < SIZE; i++){//goes through the hashBST index
	for (j = 0; j < r.get_keys().size(); j++) {
		for (k = 0; k < wordBank.size(); k++) {
			if (r.get_keys()[j] == wordBank[k])
				bstTable[k].remove(r);

		}
	}
}

int HashTable::IDsearch(wordID id) {
	string key = id.get_Word();
	int index = hash(key), found = -1;
	//if (listTable[index].linearSearch(id) > -1)
	listTable[index].pointIterator();
	for (int i = 1; i <= listTable[index].getSize(); i++) {
		if (id.get_Word() == listTable[index].getIterator().get_Word())
			found = listTable[index].getIndex();
		//cout << id.get_Word() << " == "
				//<< listTable[index].getIterator().get_Word() << endl;
		listTable[index].advanceIterator();
	}

	return found;
}

//inserts a new book into the table
//calls the hash function on the key to determine
//the correct bucket
void HashTable::IDinsert(wordID id) {
	string key = id.get_Word();
	int index = hash(key);
	if (IDsearch(id) == -1) {
		id.set_ID(Counter);
		listTable[index].insertStop(id);
		wordBank.push_back(id.get_Word());
		//wordBank[Counter]=id.get_Word();
		Counter++;
	}
	//else
	//cout << "Already in the table." << endl;

}

//removes b from the table
//calls the hash function on the key to determine
//the correct bucket
//pre: b is in the table
void HashTable::IDremove(wordID id) {
	string key = id.get_Word();
	int i = hash(key);
	assert(listTable[hash(key)].linearSearch(id));
	int index = listTable[i].linearSearch(id);
	listTable[i].advanceToIndex(index);
	listTable[i].removeIterator();
}



