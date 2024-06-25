#include "Seller.h"
#include "Land.h"
#include "User.h"
#include "Administrator.h"
#include "Review.h"
#include "Communication.h"
#include "Agent.h"
#include "Order.h"
#include "Land.h"
#include "Deal.h"
#include<iostream>
#include<cstring>
using namespace std;

Seller::Seller()
{
	seller_ID = ""; 
	name = "";
	contact_no = 0;
}

Seller::Seller(string usern, string pass, string sellerID, string Sname, int contactno, string Semail) : User(usern, pass)
{
	seller_ID = sellerID;
	name = Sname;
	contact_no = contactno;
	email = Semail;
}

void Seller::displaysellerdetails(){}

void Seller::addAdminToSeller( Administrator* A)
{
	Admin1 = A;
}

void Seller::adminapproval(){}

void Seller::addLandDetails( int i, string LandID, string Loc, string Addr, float Prc, string Owner, string LandDesc, string Img, string coo, bool Availab)
{
		lands[i] = new Land(LandID, Loc, Addr, Prc, Owner, LandDesc, Img, coo, Availab);
};

void Seller::updateLandDetails() {}

void Seller::addAgentToland(int i,Agent* AgL)
{
	lands[i]->addAgent(AgL);
	AgentL = AgL;
}

void Seller::addOrderToland(int i, Order* OrL)
{
	lands[i]->addOrder(OrL);
	OrderL = OrL;
}

void Seller::addDealsToland(int landNo, int dealNo, string DealID, string Prom, float disc, int landp, float downp)
{
	Land* landsd = lands[landNo];
	landsd->addDealDetails(dealNo, DealID, Prom, disc, landp, downp); 
}

void Seller::displaySellerAndLandDetails() 
{
	cout << "Seller Details:" << endl;
	cout << "Seller Name: " << name <<endl;
	cout << "Seller ID: " << seller_ID << endl;
	cout << "Contact No: " << contact_no << endl;
	cout << "Email: " << email << endl; cout << endl;
	cout << "*************************************" << endl; cout << endl;

	cout << "Land Details of Seller " << seller_ID << " : " << endl; cout << endl;
	for (int i = 0; i < 2; ++i) {
		Land* land = lands[i];
		land->showLandDetails();cout << endl; cout << "Deals of Land " << i + 1 << endl;
		land->displayDeals();
		cout << endl;
	} cout << endl;cout << endl;

	cout << "*************************************" << endl;	cout << "*************************************" << endl;
}


void Seller::addSellerReviews(Review* R1, Review* R2)
{
	reviews[0] = R1;
	reviews[1] = R2;
}

void Seller::MessagesOfSeller(Communication* ComS1, Communication* ComS2)
{
	ComSeller[0] = ComS1;
	ComSeller[1] = ComS2;
}

Seller:: ~Seller()
{
	cout << "Sellers are deleted" << endl;
	for (int i = 0; i < SIZE; i++)
		delete lands[i];
	
}





