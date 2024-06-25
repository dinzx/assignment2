
#include<iostream>
#include <cstring>
#include "User.h"
#include "Land.h"
#include "Seller.h"
#include "Client.h"
#include "Agent.h"
#include "Order.h"
#include "Payment.h"
#include "Review.h"
#include "Communication.h"
#include "Administrator.h"
#include "User.h"
using namespace std;

Administrator::Administrator()
{
	Admin_ID = 0;
	Admin_name = " ";
}

Administrator::Administrator(string userN, string Pass, int adminID, string Adname): User(userN, Pass)
{
	Username = userN;
	Password = Pass;
	Admin_ID = adminID;
	Admin_name = Adname;

}
void Administrator::addLandsToCheck( Land* L1, Land* L2, Land* L3)
{
	l[0] = L1;
	l[1] = L2;
	l[2] = L3;
}

void Administrator::addSellersToCheck(Seller* S1, Seller* S2, Seller* S3)
{
	s[0] = S1;
	s[1] = S2;
	s[2] = S3;
}

void Administrator::addClientsToCheck(Client* C1, Client* C2, Client* C3)
{
	c[0] = C1;
	c[1] = C2;
	c[2] = C3;
}

void Administrator::addAgentToCheck( Agent* A1, Agent* A2, Agent* A3)
{
	a[0] =A1;
	a[1] = A2;
	a[2] = A3;
}

void Administrator::addOrderToCheck( Order* O1, Order* O2, Order* O3)
{;
	o[0] = O1;
	o[1] = O2;
	o[2] = O3;
}

void Administrator::addPaymentToCheck( Payment* P1, Payment* P2, Payment* P3)
{
	p[0] = P1;
	p[1] = P2;
	p[2] = P3;
}

void Administrator::addReviewToCheck( Review* R1, Review* R2, Review* R3)
{
	r[0] = R1;
	r[1] = R2;
	r[2] = R3;
}

void Administrator::addCommunicationToCheck( Communication* C1, Communication* C2, Communication* C3)
{
	co[0] = C1;
	co[1] = C2;
	co[2] = C3;
}

void Administrator::storeAdminDetails(){}
void Administrator::giveApprovalUserAccounts(){}
void Administrator::giveApprovalOrder(){}
void Administrator::giveApprovalLand(){}
void Administrator::giveApprovalReview(){}
void Administrator::ManageLand(){}
void Administrator::ManageSeller(){}
void Administrator::ManageClient(){}
void Administrator::ManageAgent(){}
void Administrator::ManagePayment(){}
void Administrator::ManageReview(){}
void Administrator::ManageCommunication(){}