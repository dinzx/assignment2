#include "Review.h"
#include"Administrator.h"
#include"Client.h"
#include"Agent.h"
#include<iostream>
#include<cstring>
using namespace std;

Review::Review(int ReviewID, int rating, string review, Client* CR)
{
	Review_ID = ReviewID;
	Rating = rating;
	Review_ = review;
	CLRe = CR;

}

void Review::AddAdminToReview(int ReviewID, Administrator* AR)
{
	Review_ID = ReviewID;
	AdminRe = AR;
}

void Review::storeReviews(){}
void Review::displayApprovedReviews(){}
Review::~Review(){}