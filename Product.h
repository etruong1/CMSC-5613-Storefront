#ifndef PRODUCT_H
#define PRODUCT_H

class Product {

private:
	String productID;
	String name;
	float basePrice;
	float salePercent;
	int totalQuantity;
	float avgRating;
	String description;

public:
	void calcTotalPrice();

	void setSalePercent(float s);

	void calcAvgRating();

	void calcTotalQuantity();
};

#endif
