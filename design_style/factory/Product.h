#pragma once

class Product
{
public:
	~Product();
protected:
	Product(); //���ι��캯��
private:


};

class ConcreteProduct : public Product
{
public:
	ConcreteProduct();
	~ConcreteProduct();
private:

};

class ConcreteProduct2 : public Product
{
public:
	ConcreteProduct2();
	~ConcreteProduct2();
private:	

};

class ConcreteProduct3 : public Product
{
public:
	ConcreteProduct3();
	~ConcreteProduct3();
private:

};
