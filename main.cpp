#include <iostream>
#include <vector>
#include <list>
#include <string>

#define DEBUG

using namespace std;

int globalAmountOfMoney = 0;

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

    void initialization(int num)
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
            this->SetNeighboursAverageIncome(7);
            this->SetNeighboursAverageSiteSquare(77);
            this->SetNeighboursTtimeOfOwner(7);
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
            this->SetNeighboursAverageIncome(7);
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
            this->SetNeighboursAverageIncome(7);
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
            this->SetNeighboursAverageIncome(7);
            this->SetNeighboursAverageSiteSquare(77);
            this->SetNeighboursTtimeOfOwner(7);
            break;
        default:
            break;
        }
    }
    void print()
    {
        cout << "Address - " << this->GetAddress() << endl;
        cout << "Dir - " << this->GetDirection() << endl;
        cout << "Reg - " << this->GetRegion() << endl;
        cout << "Len - " << this->GetLenght() << endl;
        cout << "Weidth - " << this->GetWeidth() << endl;
        cout << "Hight - "<< this->GetHight() << endl;  
        cout << "Price - "<< this->GetPrice() << endl;
    }
};

int Site::count = 0;

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
    void FillRestruction()
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

void siteSelection(list<Site>& site, SiteRestructions& res) 
{
    SiteDirectionSelection(site, res);
    SiteRegionSelection(site, res);
    SiteTimeInWaySelection(site, res);
    SiteLandscapeSelection(site, res);
    SiteSquareSelection(site, res);
    //SiteNeighboursSelection(site, res);
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