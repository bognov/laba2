#include <iostream>

class vehicle
{
protected:
	int length;
	int width;
	int hight;
	int weight;
	int maxspeed;
};

class car :
	public vehicle
{
public:
	class engine
	{
	public:
		int hp;
		int volume;
		void sethp(int);
		void setvolume(int);
		void getinfo1();
	};
	int numplaces;
	void setplaces(int);
	void getinfo(engine& m);
	void setsize(int, int, int);
	void setspeed(int);
	void setweight(int);
};

class train :
	public vehicle
{
public:
	class wagon
	{
	public:
		int number;
		int numplaces;
		void setnumber(int);
		void setplaces(int);
		void getinfo1();
	};
	int numwagons;
	void getinfo(wagon& m);
	void setsize(int, int, int);
	void setspeed(int);
	void setweight(int);
	void setwagons(int);
};

class express :
	public vehicle
{
	int numplaces;
public:
	void setplaces(int);
	void getinfo();
	void setsize(int, int, int);
	void setspeed(int);
	void setweight(int);
};