#pragma once
#include<iostream>
#include<algorithm>
using namespace std;
class Cube
{
private:
	int arr[3];
public:
	void setInfo(int a, int b, int c);
	int getS();
	int getV();
	int getL();
	int getW();
	int getH();
	void isSame(Cube &c);
	Cube(int a, int b, int c);
};