#include "Product.h"

float Product::calcTotalPrice() {
	return this->basePrice * this->salePercent;
}

void Product::setSalePercent(float s) {
	this->salePercent = s;
}

void Product::calcAvgRating() {
	// TODO - implement Product::calcAvgRating
	throw "Not yet implemented";
}

int Product::calcTotalQuantity() {
	// TODO - implement Product::calcTotalQuantity
	throw "Not yet implemented";
}

void Product::removeColorQty(IColor* color) {
	if (this->totalQuantity > 0) {
		this->totalQuantity -= color->calcColorQuantity();
	}
}