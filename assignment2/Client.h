#pragma once
#define SIZE 20
#include "User.h"
#include <string>
class LandPointCard;
class Administrator;
class Communication;
class Order;


class Client : public User
{
private:
	int client_ID;
	std::string name;
	int contact_no;
	std::string email;
	LandPointCard* Card;
	Administrator* Admin2;
	Communication* ComCli[SIZE];
	Order* order[SIZE];
	int numOfOrders;

public:
	Client(std::string Username, std::string Password, int clientID, std::string Cname, int Ccontactno, std::string Cemail);
	void addLandPointCard(int CardID, int ClientID, std::string Cardtype, int NoOfPoints);
	void addAdminToClient(Administrator* A1);
	void MessegesOfClient(Communication* ComC1, Communication* ComC2);
	void displayClientDetails();
	void makingPayment();
	void addOrder(Order* Ord);
	void removeOrder();
	void provideSellerReviews();
	void provideAgentReviews();
	void getAdminApproval();
	void communicationWithAgent();
	void communicationWithSeller();
	void calculateLandPoints();
};
