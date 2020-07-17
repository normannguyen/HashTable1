#pragma once
#include <iostream>
#include <list>
#include <string>
#include <functional>

using namespace std;

template <typename T>
class HashTable
{
	//Store your values
	T* table;
	//Size of your table
	int buckets;

public:
	HashTable(int buckets)
	{
		this->table = new T[buckets];
		this->buckets = buckets;
	}

	//Converts your key into an index for the table
	int Hashing(string key)
	{
		hash<string> hasher;
		return hasher(key) % this->buckets;
	}

	//Insert your value at the location of the hash string
	void Insert(string key, T value)
	{
		int index = this->Hashing(key);
		this->table[index] = value;
	}

	void Delete();

	T Retrieve(string key)
	{
		int index = this->Hashing(key);
		return this->table[index];
	}

	void DisplayHash();
};