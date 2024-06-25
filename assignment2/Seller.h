#pragma once
#include "User.h"
#include "Land.h"
#include "Client.h"
#include<string>
#define SIZE 10

class Land;
class client;
class Review;
class Agent;
class Communication;
class Order;


class Seller : public User
{
private:
	std::string seller_ID;
	std::string name;
	int contact_no;
	std::string email;
	Land* lands[SIZE];
	Client* clients[SIZE];
	Administrator* Admin1;
	Review* reviews[SIZE];
	Communication* ComSeller[SIZE];
	Agent* AgentL;
	Order* OrderL;
	



public:
	Seller();
	Seller(std::string usern, std::string pass, std::string sellerID, std::string Sname, int contactno, std::string Semail);
	void displaysellerdetails();
	void addAdminToSeller( Administrator * A);
	void adminapproval();
	void updateLandDetails();
	void addLandDetails( int i, std::string LandID, std::string Loc, std::string Addr, float Prc, std::string Owner, std::string LandDesc, std::string Img, std::string coo, bool Availab);
	void addAgentToland(int i, Agent* AgL);
	void addOrderToland(int i, Order* OrL);
	void addDealsToland(int landNo, int dealNo, std::string DealID, std::string Prom, float disc, int landp, float downp);
	void displaySellerAndLandDetails();
	void getAdminApproval();
	void addSellerReviews(Review * R1, Review* R2);
	void MessagesOfSeller(Communication* ComS1, Communication* ComS2);
	~Seller();

};


