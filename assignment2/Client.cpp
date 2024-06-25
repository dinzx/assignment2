
#include<iostream>
#include <cstring>
#include "User.h"
#include "Seller.h"
#include "Client.h"
#include "Review.h"
#include "Order.h"
#include "LandPointCard.h"
#include "Communication.h"
using namespace std;


Client::Client(string Username, string Password, int clientID, string Cname, int Ccontactno, string Cemail) : User(Username, Password)
{
	client_ID = clientID;
	name = Cname;
	contact_no = Ccontactno;
	email = Cemail;

}

void Client::addLandPointCard(int CardID, int ClientID, string Cardtype, int NoOfPoints)
{
	Card = new LandPointCard(CardID, ClientID, Cardtype, NoOfPoints);
}

void Client::addAdminToClient(Administrator* A1)
{
	Admin2 = A1;
}

void Client::MessegesOfClient(Communication* ComC1, Communication* ComC2)
{
	ComCli[0] = ComC1;
	ComCli[1] = ComC2;
}

void Client::displayClientDetails(){}
void Client::makingPayment(){}

void Client::addOrder(Order* Ord)
{
	if (numOfOrders < SIZE)
	{
		order[numOfOrders] = Ord;
		numOfOrders++;
	}

}


void Client::removeOrder(){}
void Client::provideSellerReviews(){}
void Client::provideAgentReviews(){}
void Client::getAdminApproval(){}
void Client::communicationWithAgent(){}
void Client::communicationWithSeller(){}
void Client::calculateLandPoints(){}
