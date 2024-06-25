#pragma once

#include<string>


class Land;
class Client;
class Administrator;
class Payment;

class Order
{
private:
	int Order_ID;
	int Client_ID;
	std::string Order_Date;
	float Price;
	std::string Land_ID;
	Client* oCli;
	Administrator* AdminOr;
	Payment* Pay;

public:
	Order(int OrderID, int ClientID, std::string OrderDate, float Prc, std::string LandID, Client* oCli);
	void addPaymentDetails(int PaymentID, std::string PaymentMethod, float PaymentAmount, std::string LandID, std::string paymentReciept);
	void addAdminToOrder(Administrator * AO);
	void storeOrderDetails();
	void AdministratorApproval();
	void cancelOrder();
	void updateOrder();
	void viewOrderDetails();
	~Order();
};



