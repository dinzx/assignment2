
#include<iostream>
#include <cstring>
#include "Order.h"
#include "Client.h"
#include "Administrator.h"
#include "Payment.h"
using namespace std;

Order::Order(int OrderID, int ClientID, string OrderDate, float Prc, string LandID, Client* oCli)
{
	Order_ID = OrderID;
	Client_ID = ClientID;
	Order_Date = OrderDate;
	Price = Prc;
	Land_ID = LandID;
	oCli->addOrder(this);

}

void Order::addPaymentDetails(int PaymentID, string PaymentMethod, float PaymentAmount, string LandID, string paymentReciept)
{
	Pay = new Payment(PaymentID, PaymentMethod, PaymentAmount, LandID, paymentReciept);
}


void Order::addAdminToOrder(Administrator* AO)
{
	AdminOr = AO;
}

void Order::storeOrderDetails(){}
void Order::AdministratorApproval(){}
void Order::cancelOrder(){}
void Order::updateOrder(){}
void Order::viewOrderDetails(){}
Order::~Order()
{
	delete Pay;
}