#include<iostream>
#include<string>
#include<fstream>
#include <stdlib.h>
#include<typeinfo>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<deque>
#include<queue>
#include<functional>
#include<thread>
#include<array>
#include<algorithm>
#include<numeric>
#include<ctime>
#include<conio.h>
#include"Classes.h"

/////FUNCTIONS//////////////////
void Foo(int value);
/////ENUM///////////////////////
enum class PCState {
    ON =2 ,
    OFF=3,
    SLEEP=4
};
//////CLASES/////////////////////
class Human;
//class Point;
class CoffeeGrinder;
class MyClass;
class TestClass;
void changeX( Point & value);
class Apple;
class Image;
class Pixel;
class Man;
class Cap;
template<class T>
class TypeSize;
template <class T>
class TypeInfo;
class Person;
/////////CLASS DESCRIPTIONS/////////

class Human
{

public:
    unsigned age=0;
    unsigned weight=0;
    Human()
    {
        std::cout << "default`s constructor has been called" << std::endl;
    }
    Human(std::string name)
    {
        this->name = name;
    }
    void SetName(std::string name)
    {
        this->name = name;
    }
    std::string GetName()
    {
        return name;
    }

    void Print()
    {
        std::cout << "Name: " << name << "   " << "Age: " << age << "   " << "Weight: " << weight << std:: endl;
        std:: cout << "_______________________________________________" << std::endl;
    }
    
    void TakeApple(Apple & apple);
private:
  std::string name;

};


/*
class Point
{
friend void changeX( Point & value);
friend std::ostream& operator<<(std::ostream& os, const Point& point);
friend std::istream& operator>>(std::istream& is, Point& point);
public:
    Point (int valueX, int valueY = 22, int valueZ = 333)
    {
        x = valueX;
        y = valueY;
        z = valueZ;
    }
    Point()
    {
        x = 0; y = 0; z = 0;
    }
    Point (const Point & other)
    {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
    }

    void Print ()
    {
        std::cout << "X: " << x << "\tY: " << y << "\tZ: " << z << std::endl;
    }
     void SetX (int x)
     {
         this->x = x;
         return;
     }
     int GetX()
     {
         return x;
     }
     void SetY (int valueY)
     {
         y = valueY;
         return;
     }
     int GetY()
     {
         return y;
     }
     void SetZ (int valueZ)
     {
         z = valueZ;
         return;
     }
     int GetZ()
     {
         return z;
     }
     bool operator == (const Point & other)
     {
         return this->x == other.x && this->y == other.y && this->z == other.z;
     }
     bool operator != (const Point & other)
     {
         return !(this->x == other.x && this->y == other.y && this->z == other.z);
     }
     Point operator + (const Point & other)
     {
         Point temp;
         temp.x = this->x + other.x;
         temp.y = this->y + other.y;
         temp.z = this->z + other.z;
         return temp;
     }
     Point & operator ++()
     {
         this->x++;
         this->y++;
         this->z++;
         return *this;
     }

     Point & operator ++(int value)
     {
         Point temp(*this);
         this->x++;
         this->y++;
         this->z++;
          return temp;
     }
    Point & operator --()
     {
         this->x--;
         this->y--;
         this->z--;
         return *this;
     }

     Point & operator --(int value)
     {
         Point temp(*this);
         this->x--;
         this->y--;
         this->z--;
         return temp;
     }

private:
    int x;
    int y;
    int z;
    
};
*/

class CoffeeGrinder
{
private:
    bool CheckVoltage()
    {
        return false;
    }
public:
    void Start()
    {
        if (CheckVoltage())
        {
           std::cout << "Coffee grinder has started" << std::endl;
        }
        else{
            std::cout << "Voltage failure" << std::endl;
        }
    }
};

class MyClass
{
    int* data;
    int size;

public:
    MyClass(int size)
    {
       std::cout << "Constructor have been called " << std::endl;
       this->size = size;
       data = new int[size];
       for (int i = 0; i < size; ++i)
       {
           data[i] = i;
       }
    }
    ~MyClass()
    {
        std::cout << "Dessrtuctor have been called" << std::endl;
        delete[] data;
    }
    void Print()
    {
        std::cout << "Print" << this << std::endl;
        for (int i = 0; i < size;++i)
        {
           std::cout << "data[" << i << "] = " << data[i] << std::endl;
        }
        std::cout << std::endl;
    }
    MyClass (const MyClass &other)
    {
        this->size = other.size;
        this->data = new int[size];
        for (int i = 0; i < size; ++i)
        {
            this->data[i] = other.data[i];
        }
    }
    MyClass & operator = (const MyClass &other)
    {
        std::cout << " = operator have been called" << std::endl;
        this->size = other.size;
        if (this->data != nullptr)
        {
            delete[] this->data;
        }
        this->data = new int[size];
        for (int i = 0; i < size; ++i)
        {
            this->data[i] = other.data[i];
        }
        return *this;
    }
};

class TestClass
{
public:
    int & operator [](int index)
    {
        return arr[index];
    }
private:
    int arr[5] = {2, 56 ,345, 34, 876};

};

void changeX( Point & value)
{
    value.x = -111111;
    return;
}

class Apple
{
    friend Human;
public:
    Apple(int weight, std::string color)
    {
        this->weight = weight;
        this->color = color;
        ++Count;
        id = Count;
    }

    int Getid()
    {
        return id;
    }
    static int GetCount()
    {
        return Count;
    }
    static void ChangeColor(Apple & apple, std::string color)
    {
        apple.color = color;
    }
    void Print()
    {
        std::cout<< "Weight = " << this->weight << " Color: " << this->color << std::endl;
    }
private:
    int weight;
    std::string color;
    int id;
    static int Count;
};

