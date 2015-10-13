#include <iostream>
#include "stdafx.h"
#include "class.h"

using namespace std;

void car::setsize(int a, int b, int c)
{
	length = a;
	width = b;
	hight = c;
}

void car::setspeed(int a)
{
	maxspeed = a;
}

void car::setweight(int a)
{
	weight = a;
}

void car::setplaces(int a)
{
	numplaces = a;
}

void car::getinfo(engine& m)
{
	cout << "lenth " << length << endl;
	cout << "width " << width << endl;
	cout << "hight " << hight << endl;
	cout << "weight " << weight << endl;
	cout << "places " << numplaces << endl;
	cout << "max speed " << maxspeed << endl;
	m.getinfo1();
}

/*===========================================================
=============================================================*/

void train::setsize(int a, int b, int c)
{
	length = a;
	width = b;
	hight = c;
}

void train::setspeed(int a)
{
	maxspeed = a;
}

void train::setweight(int a)
{
	weight = a;
}

void train::setwagons(int a)
{
	numwagons = a;
}

void train::getinfo(wagon& m)
{
	cout << "lenth " << length << endl;
	cout << "width " << width << endl;
	cout << "hight " << hight << endl;
	cout << "weight " << weight << endl;
	cout << "max speed " << maxspeed << endl;
	m.getinfo1();
}


/*==============================================================
================================================================*/

void express::setsize(int a, int b, int c)
{
	length = a;
	width = b;
	hight = c;
}

void express::setspeed(int a)
{
	maxspeed = a;
}

void express::setweight(int a)
{
	weight = a;
}

void express::setplaces(int a)
{
	numplaces = a;
}

void express::getinfo()
{
	cout << "lenth " << length << endl;
	cout << "width " << width << endl;
	cout << "hight " << hight << endl;
	cout << "weight " << weight << endl;
	cout << "places " << numplaces << endl;
	cout << "max speed " << maxspeed << endl;
}


/*====================================================================
======================================================================*/

void train::wagon::setnumber(int a)
{
	number = a;
}

void train::wagon::setplaces(int a)
{
	numplaces = a;
}

void train::wagon::getinfo1()
{
	cout << "wagon number " << number << endl; 
	cout << "number of places " << numplaces << endl;
}

/*===================================================================
=====================================================================*/

void car::engine::sethp(int a)
{
	hp = a;
}

void car::engine::setvolume(int a)
{
	volume = a;
}

void car::engine::getinfo1()
{
	cout << "hp " << hp << endl;
	cout << "volume " << volume << endl;
}
