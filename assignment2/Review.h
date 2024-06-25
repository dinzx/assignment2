#pragma once

#include<string>


class Administrator;
class Client;

class Review
{
private:
	int Review_ID;
	int Rating;
	std::string Review_;
	Administrator* AdminRe;
	Client* CLRe;


public:
	Review(int ReviewID, int rating, std::string review, Client* CR);
	void AddAdminToReview(int ReviewID, Administrator* AR);
	void storeReviews();
	void displayApprovedReviews();
	~Review();
};

