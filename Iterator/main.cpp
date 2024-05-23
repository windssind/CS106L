#include<set>
#include<map>
#include<iostream>
#include<vector>
#include<algorithm>

void TestForMap();
void TestForSet();
int main(){
    TestForMap();
}

void TestForMap(){
    std::map<int,int> m;
    m.insert({3,3});
    m.insert({1,2});
    m.insert(std::make_pair(9,10));
    std::map<int,int>::iterator it = m.begin();
    while(it != m.end()){
        std::cout << it->first << std::endl;
        std::cout << it->second << std::endl;
        it++;
    }
}

void TestForSet(){
    std::set<int> mySet;
    mySet.insert(1);
    mySet.insert(2);
    std::set<int>::iterator it = mySet.begin();
    // while (it != mySet.end()){
    //     std::cout<<*it << std::endl;
    //     it++;
    // }
    std::cout << *(--(--mySet.end())) << std::endl;
}

void Sort(const std::vector<int>& vec){
    std::sort(vec.begin(),vec.end());
}

void Find(const std::vector<int>& vec){
    std::find(vec.begin(),vec.end(),1);
}

void FindRangeNum(const std::vector<int>& vec){
    Sort(vec);
    std::set<int> s;
    std::vector<int>::iterator it =  
}

void getRangeElement(const std::set<int>& vec,int low,int high){
    std::set<int>::iterator it = vec.lower_bound(low);
    std::set<int>::iterator end = vec.upper_bound(high);
    while(it != end){
        std::cout << *it << std::endl;
        it++;
    }
}