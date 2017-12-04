//
//  main.cpp
//  Inheritance 2
//
//  Created by iMac on 03.12.17.
//  Copyright © 2017 Inheritance 2. All rights reserved.
//

#include <iostream>
/*
class TestClass
{
public:
    static int x;
};
int TestClass::x = 0;
*/
// extern int y;
// 1. Constructor to WhiteHuman, BlackHuman, YellowHuman, RedHuman
class Human
{
    int year;
    char * name;
public:
    Human (int year,char *name)
    {
        this->year=year;
        this->name= new char[strlen(name)];
        strcpy(this->name, name);
    }
    int GetYear()
    {
        return year;
    }
    char* GetName()
    {
        return name;
    }
private :
    int y;
protected:
    int z;
};

class WhiteHuman: public Human
{
    int year;
    char * name;
public:
    WhiteHuman(int year,char*name):Human(year,name)
    {
    }
    
};

class BlackHuman: private Human
{
    
public:
    BlackHuman(int year,char *name) : Human(year,name)
    {
        
    }

};
class YellowHuman: protected Human
{
public:
    YellowHuman(int year,char *name):Human(year,name)
    {
        z=year;
    
    }
    int GetZ()
    {
        return z;
    }
    
};

class RedHuman: public Human
{
public:
    RedHuman(int year,char*name) : Human (year,name)
    {
        
    }
};

int main()
{

    WhiteHuman Bill(55,"Bill");
    std::cout<<Bill.GetYear(); // yes
    BlackHuman Jordan (60,"Jordan");
    //std::cout<<Jordan.GetName(); no !
    RedHuman Barmaley(18,"Barmaley");
    std::cout<<Barmaley.GetName(); //Yes
    YellowHuman Hu(22,"Hu");
    //std::cout<<Hu.GetName();//NO
    std::cout<<Hu.GetZ();//Yes
    
    
    /*
                  public    private protecetd
     
     protected->  protected private protected
     private  ->  private   private private
     public   ->  public    private protecetd
    
    TestClass obj1, obj2;
    std::cout << TestClass::x << " " << TestClass::x << "\n";
    TestClass::x = 12;
    TestClass::x = 15;
    std::cout << TestClass::x << " " << TestClass::x << "\n";
     */
    return 0;
}
