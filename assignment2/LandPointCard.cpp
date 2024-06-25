#include "LandPointCard.h"
#include<iostream>
#include <string>
using namespace std;

LandPointCard::LandPointCard(int CardID, int ClientID, std::string Cardtype, int NoOfPoints)
{
	Card_ID = CardID;
	Client_ID = ClientID;
	Card_type = Cardtype;
	No_Of_Points = NoOfPoints;
}
void LandPointCard::showCardDetails(){}
LandPointCard::~LandPointCard(){}