#include<iostream>
using namespace std;
class Book{
public:
    string name;
    int price;
    int noOfPages;

    int countBooks(int p)
    {
        if(price < p) return 1;
        return 0;
    }
    bool isBookPresent(string title)
    {
        if(title == name) return true;
        return false;
    }
};

int main()
{
    Book harryPotter;
    harryPotter.name = "Harry Potter";
    harryPotter.price = 1000;
    harryPotter.noOfPages = 500;

    cout<<harryPotter.countBooks(1100)<<endl;
    cout<<harryPotter.isBookPresent("harryPotter")<<endl;
    return 0;
}