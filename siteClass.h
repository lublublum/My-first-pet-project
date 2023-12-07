#pragma once
#include <string>
#include <iostream>

using namespace std;

class Site
{
private:
    int address;
    string region;
    string direction;

    string typeOfLend = "";
    int hight;

    int timeInWayIn;
    int timeInWayOut;

    float weidth;
    float lenght;
    string form;

    int price;

    int neighboursAverageIncome;
    int neighboursAverageSiteSquare;
    int neighboursTtimeOfOwner;
public:
    static int count;
    void SetRegion(string incomeRegion)
    {
        this->region = incomeRegion;
    }
    void SetDirection(string incomeRegion)
    {
        this->direction = incomeRegion;
    }
    void SetAddress(int incomeRegion)
    {
        this->address = incomeRegion;
    }
    void SetForm(string incomeDirection)
    {
        this->form = incomeDirection;
    }
    void SetTypeOfland(string incomeRegion)
    {
        this->typeOfLend = incomeRegion;
    }
    void SetWeidth(int incomeWeidth)
    {
        this->weidth = incomeWeidth;
    }
    void SetLenght(int incomeLength)
    {
        this->lenght = incomeLength;
    }
    void SetHight(int incomeWeidth)
    {
        this->hight = incomeWeidth;
    }
    void SetPrice(int incomeWeidth)
    {
        this->price = incomeWeidth;
    }
    void SetTimeInWayIn(int incomeWeidth)
    {
        this->timeInWayIn = incomeWeidth;
    }
    void SetTimeInWayOut(int incomeWeidth)
    {
        this->timeInWayOut = incomeWeidth;
    }
    void SetNeighboursAverageIncome(int incomeWeidth)
    {
        this->neighboursAverageIncome = incomeWeidth;
    }
    void SetNeighboursAverageSiteSquare(int incomeWeidth)
    {
        this->neighboursAverageSiteSquare = incomeWeidth;
    }
    void SetNeighboursTtimeOfOwner(int incomeWeidth)
    {
        this->neighboursTtimeOfOwner = incomeWeidth;
    }
    string GetRegion()
    {
        return this->region;
    }
    string GetDirection()
    {
        return this->direction;
    }
    string GetTypeOfLend()
    {
        return this->typeOfLend;
    }
    string GetForm()
    {
        return this->form;
    }
    int GetAddress()
    {
        return this->address;
    }
    float GetWeidth()
    {
        return this->weidth;
    }
    float GetLenght()
    {
        return this->lenght;   
    }
    int GetPrice()
    {
        return this->price;   
    }
    int GetHight()
    {
        return this->hight;   
    }
    int GetTimeInWayIn()
    {
        return this->timeInWayIn;   
    }
    int GetTimeInWayOut()
    {
        return this->timeInWayOut;   
    }
    int GetNeighboursAverageIncome()
    {
        return this->neighboursAverageIncome;   
    }
    int GetNeighboursAverageSiteSquare()
    {
        return this->neighboursAverageSiteSquare;   
    }
    int GetNeighboursTtimeOfOwner()
    {
        return this->neighboursTtimeOfOwner;   
    }

    void initialization(int num);
    void print();
};