class Image
{
public:
    void GetImageInfo()
    {
        for (int i = 0; i < LENGHT; ++i)
        {

            std::cout << pixels[i].GetInfo() << std::endl;
        }
    }
private:
    class Pixel
    {
    public:
        Pixel(int r, int g, int b)
        {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        std::string  GetInfo()
        {
            return "Pixel: r = " + std::to_string(r) + " g = " + std::to_string(g) + " b = " + std::to_string(b);
        }
    private:
        int r;
        int g;
        int b;
    };
    static const int LENGHT = 5;
    Pixel pixels[LENGHT]
    {
        Pixel(0,4,64),
        Pixel(4,14,10),
        Pixel(111,4,24),
        Pixel(244,244,14),
        Pixel(111,179,64)
    };
};

class Pixel
    {
    public:
        Pixel()
        {
            r = g = b = 0;
        }
        Pixel(int r, int g, int b)
        {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        std::string  GetInfo()
        {
            return "Pixel: r = " + std::to_string(r) + " g = " + std::to_string(g) + " b = " + std::to_string(b);
        }
    private:
        int r;
        int g;
        int b;
    };
class Cap
    {
    public:
        std:: string GetColor()
        {
            return color;
        }

    private:
        std::string color = "red";
    };
class Man
    {
    public:
        void Think()
        {
            brain.Think();
        }
        void InspectTheCap()
        {
            std::cout << "My cap is " << cap.GetColor() << std::endl;
        }
    private:
        class Brain //Композиция с классом Brain
        {
        public:
            void Think()
            {
                std::cout << "I am thinking" << std::endl;
            }
        };
        Brain brain;
        Cap cap; // Агрегация класса Cap (Позволяет использовать класс в другом месте)
    };
class Model
{
public:
    void InspectModel()
    {
        std :: cout << cap.GetColor() << " color cap" << std::endl;
    }
private:
    Cap cap;
};

class Student : public Human
{
public:
    Student()
    {
        std::cout << "The default Student`s constructor has been called" << std::endl;
    }
    Student(std::string name):Human(name)
    {
        std::cout << "!!!!Constructor <Student(Name)> has been called!!!!!" << std::endl;
    }
    std::string group;
    void Learn()
    {
        std::cout << "I learn" << std::endl;
    }
};
class Professor : public Human
{
public:
    std::string subject;
};
class ExtramuralStudent : public Student
{
public:
    void Learn()
    {
        std::cout << "I visit the university less often than usual" << std::endl;
    }
};
class A
{
public:
    A()
    {
        std::cout << "Constructor A is called, " <<  "dynamic memory allocated" << std::endl;
    }
    virtual ~A()
    {
        std::cout << "Destructor A is called, " <<  "dynamic memory free" << std::endl;
    }
};
class B :public A
{
private:
    
    
public:
    B()
    {
        std::cout << "Constructor B is called, " << "dynamic memory allocated" << std::endl;
    }
    ~B() override
    {
        std::cout << "Destructor B is called, " <<  "dynamic memory free" << std::endl;
    }
    
};
class C :public B
{
public:
    C()
    {
        std::cout << "Constructor C is called" << std::endl;
    }
};
class Weapon
{
public:
    virtual void Shoot() = 0;
};
class Gun : public Weapon
{
public:
    void Shoot() override
    {
        std::cout << "BANG!!" << std::endl;
    }
};
class SubmachineGun : public Gun
{
public:
    void Shoot() override
    {
        std::cout << "BANG! BANG! BANG!" << std::endl;
    }
};
class Bazooka : public Weapon
{
public:
    void Shoot() override
    {
        std::cout << "BDADUUM!!!" << std::endl;
    }
};
class Knife :public Weapon
{
public:
    void Shoot() override
    {
        std::cout << "VJUUH" << std::endl;
    }
};
class Player
{
public:
    void Shoot(Weapon * weapon)
    {
        weapon->Shoot();
    }
};
class Msg
{
public:
    Msg(std::string msg)
    {
        this->msg = msg;
    }
    virtual std::string GetMsg()
    {
        return msg;
    }
private:
    std::string msg;
};
class BraketMsg:public Msg
{
public:
    BraketMsg(std::string msg) : Msg(msg)
    {}
    std::string GetMsg() override
    {
        return "[" + ::Msg::GetMsg() + "]";
    }
};
class Printer
{
public:
    
