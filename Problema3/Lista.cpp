#include"Lista.h"
#include<iostream>
using namespace std;
List::List()
{
	head = NULL;
	current = NULL;
	temp = NULL;
}
void List::AddNode(int addData)
{
	nodeP n = new Node;
	n->next = NULL;
	n->numar = addData;
	if (head != NULL)
	{
		current = head;
		while (current->next!= NULL)
		{
			current = current->next;
		}
		current->next = n;

	}
	else
	{
		head = n;
	}

}
void List::DeleteNode(int delData)
{
	nodeP delPtr = NULL;
	temp = head;
	current = head;
	while (current!=NULL && current->numar!=delData)
	{
		temp = current;
		current = current->next;
		
	}
	if (current == NULL)
	{
		cout << delData << " nu a fost gasit in lista" << endl;
		delete delPtr;
	}
	else 
	{
		
		delPtr = current;
		current = current->next;
		temp->next = current;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "Valoarea " << delData << " a fost stearsa" << endl;

	}
}

void List::PrintList()
{
	current = head;
	while (current != NULL)
	{
		cout << current->numar<<endl;
		current = current->next;
	}
}
float List::Media()
{
float s = 0,nr = 0;
	float media;
	current = head;
	while (current != NULL)
	{
		s =s+ current->numar;
		nr++;
		current = current->next;
	}
	media = s / nr;
	return media;
}