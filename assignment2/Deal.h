#pragma once
#include"Land.h"
#include<string>
class Deal
{
private:
	std::string Deal_ID;
	std::string Promotion;
	float Discount;
	int LandPoint;
	float DownPayment;

public:
	Deal();
	Deal(std::string DealID, std::string Prom, float disc, int landp, float downp);
	void getDealID();
	void getPromotion();
	void getDiscount();
	void getLandPoint();
	void getDownPayment();
	~Deal();

};

