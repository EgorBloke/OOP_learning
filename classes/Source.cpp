#include<iostream>
#include<string>
#include<fstream>
#include <stdlib.h>
#include<typeinfo>




///////ÿ¿ﬁÀŒÕ€/////////
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

    T value;
};

//TypeInfo(T1 value) : TypeSize<T1>(value)
template <class T>
class TypeInfo : public TypeSize<T>
{
public:

    TypeInfo(T value) :TypeSize<T>(value)
    {

    }
    void ShowTypeInfo()
    {
        std::cout << "Type name is: " << typeid(TypeSize<T>::value).name() << std::endl;
    }
};



int main()
{
    
    //ÿ¿¡ÀŒÕ€  Î‡ÒÒÓ‚
    {
        std::cout << std::endl << "TEMPLATE CLASSes SECTION: " << std::endl << std::endl;
        int a = 7;
        TypeSize<int> TS(a);
        TS.DataTypeSize();
        //TypeInfo<int> TI(a);
        //TI.ShowTypeInfo();

    }
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


