#include <iostream>
using namespace std;

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    // Getters
    int getHealth() {
        return health;
    }

    int getAge() {
        return age;
    }

    int getScore() {
        return score;
    }

    bool isAlive() {
        return alive;
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setIsAlive(bool alive) {
        this->alive = alive;
    }

    // Compare 2 players by score
    static Player getMaxScorePlayer(Player a, Player b) {
        if (a.getScore() > b.getScore()) return a;
        else return b;
    }
};

int main() {
    Player harsh;
    Player tony;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    tony.setAge(22);
    tony.setScore(20);
    tony.setIsAlive(true);
    tony.setHealth(100);

    // Compare harsh and tony
    Player sanket = Player::getMaxScorePlayer(harsh, tony);

    cout << "Player with max score has health = " << sanket.getHealth() << endl;
    cout << "Score = " << sanket.getScore() << endl;

    return 0;
}
