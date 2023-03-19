#pragma once
#include<iostream>
using namespace std;
class Node{
private:
	int idata;
	char cdata;
	Node *prev;
	Node *next;
public:
	Node();
	Node(int i, char c);
	Node(int i, char c, Node *p, Node *next);
	void set(int i);
	void set(char c);
	void setP(Node *p);
	void setN(Node *n);
	int geti()const;
	char getc()const;
	Node* getP()const;
	Node* getN()const;
};