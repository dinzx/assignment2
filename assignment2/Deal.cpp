#include "Deal.h"
#include<iostream>
#include<cstring>
using namespace std;

Deal::Deal()
{
	Deal_ID = " ";
	Promotion = " ";
	Discount = 0;
	LandPoint = 0;
	DownPayment = 0;

}

Deal::Deal(string DealID, string Prom, float disc, int landp, float downp)
{
	Deal_ID = DealID;
	Promotion = Prom;
	Discount = disc;
	LandPoint = landp;
	DownPayment = downp;

}

void Deal::getDealID()
{
	cout <<  Deal_ID << endl;
}

void Deal::getPromotion()
{
	cout <<  Promotion << endl;

}

void Deal::getDiscount()
{

	cout << Discount << endl;

}

void Deal::getLandPoint()
{
	cout << "Land Points =" << LandPoint << endl;

}

void Deal::getDownPayment()
{
	cout << "Down Payment =" << DownPayment << endl;

}




Deal::~Deal()
{}
