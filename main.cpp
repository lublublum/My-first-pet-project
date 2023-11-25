#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

int globalAmountOfMoney = 0;

class Site
{
private:
    string address;
    string region;
    string direction;

    string typeOfLend;
    int hight;

    int timeInWayIn;
    int timeInWayOut;

    int weidth;
    int lenght;
    string form;

    int price;
    int possibleBonus;

    //neighbours
    int neighboursAverageIncome;
    int neighboursSiteSquare;
    int timeOfOwner;
public:
    void SetRegion(string incomeRegion)
    {
        this->region = incomeRegion;
    }
    void SetDirection(string incomeDirection)
    {
        this->direction = incomeDirection;
    }
    void SetWeidth(int incomeWeidth)
    {
        this->weidth = incomeWeidth;
    }
    void SetLenght(int incomeLength)
    {
        this->lenght = incomeLength;
    }
    string GetRegion()
    {
        return this->region;
    }
    string GetDirection()
    {
        return this->direction;
    }
    int GetWeidth()
    {
        return this->weidth;
    }
    int GetLenght()
    {
        return this->lenght;   
    }

    void initialization(int num)
    {
        switch (num)
        {
        case 1: 
            this->SetDirection("north");
            this->SetLenght(3);
            this->SetRegion("SPB");
            this->SetWeidth(2);
            break;
        case 2:
            this->SetDirection("west");
            this->SetLenght(5);
            this->SetRegion("MSK");
            this->SetWeidth(13);
            break;
        case 0:
            this->SetDirection("south");
            this->SetLenght(22);
            this->SetRegion("EKB");
            this->SetWeidth(3);
            break;        
        default:
            break;
        }
    }
    void print()
    {
        cout << "Dir - " << this->GetDirection() << endl;;
        cout << "Len - " << this->GetLenght() << endl;
        cout << "Reg - " << this->GetRegion() << endl;
        cout << "Weidth - " << this->GetWeidth() << endl;  
    }
};

class SiteRestructions
{
private:
    string name;
    vector<string> region;
    vector<string> direction;
    vector<string> form;
    vector<string> typeOfLend;

    //use pair<int,int>
    pair<int, int> hight;
    pair<int, int> timeInWayIn;
    pair<int, int> timeInWayOut;
    pair<int, int> price;
    pair<int, int> square;
    pair<int, int> lenghtToWidthRatio;

    //neighbours
    vector<pair<int, int>> neighboursAverageIncome;
    vector<pair<int, int>> neighboursSiteSquare;
    vector<pair<int, int>> timeOfOwner;   
public:
    void SetRegion(string income)
    {
        this->region.push_back(income);
    }
    void SetDirection(string income)
    {
        this->direction.push_back(income);
    }
    void SetTypeOfLend(string income)
    {
        this->typeOfLend.push_back(income);
    }
    void SetForm(string income)
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
    void SetTimeInWayIn(int minPossibleValue, int maxPossibleValue)
    {
        this->timeInWayIn.first = minPossibleValue;
        this->timeInWayIn.second = maxPossibleValue;
    }
    void SetTimeInWayOut(int minPossibleValue, int maxPossibleValue)
    {
        this->timeInWayOut.first = minPossibleValue;
        this->timeInWayOut.second = maxPossibleValue;
    }
    void SetHight(int minPossibleValue, int maxPossibleValue)
    {
        this->hight.first = minPossibleValue;
        this->hight.second = maxPossibleValue;
    }
    void SetPrice(int minPossibleValue, int maxPossibleValue)
    {
        this->price.first = minPossibleValue;
        this->price.second = maxPossibleValue;
    }
    
    void SiteDirectionSelection(list<Site>& data)
    {
       /*  for (auto it = data.begin(); it != data.end(); ++it)
        {
            string siteDirecttion = it->GetDirection();
            bool flag = 1;
            for (int j = 0; j < this->direction.size(); j++)
            {
                if (this->direction[j] == siteDirecttion)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                data.erase(it);
            }
        } */
        
    }
    void FillRestruction()
    {
        this->SetDirection("north");
        this->SetTypeOfLend("SPB");
        this->SetDirection("normal");
        this->SetForm("rectangle");

       /*  this->SetLenghtToWidthRatio(3);    
        this->SetSquare(2); 
        this->SetTimeInWayIn(2); 
        this->SetTimeInWayOut(2);
        this->SetHight(2);  
        this->SetPrice(3); */  
    }   
};

class DesignProject
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

void siteSelection(list<Site>& site, SiteRestructions res) 
{
    res.SiteDirectionSelection(site);
}

void coordinationOfSiteSelection(list<Site>& site, Site& RightSite)
{
    int r = rand() % (site.size()-1);
    auto it = site.begin();
    advance(it, r);
    RightSite = *it;
}

void buildingDesign(Site& site, DesignProject& homeProject,  DesignProject& landscapeWorksProject,list<DesignProject>& otherProjects)
{
    homeProject.SetStatus("houses design project was created");
    homeProject.SetName("HOUSE");
    homeProject.SetRegion(site.GetRegion());

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
    home.SetRegion(project.GetRegion());
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
    siteData.resize(10);
    for (auto it = siteData.begin(); it != siteData.end(); ++it)
    {
        int n = rand()%3;
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
    
    for (auto it = siteData.begin(); it != siteData.end(); ++it)
    {
        it->print();
        cout << endl;
    } 
    
    cout << "--------------------------------------------------" << endl;
    siteSelection(siteData, mySiteRestruction);

    Site RightSite;
    coordinationOfSiteSelection(siteData, RightSite);
    cout << "region: " << RightSite.GetRegion() << endl << "--------------------------------------------------" << endl;
    
    DesignProject myProlect;
    DesignProject LandscapeWorksProject;
    list<DesignProject> ProjectsOfOtherStructures = {};
   
    buildingDesign(RightSite, myProlect, LandscapeWorksProject, ProjectsOfOtherStructures);
   
    cout << "region: " << myProlect.GetRegion() << endl;
    cout << myProlect.GetStatus()<< endl;
    for (auto it = ProjectsOfOtherStructures.begin(); it != ProjectsOfOtherStructures.end(); ++it)
    {
        cout << it->GetStatus()<< endl;
    } 
    cout << LandscapeWorksProject.GetStatus()<< endl;
    cout <<  "--------------------------------------------------" << endl;

    Home MyHouse;
    homeConstruction(MyHouse, myProlect);
    cout << "region: " << MyHouse.GetRegion() << endl;
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