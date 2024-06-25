#pragma once
#include "Deal.h"
#include "Administrator.h"
#define SIZE 10
#include<string>
class Deal;
class Administrator;
class Agent;
class Order;

class Land
{
private:
	std::string Land_ID;
	std::string Location;
	std::string Address;
	float Price;
	std::string Ownership;
	std::string Land_Description;
	std::string Image;
	std::string COO;
	bool Availability;
	Deal * deals[SIZE];
	Administrator* Admin;
	Agent* AgLl;
	Order* OrLl;

public:

	Land();
	Land(std::string LandID, std::string Loc, std::string Addr, float Prc, std::string Owner, std::string LandDesc, std::string Img, std::string coo, bool Availab);
	void addDealDetails(int i, std::string DealID, std::string Prom, float disc, int landp, float downp);
	void displayDeals(); 
	void showLandDetails();
	void addAgent(Agent* Ag1);
	void addAdmin(Administrator *A1);
	void addOrder(Order *O1);
	void checkAdminApproval();
	void checkAvailabilty();
	~Land();

};

