#include "Payment.h"
#include<iostream>
#include<cstring>
using namespace std;

Payment::Payment(int PaymentID, string PaymentMethod, float PaymentAmount, string LandID, string paymentReciept)
{
	Payment_ID = PaymentID ;
	Payment_method = PaymentMethod;
	Payment_amount = PaymentAmount;
	Land_ID = LandID;
	Payment_reciept = paymentReciept;
}

void Payment::getPaymentDetails()
{
	
}
void Payment::calculatePayment()
{

}
void Payment::processSecurePayment()
{

}
void Payment::verifyPayment(){}
Payment::~Payment()
{

}