#include "siteRestructionClass.h"

void SiteRestructions::FillRestruction()
{
    this->AddDirection("north");
    this->AddDirection("west");
    this->AddRegion("SPB");
    this->AddTypeOfLend("");
    this->AddForm("rectangle");
    this->SetLenghtToWidthRatio(1,3);    
    this->SetSquare(50,100); 
    this->SetTimeInWayIn(3); 
    this->SetTimeInWayOut(2);
    this->SetHight(3);  
    this->SetPrice(5);  
    this->AddNeighboursAverageIncome(5);
    this->AddNeighboursAverageSiteSquare(35);
    this->AddNeighboursTtimeOfOwner(5);
}   