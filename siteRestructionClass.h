#pragma once
#include <string>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

class SiteRestructions
{
private:
    vector<string> region;
    vector<string> direction;
    vector<string> form;
    vector<string> typeOfLend;
    
    int hight;
    int timeInWayIn;
    int timeInWayOut;
    int price;

    pair<int, int> square;
    pair<float, float> lenghtToWidthRatio;

    vector<int> neighboursAverageIncome;
    vector<int> neighboursAverageSiteSquare;
    vector<int> neighboursTtimeOfOwner;   
public:
    void AddRegion(string income)
    {
        this->region.push_back(income);
    }
    void AddDirection(string income)
    {
        this->direction.push_back(income);
    }
    void AddTypeOfLend(string income)
    {
        this->typeOfLend.push_back(income);
    }
    void AddForm(string income)
    {
        this->form.push_back(income);
    }
    void SetLenghtToWidthRatio(int minPossibleValue, int maxPossibleValue)
    {
        this->lenghtToWidthRatio.first = minPossibleValue;
        this->lenghtToWidthRatio.second = maxPossibleValue;
    }
    void SetSquare(int minPossibleValue, int maxPossibleValue)
    {
        this->square.first = minPossibleValue;
        this->square.second = maxPossibleValue;
    }
    void SetTimeInWayIn(int income)
    {
        this->timeInWayIn = income;
    }
    void SetTimeInWayOut(int income)
    {
        this->timeInWayOut = income;
    }
    void SetHight(int income)
    {
        this->hight = income;
    }
    void SetPrice(int income)
    {
        this->price = income;
    }
    void AddNeighboursAverageIncome(int income)
    {
        this->neighboursAverageIncome.push_back(income);
    }
    void AddNeighboursAverageSiteSquare(int income)
    {
        this->neighboursAverageSiteSquare.push_back(income);
    }
    void AddNeighboursTtimeOfOwner(int income)
    {
        this->neighboursTtimeOfOwner.push_back(income);
    }
    vector<string> GetDirection()
    {
        return this->direction;
    }
    vector<string> GetRegion()
    {
        return this->region;
    }
    vector<string> GetForm()
    {
        return this->form;
    }
    vector<string> GetTypeOfLand()
    {
        return this->typeOfLend;
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
    vector<int> GetNeighboursAverageIncome()
    {
        return this->neighboursAverageIncome;
    }
    vector<int> GetNeighboursAverageSiteSquaree()
    {
        return this->neighboursAverageSiteSquare;
    }
    vector<int> GetNeighboursTtimeOfOwner()
    {
        return this->neighboursTtimeOfOwner;
    }
    pair<int, int> GetSquare()
    {
        return this->square;
    }
    pair<float, float> GetLenghtToWidthRatio()
    {
        return this->lenghtToWidthRatio;
    }
    void FillRestruction(); 
};