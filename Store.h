#ifndef STORE_H
#define STORE_H

class Store {

private:
	String address;

public:
	void addProduct(Product p);

	void removeProduct(Product p);
};

#endif
