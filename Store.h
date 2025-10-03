#ifndef STORE_H
#define STORE_H

#include <string>

class Store {

private:
	std::string address;

public:
	void addProduct(Product p);

	void removeProduct(Product p);
};

#endif