    void PrintMsg(Msg * msg)
    {
        std::cout << msg->GetMsg() << std::endl;
    }
};
class Car
{
public:
    void Move()
    {
        std::cout << "I`m driving" << std::endl;
    }
};
class Aircraft
{
public:
    void Move()
    {
        std::cout << "I`m flying" << std::endl;
    }
};
class FlyingCar:public Car,public Aircraft
{
public:

};
class IBicycle
{
public:
    void virtual TwistTheWheels() = 0;
    void virtual Ride() = 0;

};
class SimpleBic :public IBicycle
{
public:
    void TwistTheWheels() override
    {
        std::cout << "Lets twist the wheels!!" << std::endl;
    }
    void Ride() override
    {
        std::cout << "Lets ride!!" << std::endl;
    }

};
class Bloke
{
public:
    void RideOn(IBicycle& bic)
    {
        std::cout << "Ride on!" << std::endl;
        bic.Ride();
        bic.TwistTheWheels();
    }
};
class Character
{

public:
    Character()
    {
        std::cout << "Character`s constructor is called" << std::endl;
        HP = 0;
    }
    int HP;
};
class Warrior:public Character
{
public:
    Warrior()
    {
        std::cout << "Warrior`s constructor is called" << std::endl;
    }
};
class Orc :public Character
{
public:
    Orc()
    {
        std::cout << "Orc`s constructor is called" << std::endl;
    }
};
class OrcWarrior :public Orc, public Warrior
{
public:
    OrcWarrior()
    {
        std::cout << "OrcWarrior`s constructor is called" << std::endl;
    }
};
class PC {
public:
    PCState GetState()
    {
        return state;
    }
    void SetState(const PCState state)
    {
        this->state = state;
    }
private: 
    PCState state;
};
class labpdaClass
{
public:
    int a;
    void msg()
    {
        std::cout << "me msg: "<<std::endl;

    }
    void lampda()
    {
        auto f = [this]() //[this] принимает в контекст эксземпляр класса
        {
            this->a = 500;
            this->msg();
        };
        f();
    }

};
class evenCounter 
{
public:
    void operator()(const int &a) 
    {
        if (a % 2 == 0)
        {
            count++;
            summ += a;
        }

    }
    void showResult()
    {
        std::cout << "count = " << count << "summ = " << summ;
    }

private:
    int count = 0;
    int summ = 0;

};
class Person // пердикат
{
public:
    Person(std::string name, double score)
    {
        this->name = name;
        this->score = score;
    }
    bool operator()(const Person& p)
    {
        return p.score > 180;
    }
    std::string name;
    double score;
};
class Point_2
{
public:
    Point_2(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
};

class IAction {
public:
    virtual void Action() = 0;
    
};
class CatAction :public IAction
{
public:
    virtual void Action() override
    {
        std::cout << "To gilde Cat" << std::endl;
    }
};
class TeaAction :public IAction
{
public:
    virtual void Action() override
    {
        std::cout << "To have a tea" << std::endl;
    }
};
class DogAction :public IAction
{
public:
    virtual void Action() override
    {
        std::cout << "To walk with dog" << std::endl;
    }
};
class SleepAction :public IAction
{
public:
    virtual void Action() override
    {
        std::cout << "To have a sleep" << std::endl;
    }
};



template<typename T>
class SmartPointer
{
public:
    SmartPointer(T* ptr)
    {
        std::cout << "SmartPointer`s constructor have been called" << std::endl;
        this->ptr = ptr;
    }
    ~SmartPointer()
    {
        std::cout << "SmartPointer`s destructor have been called" << std::endl;
        delete ptr;
    }
    T& operator*()
    {
        return *ptr;
    }
private:
    T* ptr;
};

///////ШАБЛОНЫ/////////
template<class T> 
class TypeSize
{
public:

    TypeSize(T value)
    {
        this->value = value;
    }
    void DataTypeSize()
    {
        std::cout << "sizeof = " << sizeof(value) << std::endl;
    }
protected:
    T value;
};

//ОДносвязный список
template<typename T>
class list
{
public:

    //template<typename T>
    list()
    {
        Size = 0;
        head = nullptr;

    }
    //template<typename T>
    void push_back(T data)
    {
        if (nullptr == head)
        {
            head = new Node<T>(data);
        }
        else
        {
            Node<T>* current = this->head;
            while (current->next)
            {
                current = current->next;
                current->next = new Node<T>(data);
                
            }
        }
        ++Size;
    }
    T& operator[](const int index)
    {
        int counter = 0;
        Node<T>* current = this->head;
        while (current)
        {
            if (counter == index)
            {
                return current->data;
            }
            else
            {
                current = current->next;
                ++counter;
            }
        }
    }
    ~list()
    {

    }
private:
    template<typename T>
    class Node
    {
    public:
        T data;
        Node<T>* next;
        Node(T data=T(), Node<T> * pNext =nullptr)
        {

        }
    };
    Node<T>* head;
    int Size;
};

//Спецификация шаблонов напоминает перегрузку функции более, чем наследование

/*
template<> // 
class TypeSize<std::string>
{
public:
    TypeSize(std::string value):TypeSize<T>(value)
    {

    }
    
    void DataTypeSize()
    {
        std::cout << "____" << sizeof(TypeSize < T > ::value) << std::endl;
    }
};
*/

template <class T>
class TypeInfo : public TypeSize<T>
{
public:

