#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "Color.h"

class Product {

private:
	std::string productID;
	std::string name;
	float basePrice;
	float salePercent;
	int totalQuantity;
	float avgRating;
	std::string description;

public:
	Product() {}

	Product(std::string productID, std::string name, float basePrice, float salePercent,
		int totalQuantity, float avgRating, std::string description) : productID{productID},
		name{name}, basePrice{basePrice}, salePercent{salePercent}, totalQuantity{totalQuantity},
		avgRating{avgRating}, description{description} {}
	
	float calcTotalPrice();

	void setSalePercent(float s);

	void calcAvgRating();

	int calcTotalQuantity();

	void removeColorQty(IColor* color);
};

#endif
