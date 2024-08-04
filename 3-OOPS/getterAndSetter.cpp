#include<iostream>
using namespace std;
class Player{
private:
    int score;
    int health;

public:
    //setter
    void setScore(int score)
    {
        Player::score = score;  //both lines are same
        this->score = score;
    }
    void setHealth(int health)
    {
        this->health = health;
    }

    //getter
    int getScore()
    {
        return score;
    }
    int getHealth()
    {
        return health;
    }
};
int main()
{
    Player p1;
    p1.setScore(90);
    p1.setHealth(50);

    cout<<p1.getScore()<<endl;
    cout<<p1.getHealth()<<endl;
    return 0;
}