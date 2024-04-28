#include <iostream>
#include<string>
using namespace std;

class Transport {
public:
	virtual void move() = 0;
	virtual void sound() = 0;
};
//Air
class AirTransport : public Transport{
};
class Plane : public AirTransport {
	void move() {
		cout << "Vzhrr..." << endl;
	}
	void sound() {
		cout << "Baop..." << endl;
	}
};
class Heliopter : public AirTransport {
	void move() {
		cout << "Vrr" << endl;
	}
	void sound() {
		cout << "Baap" << endl;
	}
};

//Water
class WaterTransport: public Transport{
public:
	virtual void move() = 0;
	virtual void sound() = 0;
};
class Boat :public WaterTransport{
public:
	void move() {
		cout << "Vzshhhhh..." << endl;
	}
	void sound() {
		cout << "Boop..." << endl;
	}
};
class Submarine : public WaterTransport{
public:
	void move() {
		cout << "Bul,Bul..." << endl;
	}
	void sound() {
		cout << "Buuuuuul..." << endl;
	}
};

//Ground
class GroundTransport : public Transport {
public:
	virtual void move() = 0;
	virtual void sound() = 0;
};
class Car : public GroundTransport {
public:
	Car() {

	}
	void move() {
		cout << "Brr..." << endl;
	}
	void sound() {
		cout << "Beep..." << endl;
	}

};
class Bicycle:public GroundTransport{
	void move() {
		cout << "Pshhh..." << endl;
	}
	void sound() {
		cout << "Ring..." << endl;
	}
};
class Train :public GroundTransport {
	void move() {
		cout << "Blll..." << endl;
	}
	void sound() {
		cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA..." << endl;
	}
};
class AirTrPark{
	friend class AirTransport;
private:
	AirTransport* transports;
	int size = 0;
public:

};

class WaterTrPark {
private:
	WaterTransport* transports;
	int size = 0;
public:

};

class GroundTrPark {
private:
	GroundTransport* transports;
	int size = 0;
public:
	
};

int main() {
	
}