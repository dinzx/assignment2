#pragma once

#include<string>

class Administrator;
class Communication;

class Communication
{
private:
	std::string message_ID;
	std::string Message;
	std::string Sender_Username;
	std::string Reciever_Username;
	Administrator* AdminCom;
	Communication* Paynotif;

public:
	Communication();
	Communication(std::string messageID, std::string message, std::string SenderUsername, std::string RecieverUsername);
	void AddAdminToCom(Administrator* AC);
	void StoreInquiries();
	void ShowInquiries();
	void SendMessage();
	void NotifyPaymVerification(Communication* ComVeri);
	~Communication();
};
