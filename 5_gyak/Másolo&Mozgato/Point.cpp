#include <iostream>

class Point{
/*private:
	int x,y;*/
public:
	int x,y;
	Point(int x1, int y1){
		x=x1;
		y=y1;
	}

	~Point(){
		
	}

	Point ( const Point & regi ) {
		std::cout << "point copy ctor" << std::endl;
		x=regi.x;
		y=regi.y;
	}

	Point (Point && regi) {
		std::cout << "Point move ctor" << std::endl;
		x=std::move(regi.x);
		y=std::move(regi.y);
	}

	Point& operator=(Point && regi){
		std::cout << "Point move assign" << std::endl;
		std::swap(x,regi.x);
		std::swap(y,regi.y);
		return *this;
	}


};

int main () {
	int a=4;
	int b=-7;
	Point p(a,b);
	std::cout<<"x="<<p.x<<std::endl;
	std::cout<<"y="<<p.y<<std::endl;

	Point p1=p;
	//p1=p;	
	std::cout<<"x="<<p1.x<<std::endl;
	std::cout<<"y="<<p1.y<<std::endl;

	Point p2=std::move(p);
	std::cout<<"x="<<p2.x<<std::endl;
	std::cout<<"y="<<p2.y<<std::endl;

	Point p3(3,6);
	p3=std::move(p);
	std::cout<<"x="<<p3.x<<std::endl;
	std::cout<<"y="<<p3.y<<std::endl;

	return 0;
}