    TypeInfo(T value):TypeSize<T>(value)
    {

    }
    void ShowTypeInfo()
    {
        
        std::cout << "Type name is: " << typeid(this->value).name() << std::endl; //здесь "this->value" - обязательно!!
    }
};

/////////////////UNION////////////
union MyUnion
{
    short int a;
    int b;
    double c;
    struct {
        unsigned char f1;
        unsigned char f2;
    }B;

};
///////////////FUNTION////////////
void doWorkVector(std::vector<int> v, 
                    std::function<void(int)> foo) //в качестве параметра принимается объект function, который является
                    //свего рода указателем на функцию вида void f(int). После чего функция doWorkvtctor может работать
                    //со всеми такими функция в качестве аргумента
{
    for (auto a : v) // итеративный цикл
    {
        foo(a);
    }
   
}
void doWorkVector(std::vector<int> &v,
    std::vector<std::function<void(int)>> vecF) //в качестве параметра принимается вектор объектов типа function, 
    
{
    for (auto a : v) // итеративный цикл
    {
        for (auto &fun : vecF)
        {
            fun(a);
        }
        
    }

}
void cmpr(int a)
{
    
    if (a % 2 == 0)
    {
        std::cout << a << std::endl;
    }
}
void even(int a)
{
    
    if (a > 5 && a < 50)
    {
        std::cout << a << std::endl;
    }
    
}

//Функция предикат//////
bool lessThan(const int& a)
{
    return a > 5;
}
///////STATIC///////

int Apple :: Count = 0;
inline int in_func()
{
    return 9;
}


std::ostream& operator<<(std::ostream& os, const Person& person)
{
    os << "Name:\t" << person.name << "\tscore:\t" << person.score ;
    return os;
}


int main()
{
    //Human: Делегирование конструкторов
    { 
        std::cout << "Human Section" << std::endl;
        Human firstHuman;
        firstHuman.age = 30;
        firstHuman.weight = 100;
        firstHuman.SetName("Ivanov Ivan Ivanovicj");

        firstHuman.Print();

        Human secondHuman;
        secondHuman.age = 19;
        secondHuman.weight = 60;
        secondHuman.SetName("Noname");

        secondHuman.Print();

        Human thirdhuman("noname nonamemivich");
        Human *lastPerson;
        lastPerson = &firstHuman;
        std::cout << lastPerson->age;
        std::cout<<std::endl;

    }
    //Point
    { 
        std::cout << "Point Section" << std::endl;
        Point a(-1, 6, 78);
        a.Print();
        Point b(6, 55, 14);
        b.Print();
        bool result = a!=b;
        std::cout << result << std::endl;
        Point c = a + b;
        c.Print();
        c++;
        ++a;
        b--;
        a.Print();
        b.Print();
        c.Print();
        changeX(a);
        a.Print();
        Point p(a);
        Point point;
        //std::cin >> point;
        std::cout << point << " " << std::endl;
        

        std::cout<<std::endl;
    }
    //CoffeeGrinder
    { 
        std::cout << "CoffeeGrinder Section" << std::endl;
    CoffeeGrinder Bosch;
    Bosch.Start();
    std::cout<<std::endl;
    }
    // MyClass 
    { 
        std::cout << "MyClass section" << std::endl;
        MyClass a(4);
        MyClass b(2);

        a.Print();
        b.Print();
        a = b;
        a.Print();
        b.Print();
        std::cout<<std::endl;
    }
    //TestClass
    {
        std::cout << "TestClass section" << std::endl;
        TestClass a;
        std::cout << a[3] << std::endl;
        std::cout<<std::endl;
    }
    //Apple
    {
        std::cout << "Apple section" << std::endl;
        Apple apple (200, "RED");
        Human human;
        human.TakeApple(apple);
        Apple apple2(500, "Yellow");
        std::cout << "apple2 :";
        apple2.Print();
        Apple::ChangeColor(apple2, "Blue");
        std::cout << "apple2 changed:";
        apple2.Print();
        std::cout << Apple :: GetCount() << std::endl;
        std::cout << apple.Getid() << std::endl;
        std::cout << apple2.Getid() << std::endl;


    }
    //Image
    {
        std::cout << " Images section " << std::endl;
        Image img;
        img.GetImageInfo();
    }
    //Pixel
    {
        std::cout << " Pixels section " << std::endl;
        const int LENGHT = 5;
        Pixel arr[LENGHT];
        std::cout << arr[0].GetInfo() << std::endl;
        arr[0] = Pixel(123,32,65);
        std::cout << arr[0].GetInfo() << std::endl;
        Pixel * dyn_arr = new Pixel[LENGHT];
        dyn_arr [0] = Pixel(1,5,98);
        std::cout << dyn_arr[0].GetInfo() << std::endl;

    }
    //Man
    {
        std::cout << "Man section" << std::endl;
        Man man;
        man.Think();
        man.InspectTheCap();
        Model model;
        model.InspectModel();
    }
    //Students & professor
    {
        std::cout << "Students & professor" << std:: endl;
        Student st;
        st.SetName("John Smith");
        ExtramuralStudent ExtraSt;
        std::cout << st.GetName() << std::endl;
        ExtraSt.Learn();
        //Student("Egor Vladimirovich");

    }
    //Public, Protected, Private
    {
        
        B b;
        C c;
        
    }
    //Virtual , Override, GUN 
    {
        std::cout << "________SECTION:  Virtual , Override, GUN" << std::endl << std::endl;
        Gun gun;        
        SubmachineGun submachinegun;
        Knife knife;
        Player player;
        player.Shoot(&submachinegun);
        player.Shoot(&knife);


    }
    //Virtual destructor
    {
        std::cout << std::endl << "!!!Virtual destructor" << std::endl;
        //При создании объекта класса "В" с помощнь указателя на базовый класс "А" деструктор класса Б не вызывается
        //что приводит к утечке памяти. Для избежания этого необходимо использовать виртуальный деструктор базового класса
        //и перегруженный деструктор дочернего класса
        A *bptr=new B;
        delete bptr;
    }
    // виртулаьный метод базового класса
    {
        std::cout << std::endl<<"Base class virtual method:" << std::endl;
        Msg msg("Hi there");
        BraketMsg braketmsg("Hello there");
        Printer p;
        p.PrintMsg(&msg);
        p.PrintMsg(&braketmsg);
    }
    //multiple inheritance FlyingCAr
    {
        std::cout << std::endl << " Multiple inheritance:" << std::endl;
        FlyingCar A;
        ((Car)A).Move();
        std::cout << std::endl;
        ((Aircraft)A).Move();
    }
    //Interface bicycle
    {
        std::cout << std::endl << " Interface:" << std::endl << std::endl;
        SimpleBic sbic;
        Bloke bloke;
        bloke.RideOn(sbic);
    }
    //Virtual inheritance. Orc, warrior
    {
        std::cout << std::endl << " Virtual inheritance. Orc, warrior:" << std::endl << std::endl;
        OrcWarrior orcw;
        
        
    }
    //File
    {
        std::cout << std::endl << " File section: " << std::endl << std::endl;
        std::ofstream fileout;
        std::string path = "MyFile.txt";
        //fileout.open(path, std::ofstream::app);
        /*fileout.open(path);
        fileout << "666\n";
        fileout << "frist line\n";
        fileout << "second line\n";
        */
        fileout.close();

        std::ifstream filein;
        filein.open(path);
        if (!filein.is_open())
        {
            std::cout << "File won`t open\n";
        }
        else
        {
            /*char ch;
            while (filein.get(ch))
            {                
                std::cout << ch;
            }
            std::cout << std::endl;*/
            std::string str;
            /*while (!filein.eof())
            {
                filein >> str;
                std::cout << str << std::endl;
            }*/
            while (!filein.eof())
            {
                std::getline(filein, str);
                std::cout << str << std::endl;
            }
            

        }
        filein.close();

        Point point(5, 65, 899);
        Point point1(89,1,33);
        std::string path_Point = "Point.txt";
        fileout.open(path_Point);
        if (!fileout.is_open())
        {
            std::cout << "File opening problem" << std::endl;
        }
        {
            std::cout << "File is open" << std::endl;
            fileout.write((char*)&point, sizeof(Point));
            fileout.write((char*)&point1, sizeof(Point));
        }
        fileout.close();
        std::cout << "File Point.txt reading: ..." << std::endl;
        filein.open(path_Point);
        Point pnt;

        while (filein.read((char*)&pnt, sizeof(Point)))
        {
            pnt.Print();
        };
        filein.close();
            
    }
    //fstream << >> overload
    {
        std::cout << std::endl << " fstream << >> overload section: " << std::endl << std::endl;
        Point p1(5, 6, 5);
        Point p2(2,7,898);
        
        std::cout << p1 << std::endl;
        std::cout<< p2 << std::endl << std::endl;
        std::fstream fs;
        std::string path = "point_fstream.txt";
        fs.open(path, std::fstream::app|std::fstream::in|std::fstream::out);
        if (!fs.is_open())
        {
            std::cout << "File isn`t open" << std::endl;
        }
        else
        {
            //fs << p1<<'\n';
            //fs << p2 << '\n';
        }
        fs.close();
        fs.open(path, std::fstream::app | std::fstream::in | std::fstream::out);
        while (!fs.eof())
        {
            Point point_out;
            
            fs >> point_out;
            if (fs.eof())
            {
                continue;
            }
            std::cout << point_out << std::endl;
        }
        fs.close();
    }
    
    //Try catch throw
    {
        std::cout << std::endl << "Try catch throw section: " << std::endl << std::endl;
        try
        {
            Foo(55);
        }
        catch (const std::exception &ex )
        {
            std::cout << ex.what() << " is caucht!!!" << std::endl;
        }
        
        
    }
    
    //ENUM
    {
        std::cout << std::endl << "ENUM: " << std::endl << std::endl;
        PC pc;
        pc.SetState(PCState::ON);
        if (PCState::ON == pc.GetState())
        {
            std::cout << "PC ON" << std::endl;
        }
        pc.SetState(PCState::SLEEP); 
        switch (pc.GetState())
        {
        case PCState::OFF:
            std::cout << "PC OFF" << std::endl;
            break;
        case PCState::ON:
            std::cout << "PC ON" << std::endl;
            break;
        case PCState::SLEEP:
            std::cout << "PC SLEEP" << std::endl;
            break;
        default:
            break;
        }
    }
    //ШАБЛОНЫ Классов
    {
        std::cout << std::endl << "TEMPLATE CLASSes SECTION: " << std::endl << std::endl;
        int a = 7;
        TypeSize<int> TS(a);
        TS.DataTypeSize();
        TypeInfo<int> TI(a);
        TI.ShowTypeInfo();

    }
    //Smart pointer, shared_ptr
    {
        std::cout << std::endl << "SMART POINTER & shared_ptr SECTION: " << std::endl << std::endl;
        SmartPointer<int> pointer = new int(30);
        std::shared_ptr<int> ptr1 (new int(5)); 
        
        std::shared_ptr<int> prt2(ptr1);
        //shared_ptr позволяет избежать проблем с освобождением памяти при копировании указателя
        // в нем ведется счетчик ссылок на область выделенной память при вызове деструктора
        int SIZE = 5;

        /*int* A = new int[5]{ 5,56,8,84,2 };

        std::shared_ptr<int[]> ptr ( A);*/ 
        //вверху более длинная запись
        std::shared_ptr<int[]> ptr(new int[5]{ 5,56,8,84,2 });
        //здесь необходимо помнить про запись <int[]> тк с записью <int> 
        //все скомпилируется, но работать как массив не будет
        for (int i = 0; i < SIZE; i++)
        {
            ptr[i] = rand() % 15;
            std::cout << ptr[i] << std::endl;

        }
        auto sh_ptr = std::make_shared<double>; //создание shared_pointer  с помощью функции make_shared<>
        auto sh_ptr2 = std::make_shared<double[10]>;  //такой способ позволяет эффективнее работать с памятью
        
    }
    //Iterators
    {
        std::cout << std::endl << "Iterators SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 5,688,12,35,79,554,478 };
        std::vector<int>::iterator it = v.begin();
        for (it; it!=v.end(); it++)
        {
            std::cout << *it << "  ";
        }
        std::cout << std::endl;
        for (auto itr = v.rbegin(); itr != v.rend(); itr++) // auto позволяет не писать много букв в имени типа
        {
            std::cout << *itr << "  ";
        }
        std::cout << std::endl;
        std::vector<int>::reverse_iterator it_reverse; //Реверсный итератор для прохода в обратную сторону
        it = v.begin();
        advance(it, 3); //продвигает итератор на 3б полезно когда нет поэлементного доступа
        std::cout << *it << std::endl;
        v.insert(it, 99999);
        for (it=v.begin(); it != v.end(); it++)
        {
            std::cout << *it << "  ";
        }
        std::cout << std::endl;
        it = v.begin();
        advance(it, 4);
        v.erase(it);
        for (it = v.begin(); it != v.end(); it++)
        {
            std::cout << *it << "  ";
        }
        std::cout << std::endl;
        advance(it, -3);
        v.insert(it, 555);
        for (it = v.begin(); it != v.end(); it++)
        {
            std::cout << *it << "  ";
        }
        std::cout << std::endl;
        it = v.begin();
        advance(it, 2);
        v.erase(it, it + 3);
        for (it = v.begin(); it != v.end(); it++)
        {
            std::cout << *it << "  ";
        }
        std::cout << std::endl;
    }
    //Цикл inrange
    {
        std::cout << std::endl << "Range based cycle SECTION: " << std::endl << std::endl;
        std::vector<int> vtr = { 2,5,65,5,984,65,4 };
        for (auto var:vtr) //в переменную var копируется объект из vtr, элементы вар не изменяются в цикле
        {
            std::cout << var << std::endl;
        }

        std::cout <<  std::endl;

        for (auto& var : vtr) //значения передаются по ссылке
        {
            var += 4;
            std::cout << var << std::endl;
        }

        for ( const auto& var : vtr) //значения передаются по ссылке. const запрещает изменения
        {
            //var += 4; 
            std::cout << var << std::endl;
        }
    }
    //Бинарное дерево set multiset
    {
        std::cout << std::endl << "Set,multiset section SECTION: " << std::endl << std::endl;
        std::set<int> myset; //в контейнере set нет одинаковых элементов
        //эти контейнеры сортируются при вставке элемента
        for (size_t i = 0; i < 30; i++)
        {
            myset.insert(rand() % 20);
        }
        for (auto& var : myset)
        {
            std::cout << var << std::endl;
        }
        auto result1 = myset.insert(56); //возвращает 0 при наличии эелмента в коллекции
        auto result2 = myset.erase(9); //возвращает 0 при отсутсивии элементаб 1 - при успешном удалении
        auto it = myset.find(9);
        if (myset.end() != it)
        {
            std::cout << "it = " << *it << std::endl;
        }

        std::multiset<int> mymltset = { 1,2,5,6,567,897,9,9,9,9,12,5 }; //в контейнере multiset можно хранить одинаковые элементы
        for (auto& var : mymltset)
        {
            std::cout << var << std::endl;
        }
        auto it1 = mymltset.lower_bound(9);
        auto it2 = mymltset.upper_bound(9);
        auto it3 = mymltset.equal_range(9);
        std::cout << *it1 << " " << *it2 <<" "<<*it3.first<<" "<<*it3.second<< std::endl;

        
    }
    //Бинарное дерево map multimap
    {
        std::cout << std::endl << "map /multimap section SECTION: " << std::endl << std::endl;
        std::map<int, std::string> m;
        m.insert(std::make_pair(20, "qwert"));
        m.insert(std::pair<int, std::string>(30, "asdf"));
        m.emplace(40, "zxcv"); //три варианта добавления элемента
        auto it = m.end(); //итератор на конец 
        advance(it, -1); 
        std::cout << it->first << " " << it->second << std::endl;
        it = m.find(120); // возвращает итератор на объект, при отсутвсвии вернет m.end()
        if (m.end() != it)
        {
            std::cout << it->first << " " << it->second << std::endl;
        }
        else
        {
            std::cout << "Element doesnt find" << std::endl;
        }
        auto result = m.emplace(50, "poiu"); //возвращает пару (pair(int,"string"), bool)
                         // bool= true если элемента  с ключом до этого не было, = false если был
        std::cout << result.first->first << result.first->second << result.second << std::endl;
        m[30] = "tyuio"; //присваивает элементу с ключом 30 значение после =
                         // при отсутсвии элемента 30 - создает его
        m.erase(30); //удаляет элемент
        try
        {
            m.at(30) = "werwer"; // метод at не позволяет создавать новый элемент при отсутсвииб вызывает исключение
        }
        catch(const std::exception & ex)
        {
            std::cout << ex.what() << std::endl;
        }       

    }
    
    //stack
    {
        std::cout << std::endl << "stack section SECTION: " << std::endl << std::endl;
        std::stack<int> st;
        st.push(21); //создает копию объекта
        st.emplace(45); //не создает копию объетка. Работает быстрее
        auto t = st.top(); //возвращает сслыку на элемент
        
        while (!st.empty()) //удаляет все элементы
        {
            st.pop();
        }
        
        std::stack<int, std::vector<int>> st_v;  //явно указывает тип базового контейнера
    }

    //Очередь, queue, priority_queue
    {
        std::cout << std::endl << "queue, priority_queue SECTION: " << std::endl << std::endl;
        std::queue<int> q;
        q.push(23);
        q.push(3);
        q.emplace(12356);
        q.emplace(345);
        q.emplace(45);
        q.emplace(97);
        while (!q.empty())
        {
            std::cout << q.front() << std::endl;
            q.pop();
            std::cout << q.size() << " elements remain" << std::endl;
        }
        std::priority_queue<int, std::vector<int>> p_q;
        p_q.emplace(34);
        p_q.emplace(42);
        p_q.emplace(87);
        p_q.emplace(234);
        p_q.emplace(1233);
        while (!p_q.empty())
        {
            std::cout << p_q.top() << std::endl;
            p_q.pop();
            std::cout << p_q.size() << " elements left" << std::endl;
        }
    }

    //UNION//
    {
        std::cout << std::endl << "UNION SECTION: " << std::endl << std::endl;
        MyUnion u; //при создании объекта типа UNION выделяется память только под самы большой тип в 
                    // в myUnion 8 байт под double. За раз можно использовать только 1 поле 
                    //в остальный ячейках будет неопределенные данные
        u.a = 1;
        u.b = 4;
        u.c = 1.266;
        std::cout << std::endl;
    }
    
    //FUNCTION обертка функции    
    {
        std::cout << std::endl << "FUNCTIONs SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,654,2,65,22,17,65,12354,88,18,19,1612,22 };
        doWorkVector(v, cmpr);
        doWorkVector(v, even);
        std::cout << std::endl;
        std::vector<std::function<void(int)>> vecF = { cmpr,even };
        doWorkVector(v, vecF);
    }
    
    //Лямбда функция    
    {
        std::cout << std::endl << "LAMBDA SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,654,2,65,22,17,65,12354,88,18,19,1612,22 };
        int a = 200;
        int b = 1000;
        int c = 50;

        [&b](int a) //лямбда выражение обезличеной void функции, принимающей int 
                //выражение [&a] означает захват в область видимости функции переменной а по ссылке
        {
            a = a + b;
            std::cout << a << std::endl;

        }; //<-!!!!!!
        
        doWorkVector(v, [&b](int a) //функция из предыдущего примера вместо объекта класса function
                                    // принимает лямбда=выражение аналогичной конструкции
            {
                std::cout << "lambda f \na = " << a << std::endl;
                a = a + b;
                std::cout << "a = " <<  a << std::endl;

            });
        auto f = [=]()->int { //синтаксис [=] означает  захват лямбда функцией в констекст всех переменных по значению
                        // [&] по сслыке.  -> явно указывает тип возвращаемого функцией значения. если его не указать
                        // тип усатновится автоматически
            int result = a + b;
            return result;
        };

        int result = f();
        std::cout << "result = " << result << std::endl;

        labpdaClass lc; //лямбда функция принимает в контекст класс
        lc.lampda();
        std::cout << lc.a << std::endl;
    }

    //Время выполнения программы
    
    {
        std::cout << std::endl << "Duration SECTION: " << std::endl << std::endl;
        auto start = std::chrono::high_resolution_clock::now();//объекту присваивается время начала выполнения
        timer_custom tm; //пользовательский класс для тайминга
        tm.start();
        for (int i = 0; i < 100; ++i)
        {
            int k = (int)pow(i, 2);
            std::cout << k << std::endl;
        }

        auto end = std::chrono::high_resolution_clock::now();//объекту присваивается время конца выполнения
        tm.end();
        std::chrono::duration<float> dur = end - start; //переменная шаблонного класса duration 
        std::cout << "dur.count() = " << dur.count() << " tm.result() = " << tm.reslult()<< std::endl; 
                    //метод .count() возвращает значение времени
    }
    //функторы
    {
        std::cout << std::endl << "Functor SECTION: " << std::endl << std::endl;
        //могут хранить промежуточное состояние данных
        std::array<int, 10> arr = { 1,3,56,6,8,79,6,46 };
        evenCounter evc;
        for (size_t i = 0; i < arr.size(); i++)
        {
            evc(arr[i]);
        }
        evc.showResult();

    }
    //предикат
    {
        //предикат = это фукнция , возвращающая булево значение
        std::cout << std::endl << "Predicate SECTION: " << std::endl << std::endl;
        std::vector<Person> people =
        {
            Person("Adam",190),
            Person("Samante",170),
            Person("Egor",200),
            Person("Sara",210)
        };
        int result = std::count_if(people.begin(), people.end(), people.front()); //условный счетчик считает количество
                    //людей с score  больше 180. 
                    //people.front() - вызывает функтор классе Person, который возвращает 0 или 1
        std::cout << result << std::endl;
        std::vector<int> vec = { 1,2,3,6,5,4,9,8,1,15,56,5 };
        auto ptr = find(vec.begin(), vec.end(), 6);
        std::cout <<"ptr-vec.begin() = "<< ptr - vec.begin() << std::endl; //итераторы поддерживают арифметику
        result = count_if(vec.begin(), vec.end(), lessThan); 
                    //count_if - условный счетчик пробегает по векторру vec и ищет значение меньше 5
        std::cout << result << std::endl;
    }
    //Бинарный предикат
    {
        //принимает параметрами два значения
        std::cout << std::endl << "Binary predicate SECTION: " << std::endl << std::endl;
        
        
        std::vector<Person> people =
        {
            Person("Adam",190),
            Person("Samante",170),
            Person("Egor",200),
            Person("jonh",220),
            Person("Lucy",202),
            Person("Paul",200),
            Person("Megane",300),
            Person("Monica",120),
            Person("Sara",210)
        };
        for (auto e : people)
        {
            std::cout << e << std::endl;
        }
        std::sort(people.begin(), people.end(), 
            [](const Person& p1, const Person& p2) //бинарный преликат для сравнения объектов класса 
            {
            return p1.name > p2.name; //поля можно менять, при этом меняется критерия сравнения
            });

        for (auto e : people)
        {
            std::cout << e << std::endl;
        }
    }
    //Sort() и пузырек
    {
        std::cout << std::endl << "Sort() и пузырек SECTION: " << std::endl << std::endl;
        const int SIZE_VEC = 1000;
        std::vector<int> vec(SIZE_VEC);
        for (int i = 0; i < SIZE_VEC; ++i)
        {
            vec[i] = rand() %1000;
        }
        for (auto e : vec)
        {
            //std::cout << e << std::endl;
        }
        std::cout << std::endl;
        
        std::cout << std::endl;
        int buff;
        std::vector<int> v_sort(vec);
        std::vector<int> v_buble(vec);
        std::cout << std::endl << "Bubble: start " << std::endl << std::endl;
        timer_custom t1;
        t1.start();
        for (int i = 0; i < SIZE_VEC-1; ++i)
        {
            for (int j = 0; j < SIZE_VEC-1-i; ++j)
            {
                if (v_buble.at(j) > v_buble.at(j+1))
                {
                    buff = v_buble.at(j);
                    v_buble.at(j) = v_buble.at(j + 1);
                    v_buble.at(j + 1) = buff;
                }
            }
        }
        t1.end();

        std::cout << std::endl << "Bubble: end. Time =  " <<t1.reslult()<< std::endl << std::endl;


        for (auto e : v_buble)
        {
            //std::cout << e << std::endl;
        }
        std::cout << std::endl << "Sort(): start " << std::endl << std::endl;
        timer_custom t2;
        t2.start();
        std::sort(v_sort.begin(), v_sort.end());
        t2.end();
        std::cout << std::endl << "Sort(): end. Time =  " << t2.reslult() << std::endl << std::endl;
    }

    //find find_if find_in_not функция
    {
        std::vector<Person> people =
        {
            Person("Adam",190),
            Person("Samante",170),
            Person("Egor",200),
            Person("jonh",220),
            Person("Lucy",202),
            Person("Paul",200),
            Person("Megane",300),
            Person("Monica",120),
            Person("Sara",210)
        };

        
    }

    //remove remove_if, min/max
    {
        std::cout << std::endl << "remove remove_if, min/max SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,654,2,65,22,17,65,12354,88,18,19,1612,22 };
        auto result = std::remove(v.begin() + 5, v.end(), 22); //алгоритм remove не удаляет элементы из коллекции
                //а перемещает их в конец, возвращая итреатор на первый найденый элемент в конце
        v.erase(result, v.end()); //для удаления нужно использовать метод erase() с параметрами 

        auto res = std::minmax_element(v.begin(), v.end());  //minmax_element возвращает std::pair
        auto p_res = res;

        std::pair<int, int> p;
        p.first = 1;
        p.second = 2;  
    }
    
    //Accumulate
    {
        std::cout << std::endl << "Accumulate SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,654,2,65,22,17,65,12354,88,18,19,1612,22 };
        auto result = std::accumulate(begin(v), end(v), 0); //begin(v), end(v) - аналог строенных методов класса
                //удобен когда надо сменить тип данных на обычный массив
                //параметр 0 - начальное значение суммы. 
        std::cout << "result = " << result << std::endl;
        auto mul = std::accumulate(begin(v), end(v), 1.0 ,[](auto a, auto b) // для вычисления произведение значений 
                    //вектора в качестве 4го параметра передается лямбда выражение
                    //начальное значение 1.0 определяет результа как double
                    //параметр auto a - значение от предыдущей итеррации
            {
                return a * b;
            });
        std::cout << "mult = " << mul << std::endl;
        std::string str = std::accumulate(begin(v) + 1, end(v), std::to_string(v[0]), [](std::string str, int a)
            {
                return str + "-" + std::to_string(a);
            }); //вывод вектора на экран в виде строки с разделителем
        std::cout << str << std::endl;
    }

    //equal, mismatch
    {
        std::cout << std::endl << "equal, mismatch SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,654,2,65,22,17,65,12354,88,18,19,1612,22 };
        int arr[] = { 1,654,2,65,22,17,4,12354,88,18,19,1612,22 };
        auto result = std::equal(std::begin(arr), std::end(arr),begin(v), end(v)); //алгоритм сравнивает контейнеры stl
                // включая массивы, для применения функции std::begin() необходимо указывать поле имен 
        auto result2 = std::equal(std::begin(arr), std::end(arr), begin(v));  //допускается не указывать конец второй 
                //коллекции и предсказуемым результатом
        std::cout << "result  = " << result<<std::endl;
        auto m = std::mismatch(std::begin(arr), std::end(arr), begin(v), end(v)); //алгоритм возвращает объект pair
                //для интерпретации результата нужно сравнить поля объекта  pair c концами коллекций
        if (m.first == std::end(arr) && m.second == end(v))
        {
            std::cout << "+" << std::endl;
        }
        else
        {
            std::cout << "element N:\t" << m.first - std::begin(arr) << ". arr[] = " << *m.first << "; v[] = " << *m.second << std::endl;
            std::cout << "+" << std::endl;
        }

        //предикат для сравнения объектов класса при использовании equal
        std::vector<Point_2> p1 = { Point_2(2,2),
                               Point_2(1,2),
                                Point_2(4,5) };
        std::vector<Point_2> p2 = { Point_2(2,2),
                               Point_2(1,2),
                                Point_2(4,5) };
       
        
        bool result_point = std::equal(p1.begin(),p1.end(),p2.begin(),p2.end(), //функция equal с предикатом
            [](const Point_2 &a, const Point_2 &b)->bool {
                
                return a.x == b.x && a.y == b.y;
            }
                
            );

    }
    //for_each, вывод через итераторы
    {
        std::cout << std::endl << "for_each SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,654,2,65,22,17,65,12354,88,18,19,1612,22 };
        std::for_each(v.begin(), v.end(), [](int& a) //алгоритм проходит по всем элементам коллекции
                    // третьим параметром принимает либо указатель на функию, либо анонимную функцию
            {
                ++a;
            });
        std::ostream_iterator<int> ositer(std::cout, ", "); //инициализация итератора потока cout 
            
        std::copy(v.begin(), v.end(), ositer); //вывод на экран
    }
    //unique, unique_copy
    {
        std::cout << std::endl << "unique, unique_copy SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,3,1,2,2,6,5,4,5,5,6,89,8,9 };
        auto result = std::unique(v.begin(), v.end()); //unique пермещает повторяющиеся эелменты в конец контейнера
                // возвращает итератор на первый повторяющийся эелмент в конце
        std::vector<int> v2;
        std::unique_copy(v.begin(), v.end(), std::back_inserter(v2)); //копирует оригинальный элементы в новый ветор 
        v.erase(result, v.end());  //стирает повторяющиеся элементы из контейнера
        v.shrink_to_fit(); //подрезает вектор под количество элементов

    }
    
    
    //random_shuffle
    {
        std::cout << std::endl << "random_shuffle SECTION: " << std::endl << std::endl;
        std::vector<int> v = { 1,3,1,2,2,6,5,4,5,5,6,89,8,9 };
        //srand((int)time(NULL)); 
        std::random_shuffle(v.begin(), v.end());

        std::vector<IAction*> A = 
        {
            new CatAction(),
            new TeaAction(),
            new DogAction(),
            new SleepAction()
        };
        //IAction* arr[] = 
        std::random_shuffle(A.begin(), A.end());
        for (auto el : A)
        {
            el->Action();
            std::cout << std::endl;
        }
    }

    //клавиатурное управление
    {
        enum
        {
            ESC=27,
            ENTER=13,
            BK=8,
            UP=72,
            DOWN=80,
            RIGHT=77,
            LEFT = 75
        };
        int c;
        do {
            c = _getch();
        } while (c != ESC);
        
    }
    std::cout << std::endl << "Stop" << std::endl;
    return 0;
}
void Foo(int value)
{
    if (value < 0)
    {
        throw std::exception("The variable less than zero");
    }
    std::cout << "Value = " << value << std::endl;
}

void Human :: TakeApple(Apple & apple)
    {
        std::cout << "TakeApple weight = " << apple.weight << " color = " << apple.color << std::endl;
    }
