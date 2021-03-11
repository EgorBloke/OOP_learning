//аег PRAGMA 1!!!!!!!!!!!!!!
#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
#include<typeinfo>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<deque>
#include<queue>
#include<thread>
#include<chrono>
#include<mutex>


#ifndef _CLASSES_H_
#define _CLASSES_H_
class Point {
    friend void changeX(Point& value);
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
    friend std::istream& operator>>(std::istream& is, Point& point);
public:

    Point(int valueX, int valueY = 22, int valueZ = 333);

    Point();

    Point(const Point& other);

    void Print();

    void SetX(int x);

    int GetX();

    void SetY(int valueY);

    int GetY();

    void SetZ(int valueZ);

    int GetZ();

    bool operator == (const Point& other);

    bool operator != (const Point& other);

    Point operator + (const Point& other);

    Point& operator ++();

    Point& operator ++(int value);

    Point& operator --();

    Point& operator --(int value);

private:
    int x;
    int y;
    int z;

};
class timer_custom {
public:
   
    void start()
    {
        start_t = std::chrono::high_resolution_clock::now();
    }
    void end()
    {
        end_t = std::chrono::high_resolution_clock::now();
    }
    float reslult()
    {
        dur = end_t - start_t;
        return dur.count();
    }

private:
    std::chrono::steady_clock::time_point start_t;
    std::chrono::steady_clock::time_point end_t;
    std::chrono::duration<float> dur;

};
class MyClassT
{
public:
    void DoWork(int a);
    void Dowork2();
    
    
};
#endif // !_CLASSES_H_


