#include "siteClass.h"

void Site::print()
    {
        cout << "Address - " << this->GetAddress() << endl;
        cout << "Dir - " << this->GetDirection() << endl;
        cout << "Reg - " << this->GetRegion() << endl;
        cout << "Len - " << this->GetLenght() << endl;
        cout << "Weidth - " << this->GetWeidth() << endl;
        cout << "Hight - "<< this->GetHight() << endl;  
        cout << "Price - "<< this->GetPrice() << endl;
        cout << "Neighbours average income - "<< this->GetNeighboursAverageIncome() << endl;
    }

void Site::initialization(int num)
    {
        //ignore TypeOfLand and addres
        switch (num)
        {
        case 0:
            this->count += 1; 
            this->SetAddress(this->count);
            this->SetDirection("north");
            this->SetRegion("SPB");
            this->SetForm("rectangle");
            this->SetTimeInWayIn(2);
            this->SetTimeInWayOut(2);
            this->SetLenght(14);
            this->SetWeidth(7); 
            this->SetHight(1);  
            this->SetPrice(4);
            this->SetNeighboursAverageIncome(7);
            this->SetNeighboursAverageSiteSquare(77);
            this->SetNeighboursTtimeOfOwner(7);
            break;
        case 1:
            this->count += 1; 
            this->SetAddress(this->count);
            this->SetDirection("north");
            this->SetRegion("SPB");
            this->SetForm("rectangle");
            this->SetTimeInWayIn(2);
            this->SetTimeInWayOut(2);
            this->SetLenght(14);
            this->SetWeidth(7); 
            this->SetHight(1);  
            this->SetPrice(3);
            this->SetNeighboursAverageIncome(3);
            this->SetNeighboursAverageSiteSquare(33);
            this->SetNeighboursTtimeOfOwner(3);
            break;
        case 2:
            this->count += 1; 
            this->SetAddress(this->count);
            this->SetDirection("north");
            this->SetRegion("SPB");
            this->SetForm("rectangle");
            this->SetTimeInWayIn(2);
            this->SetTimeInWayOut(2);
            this->SetLenght(14);
            this->SetWeidth(7); 
            this->SetHight(1);  
            this->SetPrice(6);
            this->SetNeighboursAverageIncome(1);
            this->SetNeighboursAverageSiteSquare(77);
            this->SetNeighboursTtimeOfOwner(7);
            break;
        case 3:
            this->count += 1; 
            this->SetAddress(this->count);
            this->SetDirection("north");
            this->SetRegion("SPB");
            this->SetForm("rectangle");
            this->SetTimeInWayIn(2);
            this->SetTimeInWayOut(2);
            this->SetLenght(14);
            this->SetWeidth(7); 
            this->SetHight(1);  
            this->SetPrice(7);
            this->SetNeighboursAverageIncome(2);
            this->SetNeighboursAverageSiteSquare(77);
            this->SetNeighboursTtimeOfOwner(7);
            break;
        case 4:
            this->count += 1; 
            this->SetAddress(this->count);
            this->SetDirection("north");
            this->SetRegion("SPB");
            this->SetForm("rectangle");
            this->SetTimeInWayIn(2);
            this->SetTimeInWayOut(2);
            this->SetLenght(14);
            this->SetWeidth(7); 
            this->SetHight(1);  
            this->SetPrice(8);
            this->SetNeighboursAverageIncome(3);
            this->SetNeighboursAverageSiteSquare(77);
            this->SetNeighboursTtimeOfOwner(7);
            break;
        default:
            break;
        }
    }

