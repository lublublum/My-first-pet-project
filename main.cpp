#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "siteSelection.h"


#define DEBUG

using namespace std;

int globalAmountOfMoney = 0;

class Point
{
private:
    int x;
    int y;
public: 

    void SetX(int x)
    {
        this->x = x;
    }
    void SetY(int y)
    {
        this->y = y;
    }
    int GetX()
    {
        return this->x;
    }
    int GetY()
    {
        return this->y;
    }  
    Point()
    {
        this->SetX(0);
        this->SetY(0);
    }
    Point(int x, int y)
    {
        this->SetX(x);
        this->SetY(y);
    }
};

int Site::count = 0;

class DesignProject
{
private:
    string name;
    string status;
public:
    void SetStatus(string status)
    {
        this->status = status;
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return this->name;
    }
    string GetStatus()
    {
        return this->status;
    }
};

class Home
{
private:
    string name;
    string status;
    string region;
public:
    void SetStatus(string status)
    {
        this->status = status;
    }
    void SetRegion(string region)
    {
        this->region = region;
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return this->name;
    }
    string GetStatus()
    {
        return this->status;
    }
    string GetRegion()
    {
        return this->region;
    }
};  

class Landscape
{
private:
    string name;
    string status;
    string region;
public:
    void SetStatus(string status)
    {
        this->status = status;
    }
    void SetRegion(string region)
    {
        this->region = region;
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return this->name;
    }
    string GetStatus()
    {
        return this->status;
    }
    string GetRegion()
    {
        return this->region;
    }
}; 

void siteSelection(list<Site>& site, SiteRestructions& res) 
{
    SiteDirectionSelection(site, res);
    SiteRegionSelection(site, res);
    SiteTimeInWaySelection(site, res);
    SiteLandscapeSelection(site, res);
    SiteSquareSelection(site, res);
    SiteNeighboursSelection(site, res);
    SitePriceSelection(site, res);
}

void coordinationOfSiteSelection(list<Site>& site, Site& RightSite)
{
    int r = rand() % (site.size());
    auto it = site.begin();
    advance(it, r);
    RightSite = *it;
}

void buildingDesign(Site& site, DesignProject& homeProject,  DesignProject& landscapeWorksProject,list<DesignProject>& otherProjects)
{
    homeProject.SetStatus("houses design project was created");
    homeProject.SetName("HOUSE");

    otherProjects.resize(2);
    auto it = otherProjects.begin();
    it->SetName("garage");
    it->SetStatus("garage design project was created");
    ++it;
    it->SetName("bathhouse");
    it->SetStatus("bathhouse design project was created"); 

    landscapeWorksProject.SetStatus("landscape works project was created");
    landscapeWorksProject.SetName("landscape");
}

void homeConstruction(Home& home, DesignProject& project)
{
    home.SetStatus("home was created");
}

void constructionOfOtherStructures(list<DesignProject>& otherProjects, list<Home>& otherStructures)
{
    otherStructures.resize(otherProjects.size());
    auto itProject = otherProjects.begin();
    auto itStructures = otherStructures.begin();
    for (; itProject != otherProjects.end(); ++itProject, ++itStructures)
    {
        itStructures->SetName(itProject->GetName());
        itStructures->SetStatus(itStructures->GetName() + " was created");
    }
    
}

void landscapeWorks(DesignProject& landscapeWorksProject, Landscape& myLandscape)
{
    myLandscape.SetName(landscapeWorksProject.GetName());
    myLandscape.SetStatus(myLandscape.GetName() + " was created");
}

void movingToNewHome()
{
    cout << "program work correctli";
}

void fillListOfSite(list<Site>& siteData)
{
    siteData.resize(30);
    for (auto it = siteData.begin(); it != siteData.end(); ++it)
    {
        int n = rand()%5;
        it->initialization(n);
    }
}


int main()
{
    srand(time(NULL));
    int n = 10;
    SiteRestructions mySiteRestruction;
    mySiteRestruction.FillRestruction();

    list<Site> siteData = {};
    fillListOfSite(siteData);

#ifdef DEBUG  
    for (auto it = siteData.begin(); it != siteData.end(); ++it)
    {
        it->print();
        cout << endl;
    } 
    cout << "--------------------------------------------------" << endl;
#endif

    siteSelection(siteData, mySiteRestruction);

#ifdef DEBUG  
    for (auto it = siteData.begin(); it != siteData.end(); ++it)
    {
        it->print();
        cout << endl;
    } 
    cout << "--------------------------------------------------" << endl;
#endif

    Site RightSite;
    coordinationOfSiteSelection(siteData, RightSite);
    cout << "address: " << RightSite.GetAddress() << endl << "--------------------------------------------------" << endl;
    
    DesignProject myProlect;
    DesignProject LandscapeWorksProject;
    list<DesignProject> ProjectsOfOtherStructures = {};
   
    buildingDesign(RightSite, myProlect, LandscapeWorksProject, ProjectsOfOtherStructures);
   
    cout << "address: " << RightSite.GetAddress() << endl;
    cout << myProlect.GetStatus()<< endl;
    for (auto it = ProjectsOfOtherStructures.begin(); it != ProjectsOfOtherStructures.end(); ++it)
    {
        cout << it->GetStatus()<< endl;
    } 
    cout << LandscapeWorksProject.GetStatus()<< endl;
    cout <<  "--------------------------------------------------" << endl;

    Home MyHouse;
    homeConstruction(MyHouse, myProlect);
    cout << "address: " << RightSite.GetAddress() << endl;
    cout << MyHouse.GetStatus()<< endl <<  "--------------------------------------------------" << endl;

   
   
    list<Home> OtherStructures = {};
    Landscape MyLandscape;

    globalAmountOfMoney = 15;
    if (globalAmountOfMoney > n)
    {
        constructionOfOtherStructures(ProjectsOfOtherStructures, OtherStructures);
        for (auto it = OtherStructures.begin(); it != OtherStructures.end(); ++it)
        {
            cout << it->GetStatus() << endl;
        }
        cout <<  "--------------------------------------------------" << endl;
        
        landscapeWorks(LandscapeWorksProject, MyLandscape);
        cout << MyLandscape.GetStatus() << endl;
        cout <<  "--------------------------------------------------" << endl;
        movingToNewHome();
    }
    else if (globalAmountOfMoney == n)
    {
        landscapeWorks(LandscapeWorksProject, MyLandscape);
        cout << MyLandscape.GetStatus() << endl;
        cout <<  "--------------------------------------------------" << endl;
        movingToNewHome();
    }
    else
    {
        movingToNewHome();
    } 
    return 0;
}