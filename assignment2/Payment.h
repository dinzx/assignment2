#pragma once
#include <string>
class Payment
{
private:
	int Payment_ID;
	std::string Payment_method;
	float Payment_amount;
	std::string Land_ID;
	std::string Payment_reciept;

public:
	Payment(int PaymentID, std::string PaymentMethod, float PaymentAmount, std::string LandID, std::string paymentReciept);
	void getPaymentDetails();
	void calculatePayment();
	void processSecurePayment();
	void verifyPayment();
	~Payment();
};

