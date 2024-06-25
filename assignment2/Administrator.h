#pragma once
#include "User.h"
#include<string>


class Land;
class Seller;
class Client;
class Agent;
class Order;
class Payment;
class Review;
class Communication;

class Administrator : public User
{
private:
	int Admin_ID;
	std::string Admin_name;
	Land* l[3];
	Seller* s[3];
	Client* c[3];
	Agent* a[3];
	Order* o[3];
	Payment* p[3];
	Review* r[3];
	Communication* co[3];

public:
	Administrator();
	Administrator(std::string userN, std::string Pass, int adminID, std::string Adname); 
	void addLandsToCheck(Land* L1, Land* L2, Land* L3);
	void addSellersToCheck( Seller* S1, Seller* S2, Seller* S3);
	void addClientsToCheck(Client* C1, Client* C2, Client* C3);
	void addAgentToCheck(Agent* A1, Agent* A2, Agent* A3);
	void addOrderToCheck(Order* O1, Order* O2, Order* O3);
	void addPaymentToCheck(Payment* P1, Payment* P2, Payment* P3);
	void addReviewToCheck(Review* R1, Review* R2, Review* R3);
	void addCommunicationToCheck(Communication* C1, Communication* C2, Communication* C3);
	void storeAdminDetails();
	void giveApprovalUserAccounts();
	void giveApprovalOrder();
	void giveApprovalLand();
	void giveApprovalReview();
	void ManageLand();
	void ManageSeller();
	void ManageClient();
	void ManageAgent();
	void ManagePayment();
	void ManageReview();
	void ManageCommunication();
};

