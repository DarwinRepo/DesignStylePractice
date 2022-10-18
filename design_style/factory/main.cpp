// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "Factory.h" 
#include "Product.h" 
#include <iostream>
using namespace std;


int main()
{
    std::cout << "Hello World!\n";

//design style 1 factor style
    Factory* fac = new ConcreteFactory();

    Product* p = fac->CreateProduct();

    //优点
    //1. Factory 提供的创建对象的接口封装
    //2. 类的实例化推迟到子类 elegant 
    //practice
    Product* p2 = fac->CreateProduct2();
    Product* p3 = fac->CreateProduct3();

    //问题
    //创建一个 Factory 的子类来通过多态实现这一点，但是这也是以新建一个类作为代价的。
    //即给 FactoryMethod（）传递一个参数用以决定是创建具体哪一个具体的 Product

//    如果我们要为不同类的类提供一个对象创建的接口，那就要用 AbstractFactory 了。
//    AbstractFactory

    //解决问题：要创建一组相关或者相互依赖的对象


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
