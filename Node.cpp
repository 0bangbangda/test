#include"Node.h"
Node::Node() :idata(0), cdata('0'), prev(NULL), next(NULL)
{
	cout << "默认构造函数调用" << endl;
}
Node::Node(int i, char c) : idata(i), cdata(c), prev(NULL), next(NULL)
{
	cout << "有参构造函数调用" << endl;
}
Node::Node(int i, char c, Node *p, Node *n) : idata(i), cdata(c), prev(p), next(n)
{
	cout << "有参构造函数调用" << endl;
}
void Node::set(int i){
	idata = i;
}
void Node::set(char c)
{
	cdata = c;
}
void Node::setP(Node *p)
{
	prev = p;
}
void Node::setN(Node *n)
{
	next = n;
}
int Node::geti() const
{
	return idata;
}
char Node::getc()const
{
	return cdata;
}
Node* Node::getP()const
{
	return prev;
}
Node* Node::getN()const
{
	return next;
}