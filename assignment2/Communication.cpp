#include<iostream>
#include "Communication.h"
#include "Administrator.h"
#include <cstring>
using namespace std;


Communication::Communication()
{
	message_ID = " ";
	Message = " ";
	Sender_Username= "";
	Reciever_Username=" ";
}

Communication::Communication(string messageID, string message, string SenderUsername, string RecieverUsername)
{
	message_ID = messageID;
	Message = message;
	Sender_Username = SenderUsername;
	Reciever_Username = RecieverUsername;

}

void Communication::AddAdminToCom( Administrator* AC)
{
	AdminCom = AC;

}

void Communication::StoreInquiries(){}
void Communication::ShowInquiries(){}
void Communication::SendMessage(){}

void Communication::NotifyPaymVerification( Communication* ComVeri)
{
	Paynotif = ComVeri;

}

Communication::~Communication(){}