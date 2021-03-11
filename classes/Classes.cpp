#include"Classes.h"

Point::Point(int valueX, int valueY, int valueZ)
{
    x = valueX;
    y = valueY;
    z = valueZ;
}

Point::Point()
{
    x = 0; y = 0; z = 0;
}

Point::Point(const Point& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
}

void Point::Print()
{
    std::cout << "X: " << x << "\tY: " << y << "\tZ: " << z << std::endl;
}

void Point::SetX(int x)
{
    this->x = x;
    return;
}

int Point::GetX()
{
    return x;
}

void Point::SetY(int valueY)
{
    y = valueY;
    return;
}

int Point::GetY()
{
    return y;
}

void Point::SetZ(int valueZ)
{
    z = valueZ;
    return;
}

int Point::GetZ()
{
    return z;
}

bool Point::operator==(const Point& other)
{
    return this->x == other.x && this->y == other.y && this->z == other.z;
}

bool Point::operator!=(const Point& other)
{
    return !(this->x == other.x && this->y == other.y && this->z == other.z);
}

Point Point::operator+(const Point& other)
{
    Point temp;
    temp.x = this->x + other.x;
    temp.y = this->y + other.y;
    temp.z = this->z + other.z;
    return temp;
}

Point& Point::operator++()
{
    this->x++;
    this->y++;
    this->z++;
    return *this;
}

Point& Point::operator++(int value)
{
    Point temp(*this);
    this->x++;
    this->y++;
    this->z++;
    return temp;
}

Point& Point::operator--()
{
    this->x--;
    this->y--;
    this->z--;
    return *this;
}

Point& Point::operator--(int value)
{
    Point temp(*this);
    this->x--;
    this->y--;
    this->z--;
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << point.x << " " << point.y << " " << point.z;
    return os;
}
std::istream& operator>>(std::istream& is, Point& point)
{
    is >> point.x >> point.y >> point.z;
    return is;
}

void MyClassT::DoWork(int a)
{
    {
        std::cout << "Thread ID:\t" << std::this_thread::get_id() << "\t DoWork is started" << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        std::cout << "value = " << a << std::endl;

        std::cout << "finish DoWork" << std::endl;
    }
}

void MyClassT::Dowork2()
{
    std::cout << "Thread ID:\t" << std::this_thread::get_id() << "\t DoWork2 is started" << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    

    std::cout << "finish DoWork2" << std::endl;
}
