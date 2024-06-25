#pragma once
#include <string>

class LandPointCard
{
private:
	int Card_ID;
	int Client_ID;
	std::string Card_type;
	int No_Of_Points;


public:
	LandPointCard(int CardID, int ClientID, std::string Cardtype,int NoOfPoints);
	void showCardDetails();
	~LandPointCard();
};

