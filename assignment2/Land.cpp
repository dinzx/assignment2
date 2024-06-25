
#include<iostream>
#include <cstring>
#include <iomanip>
#include "Land.h"
#include "Deal.h"
#include "Agent.h"
#include "Administrator.h"
using namespace std;

//overloaded constructer for Land
Land::Land()
{
    Land_ID = " ";
    Location = " ";
    Address = " ";
    Price = 0;
    Ownership = " ";
    Land_Description = " ";
    Image = " ";
    COO = " ";
    Availability = 0;
}

Land::Land(string LandID, string Loc, string Addr, float Prc, string Owner, string LandDesc, string Img, string coo, bool Availab )
{
    Land_ID = LandID;
    Location = Loc;
    Address = Addr;
    Price = Prc; 
    Ownership = Owner;
    Land_Description = LandDesc;
    Image = Img;
    COO = coo;
    Availability = Availab;
}

void Land::showLandDetails()
{
    cout << "Land ID :" << Land_ID << endl;
    cout << "Location :" << Location << endl;
    cout << "Price :" << fixed << setprecision(2) << Price << endl;
    cout << "Ownership :" << Ownership << endl;
    cout << "Land Descripton :" << Land_Description << endl;
    cout << "Image :" << Image << endl;
    cout << "COO :" << COO << endl;
    cout << "Availability :" << Availability << endl;
}

void Land::addDealDetails(int i, string DealID, string Prom, float disc, int landp, float downp)
{
    deals[i] = new Deal(DealID, Prom, disc, landp, downp);
}

void Land::displayDeals() {
    for (int i = 0; i < 2; ++i) {

        if (deals[i] != nullptr)
        {

            Deal* deal = deals[i];
            cout << "Deal ID: ";  deal->getDealID(); 
            cout << "Promotion: "; deal->getPromotion(); 
            cout << "Discount: "; deal->getDiscount(); 
            cout << "Land Price: "; deal->getLandPoint(); 
            cout << "Down Payment: "; deal->getDownPayment(); 
            cout << endl;
        }

        else
        {
            cout << "This land has no deals." << endl;
            break;
        }
    }
}

void Land::addAgent(Agent* Ag1)
{
    AgLl = Ag1;
}

void Land::addAdmin( Administrator* A1)
{
    Admin = A1;
}

void Land::addOrder(Order* O1)
{
    OrLl = O1;
}

void Land::checkAdminApproval()
{

}

void Land::checkAvailabilty()
{

}

Land::~Land()
{
    cout << "Deleting Land " << endl;
}