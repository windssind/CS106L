/*
Assignment 2: Marriage Pact

This assignment asks you to discover your one true love using containers and pointers.
There are two parts: implement get_applicants and find_matches.

Submit to Paperless by 11:59pm on 2/1/2024.
*/

#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <fstream>
#include <sstream>
#include <random>

std::string path = std::string("/home/winds/Documents/CS106L/Assignment/marriagepact_starter/students.txt");
std::set<std::string> get_applicants(std::string filename)
{
    // TODO: Implement this function. Feel free to change std::set to std::unordered_set if you wish!
    std::set<std::string> students;
    std::ifstream file(filename);
    std::string name;
    while (getline(file, name))
    {
        // 插入到stuendts列表中并且输出到控制台
        students.insert(name);
        std::cout << name << std::endl;
    }
    return students;
}

std::queue<std::string *> find_matches(std::set<std::string> &students)
{
    std::queue<std::string *> result;
    // iterate through the set
    for (const auto& student : students)
    {
        std::istringstream name(student);
        std::string firstName;
        std::string lastName;
        name >> firstName;
        name >> lastName;
        if (firstName[0] == 'B' && lastName[0] == 'L')
        {
            //
            result.push(const_cast<std::string *>(&student)); // 不懂
        }
    }
    return result;
}

int main()
{
    // Your code goes here. Don't forget to print your true love!
    std::set<std::string> names = get_applicants(path);
    std::queue<std::string *> fishes = find_matches(names);
    if (fishes.empty())
    {
        std::cout << "“NO STUDENT FOUND.“" << std::endl;
    }
    else
    {
        std::random_device rd; // 获得一个随机数种子
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, fishes.size() - 1);
        int count = 0;
        int myTrueLove = dis(gen);
        std::string myLoverName;
        while (count != myTrueLove)
        {
            count++;
            fishes.pop();
        }
        myLoverName = *(fishes.front());
        std::cout << "Your True Love is " << myLoverName << std::endl;
    }
    return 0;
}
