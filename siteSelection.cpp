#include "siteSelection.h"

void SiteDirectionSelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end(); )
    {
        string currentSiteDirecttion = it->GetDirection();
        bool flag = 1;
        for (int i = 0; i < myRestruction.GetDirection().size(); i++)
        {
            if (currentSiteDirecttion == myRestruction.GetDirection()[i] )
            {
            flag = 0;
            break;
            }                   
        }
        if (flag == 1)
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }     
}


void SiteRegionSelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end();)
    {
        string currentSiteDirecttion = it->GetRegion();
        bool flag = 1;
        for (int i = 0; i < myRestruction.GetRegion().size(); i++)
        {
            if (currentSiteDirecttion == myRestruction.GetRegion()[i] )
            {
            flag = 0;
            break;
            }                   
        }
        if (flag == 1)
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }     
}
    
void SiteTimeInWaySelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end(); )
    {
        if (it->GetTimeInWayIn() > myRestruction.GetTimeInWayIn() || it->GetTimeInWayOut() > myRestruction.GetTimeInWayOut())
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }
}

void SiteLandscapeSelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end();)
    {
        string currentSiteTypeOfLand = it->GetTypeOfLend();
        bool flag1 = 1;
        bool flag2 = 1;
        if (it->GetHight() <= myRestruction.GetHight())
        {
            flag1 = 0;
        }                   
        for (int i = 0; i < myRestruction.GetTypeOfLand().size(); i++)
        {
            if (currentSiteTypeOfLand == myRestruction.GetTypeOfLand()[i] )
            {
            flag2 = 0;
            break;
            }                   
        }
        if ( flag1 == 1 || flag2 == 1)
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }
}

void SiteSquareSelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end();)
    {
        bool flag1 = 1;
        bool flag2 = 1;
        bool flag3 = 1;
        float currentLenghtToWidthRatio = it->GetLenght() / it->GetWeidth();
        int currentSquare = it->GetLenght() * it->GetWeidth();
        string currentForm = it->GetForm();
        if(currentLenghtToWidthRatio >= myRestruction.GetLenghtToWidthRatio().first 
            && currentLenghtToWidthRatio <= myRestruction.GetLenghtToWidthRatio().second)
        {
            flag1 = 0;
        }
        if(currentSquare >= myRestruction.GetSquare().first 
            && currentSquare <= myRestruction.GetSquare().second)
        {
            flag2 = 0;
        }
        for (int i = 0; i < myRestruction.GetForm().size(); i++)
        {
            if (currentForm == myRestruction.GetForm()[i] )
            {
            flag3 = 0;
            break;
            }                   
        }
        if ( flag1 == 1 || flag2 == 1 || flag3 == 1 )
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }
}

void SitePriceSelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end(); )
    {
        if (it->GetPrice() > myRestruction.GetPrice() )
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }
}

void SiteNeighboursSelection(list<Site>& data, SiteRestructions& myRestruction)
{
    for (auto it = data.begin(); it != data.end();)
    {
        bool flag1 = 0;
        bool flag2 = 0;
        bool flag3 = 0;
        int currentIncome = it->GetNeighboursAverageIncome();
        int currentSiteSquare = it->GetNeighboursAverageSiteSquare();
        int currentTimeOfOwner = it->GetNeighboursTtimeOfOwner();
        for (int i = 0; i < myRestruction.GetNeighboursAverageIncome().size(); i++)
        {
            if (currentIncome <= myRestruction.GetNeighboursAverageIncome()[i] )
            {
            flag3 = 1;
            break;
            }                   
        }
        for (int i = 0; i < myRestruction.GetNeighboursAverageSiteSquaree().size(); i++)
        {
            if (currentSiteSquare <= myRestruction.GetNeighboursAverageSiteSquaree()[i] )
            {
            flag3 = 1;
            break;
            }                   
        }
        for (int i = 0; i < myRestruction.GetNeighboursTtimeOfOwner().size(); i++)
        {
            if (currentTimeOfOwner <= myRestruction.GetNeighboursTtimeOfOwner()[i] )
            {
            flag3 = 1;
            break;
            }                   
        }
        if ( flag1 == 1 || flag2 == 1 || flag3 == 1 )
        {
            data.erase(it);
            it = data.begin();
            continue;
        }
        ++it;  
    }
}