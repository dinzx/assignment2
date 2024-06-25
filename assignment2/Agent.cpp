
#include<iostream>
#include <cstring>
#include "Agent.h"
#include "User.h"
#include "Review.h"
#include"Administrator.h"
#include"Communication.h"
using namespace std;

Agent::Agent(string usern, string pass, int AgentID, string Aname, int contactNo, string Agemail, int rating, int ContractID) : User(usern, pass)
{
	Agent_ID = AgentID;
	Agent_name = Aname;
	contact_no = contactNo;
	Agent_email = Agemail;
	Rating = rating;
	Contract_ID = ContractID;

}

void Agent::ReviewsForAgent( Review* RA1, Review* RA2)
{
	ReAg[0] = RA1;
	ReAg[1] = RA2;

}

void Agent::AddAdminToAgent( Administrator* AdAg)
{
	AdminAg = AdAg;
}


void Agent::MessagesOfAgent(Communication* ComA1, Communication* ComA2)
{
	ComAge[0] = ComA1;
	ComAge[1] = ComA2;
}

void Agent::displayAgentDetails(){}
void Agent::removeAgent(){}
void Agent::provideLandDetailsToClient(){}
void Agent::getAdminApproval(){}
void Agent::communicationWithClient(){}
void Agent::communicationWithSeller(){}
void Agent::handleAgentPayment(){}
void Agent::displayReviewRatings(){}