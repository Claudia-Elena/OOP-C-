#pragma once
#include<iostream>
using namespace std;
class List {
private :
	typedef struct Node
	{
		int numar;
		Node* next;
	}*nodeP;

	nodeP head;
	nodeP current;
	nodeP temp;
public:
	List();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();
	float Media();


};