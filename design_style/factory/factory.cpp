
#include "Product.h"
#include <iostream>
#include "Factory.h"
using namespace std;

ConcreteProduct::ConcreteProduct()
{
	cout << "ConcreteProduct...." << endl;
}

ConcreteProduct::~ConcreteProduct()
{
}



Product::Product()
{
}

Product::~Product()
{
}


ConcreteFactory::ConcreteFactory()
{
	cout << "ConcreteFactory....." << endl;
}

ConcreteFactory::~ConcreteFactory()
{
}

Product* ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}

Product* ConcreteFactory::CreateProduct2()
{
	return new ConcreteProduct2();
}

Product* ConcreteFactory::CreateProduct3()
{
	return new ConcreteProduct2();
}


Factory::Factory()
{

}

Factory::~Factory()
{
}
