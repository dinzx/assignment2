// assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Land.h"
#include "Deal.h"
#include "Client.h"
#include "Seller.h"
#include "User.h"
#include "Administrator.h"
#include "Order.h"
#include "Agent.h"
#include "Payment.h"
#include "Review.h"
#include "Communication.h"
#include "LandPointCard.h"
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    Administrator* Admin1 = new Administrator("thithi123","****",001, "Thihansi Gunawardena");
    Administrator* Admin2 = new Administrator("Rose29", "****",002, "Rosie Bandara ");
    Administrator* Admin3 = new Administrator("AnuuaBc", "****",003, "Anushka Udana");

    Agent* Agent1 = new Agent("cherry_98", "#****", 101, "Chirathi Wijethunga", 073662521, "cherrythisaraabc@gmail.com", 5, 200198);
    Agent* Agent2 = new Agent("pixiedust123", "#****", 102, "Shehara Ariyaguru", 07455266, "pixieshehara@gmail.com", 2, 200199);
    Agent* Agent3 = new Agent("miniliWij", "#****", 103, "Minili Wijesingha", 0736736, "miniliwij@gmail.com", 5, 200200);

    Agent1->AddAdminToAgent(Admin1); 
    Agent2->AddAdminToAgent(Admin1);
    Agent3->AddAdminToAgent(Admin1);

    Client* Client1 = new Client("nimalP", "*****", 201, "Nimal Perera", 07365267, "nimal100p@gmail.com");
    Client* Client2 = new Client("anusha_20", "*****", 202, "Anusha Silva", 07335667, "silvaa20@gmail.com");
    Client* Client3 = new Client("raviB", "*****", 203, "Ravi Bandara", 94583333, "raviB2344@gmail.com");

    Client1->addLandPointCard(20001, 201, "Gold", 10000); 
    Client2->addLandPointCard(20002, 202, "Silver", 5000); 
    Client3->addLandPointCard(20003, 203, "Gold", 11000);

    Client1->addAdminToClient(Admin2); 
    Client2->addAdminToClient(Admin2); 
    Client3->addAdminToClient(Admin2); 

    Seller* Seller1 = new Seller("devika900", "****", "S301", "Devika Jayasuriya", 075622236, "devi253ab@gmail.com");
    Seller* Seller2 = new Seller("sujii10", "****", "S302", "Sujitha Ratnayake", 074233236, "suji89@gmail.com");
    Seller* Seller3 = new Seller("thilini001", "****", "S303", "Thilini Wijesinghe", 0756121236, "thiliwi222@gmail.com");

    Seller1->addAdminToSeller(Admin3); 
    Seller2->addAdminToSeller(Admin3); 
    Seller3->addAdminToSeller(Admin3); 

    Seller1->addLandDetails(0, "L001", "Colombo", "123/1, Main Street", 1000000.00, "Devika Jayasuriya", "Spacious land with beautiful scenery", "https://drive.google.com/imagelink1", "https://drive.google.com/coordinatelink1", true);
    Seller1->addLandDetails(1, "L002", "Galle", "780/5, Beach Road", 8000000.00, "Devika Jayasuriya", "Sdeal for beachfront development project", "https://drive.google.com/imagelink2", "https://drive.google.com/coordinatelink2", true);

    Seller2->addLandDetails(0, "L003", "Kandy", "45A/1, Park Avenue", 15000000.00, "Sujitha Ratnayake", "Prime location near the city center", "https://drive.google.com/imagelink3", "https://drive.google.com/coordinatelink3", true);
    Seller2->addLandDetails(1, "L004", "Negombo", "789/2, Main Street", 5000000.00, "Sujitha Ratnayake", "Conveniently located land near the airport", "https://drive.google.com/imagelink4", "https://drive.google.com/coordinatelink4", true);

    Seller3->addLandDetails(3, "L005", "Dambulla", "23C, Ancient Road", 12000000.00, "Thilini Wijesinghe", "Historical land with archaeological significance", "https://drive.google.com/imagelink5", "https://drive.google.com/coordinatelink6", true);
    Seller3->addLandDetails(4, "L006", "Anuradhapura", "1001/5, Sacred Street", 15000000.00, "Thilini Wijesinghe", "Land near ancient ruins and cultural sites", "https://drive.google.com/imagelink7", "https://drive.google.com/coordinatelink7", true);

   

    Seller1->addDealsToland(0, 0, "D111", "Summer Sale", 0.15, 500, 0.2); 
    Seller2->addDealsToland(0, 0, "D112", "New Year Special", 0.1, 300, 0.25); 
    Seller1->addDealsToland(0, 1, "D113", "Summer Sale", 0.15, 500, 0.2); 

    Seller1->displaySellerAndLandDetails();


    Seller1->addAgentToland(0, Agent2);
    Seller1->addAgentToland(1, Agent2);
    Seller2->addAgentToland(0, Agent2);

    Order* Order1 = new Order(301, 201, "2023/06/10", 250000.00, "L004", Client1);
    Order* Order2 = new Order(302, 202, "2023/05/08", 200000.00, "L005", Client2);
    Order* Order3 = new Order(303, 202, "2023/04/10", 1200000.00, "L006", Client2);

    Seller1->addOrderToland(0, Order1);
    Seller1->addOrderToland(1, Order2);  
    Seller2->addOrderToland(0, Order3); 

    Order1->addPaymentDetails(13001, "Credit Card", 250000.00, "L004", "PRC001"); 
    Order2->addPaymentDetails(13002, "Cash", 200000.00, "L005", "PRC002");
    Order3->addPaymentDetails(13003, "Bank Transfer", 1200000.00, "L006", "PRC003");

    Client1->addOrder(Order1); 
    Client2->addOrder(Order2);   
    Client2->addOrder(Order3); 

    Communication* Message1 = new Communication("M0001", "Hello, I am interested in the land with ID L1234.", "raviB", "devika900");
    Communication* Message2 = new Communication("M0002", "Could you please provide more details about the land?", "raviB", "cherry_98");
    Communication* Message3 = new Communication("M0003", "Good news! We have a new listing that matches your preferences. Please review the details and let me know your thoughts.", "cherry_98", "nimalP");
    Communication* Message4 = new Communication("M0004", "I have scheduled a property viewing for you on Friday at 2 PM. Please confirm your availability.", "cherry_98", "anusha_20");
    Communication* Message5 = new Communication("M0005", "The deal has been finalized. Let's proceed with the payment.", "thilini001", "anusha_20");
    Communication* Message6 = new Communication("M0006", "Hello, I have a new listing of a prime land property. Are you interested?.", "thilini001", "nimalP");

    Agent1->MessagesOfAgent(Message4, Message3);
    Client3->MessegesOfClient(Message1, Message2);
    Seller3->MessagesOfSeller(Message5, Message6);

     
    Review* Review1 = new Review(401, 4, "Great seller! Very professional and responsive.", Client1 );
    Review* Review2 = new Review(402, 5, "The agent was amazing! Helped me find the perfect land..", Client2 );
    Review* Review3 = new Review(401, 3, "Average experience with the seller. Could have been better.", Client2 );  

    Seller1->addSellerReviews(Review1, Review3);  

    Admin1->addAgentToCheck(Agent1, Agent2,Agent3);
    Admin1->addClientsToCheck(Client1,Client2,Client3);
    Admin1->addCommunicationToCheck(Message1,Message2,Message3);
    Admin1->addOrderToCheck(Order1, Order2,Order3);
    Admin1->addReviewToCheck(Review1,Review2,Review3);
    Admin1->addSellersToCheck(Seller1,Seller2, Seller3); 

    delete Admin1;
    delete Admin2;
    delete Admin3;
    delete Agent1;
    delete Agent2;
    delete Agent3;
    delete Client1;
    delete Client2;
    delete Client3;
    delete Seller1;
    delete Seller2;
    delete Seller3;
    delete Order1;
    delete Order2;
    delete Order3;
    delete Message1;
    delete Message2;
    delete Message3;
    delete Message4;
    delete Message5;
    delete Message6;
    delete Review1;
    delete Review2;
    delete Review3;

}

