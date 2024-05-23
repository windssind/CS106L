#include <sstream>
#include <iostream>

void badWelcomeProgram();
void TestForConsume();
void TestForLeadingWhileSpace();
void goodWelcomeProgram();
int main()
{
    // std::ostringstream oss("123456789");
    // oss << "101112";
    // oss << "123";
    // std::cout << oss.str() << std::endl;

    // int a,b;
    // std::cin >> a ;
    // std::cin >> b;
    // std::cout << a << b << std::endl;

    // badWelcomeProgram();

    // TestForLeadingWhileSpace();

    // TestForConsume();
    goodWelcomeProgram();
}

void badWelcomeProgram()
{
    std::cout << "Welcome to the program" << std::endl;
    std::cout << "Please enter your name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    std::cout << "Please enter your age" << std::endl;
    int age;
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;
    std::string response;
    std::cout << "Please enter your response" << std::endl; 
    std::cin >> response;
    std::cout << "your response is" << response << std::endl;
}

void TestForLeadingWhileSpace()
{
    std::string name;
    std::cin >> name;
    std::cout << "your name is" << name << std::endl;
}

// 测试cin确实不会consume换行符号和空白符号
void TestForConsume()
{
    std::cout << "You are testing cin" << std::endl;
    std::string name;
    char c;
    std::cin >> name;
    c = std::getchar();
    std::cout << "the character is " << c << std::endl;

    std::cout << "You are testing getLine" << std::endl;
    std::getline(std::cin,name);
    c = std::getchar();
    std::cout << "the character is " << c ;
}


// 
void goodWelcomeProgram()
{
    std::cout << "Welcome to the program" << std::endl;
    std::cout << "Please enter your name" << std::endl;
    std::string name;
    std::getline(std::cin,name);
    std::cout << "Hello " << name << std::endl;
    std::cout << "Please enter your age" << std::endl;
    int age;
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;
    std::string response;
    std::cout << "Please enter your response" << std::endl; 
    std::cin >> response;
    std::cout << "your response is" << response << std::endl;
}

void getInteger(){
    auto i = std::string("hello");
}
