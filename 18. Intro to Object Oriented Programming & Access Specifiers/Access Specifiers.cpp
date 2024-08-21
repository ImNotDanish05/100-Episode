#include <iostream>

using namespace std;

class Player{
private: // You can only access this variable on the scop, or outside but still same class
    string Username;
    int Gamemode;
    double Heart = 0;
    void Lmao() const{ //You need to put const so it can work on the const function
        cout << "test" << endl;
    }

public:
void ChangeUsername(string Name);
    void ChangeGamemode(int GM);
    
    void ChangeHeart(double NCH);

    string GrabUsername();
    int GrabGamemode() const;
    double GrabHeart();

};

void Player::ChangeUsername(string Name){
    Username = Name;
}

void Player::ChangeGamemode(int GM) {
    if (GM > -1 && GM < 4){
        Gamemode = GM;
    }else{
        Gamemode = 0;
    }
}

void Player::ChangeHeart(double NCH){
    if(NCH < 0){
        Heart = 0;
    }else if (NCH > 100){
        Heart = 100;
    }else{
        Heart = NCH;
    }
}

string Player::GrabUsername(){
    return Username;
}

int Player::GrabGamemode() const{
    return Gamemode;
    Lmao();
}

double Player::GrabHeart() {
    return Heart;
}

int main()
{
    Player Player[10];
    Player[0].ChangeGamemode(4283748);
    Player[2].ChangeGamemode(1);
    cout << Player[0].GrabGamemode() << endl;
    cout << Player[2].GrabGamemode() << endl;

    Player[0].ChangeHeart(23443);
    Player[1].ChangeHeart(-2844);
    Player[2].ChangeHeart(45);
    for (int i = 0 ; i < 3 ; i++){
        double x = Player[i].GrabHeart();
        cout << x << endl;
    }

    Player[0].ChangeUsername("YellowIsCool");
    cout << Player[0].GrabUsername() << endl;
}