#pragma once
#define SIZE 10
#include <string>
#include "User.h"

class Review;
class Administrator;
class Review;
class Administrator;
class Communication;

class Agent : public User
{
private:
	int Agent_ID;
	std::string Agent_name;
	int contact_no;
	std::string Agent_email;
	int Rating;
	int Contract_ID;
	Review* ReAg[SIZE];
	Administrator* AdminAg;
	Communication* ComAge[SIZE];

public:
	Agent(std::string usern, std::string pass, int AgentID, std::string Aname, int contactNo, std::string Agemail, int rating, int ContractID);
	void ReviewsForAgent(Review * RA1, Review * RA2);
	void AddAdminToAgent(Administrator * AdAg);
	void MessagesOfAgent(Communication * ComA1, Communication * ComA2);
	void displayAgentDetails();
	void removeAgent();
	void provideLandDetailsToClient();
	void getAdminApproval();
	void communicationWithClient();
	void communicationWithSeller();
	void handleAgentPayment();
	void displayReviewRatings();
	};
