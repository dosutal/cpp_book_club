#include <iostream>
#include <memory>

using namespace std;

class Point3D
{
public:
    Point3D(int x, int y, int z): mX(x), mY(y), mZ(z) {}
	~Point3D(){};
    int getXCoordinate() const
    {
        return mX;
    }
    int getYCoordinate() const
    {
        return mY;
    }
    int getZCoordinate() const
    {
        return mZ;
    }

private:
	int mX, mY, mZ;
};

void print3DPoint(Point3D point)
{
    cout << "x: " << point.getXCoordinate() << ", y: " << point.getYCoordinate() << ", z: " << point.getZCoordinate() << endl;
}

int main()
{
    auto point = make_unique<Point3D>(3, 4, 5);
    print3DPoint(*point);
    return 0;
}
