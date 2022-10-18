#pragma once

#include "Product.h"

#include <iostream>
using namespace std;

class Product;

class Factory
{
public:	
	virtual ~Factory() = 0;
	virtual Product* CreateProduct() = 0;
	virtual Product* CreateProduct2() = 0;
	virtual Product* CreateProduct3() = 0;
protected:
	Factory();
private:

};

class ConcreteFactory : public Factory
{
public:	
	~ConcreteFactory();
public:
	Product* CreateProduct();
	Product* CreateProduct2();
	Product* CreateProduct3();
	ConcreteFactory();
private:

};
