#include <iostream>

using namespace std;

//Structre = always publiic
//Class = can public and can private

class Account{
	public:
	string Username;
	string Password;
	bool Verified;
	int Code;

	void W(){
		cout << "Walk to front" << endl;
	};

	void S(){
		cout << "Walk Backwards" << endl;

	};
	void A();
	void D();
};

void Account::A(){
	cout << "Walk to back" << endl;
}

void Account::D(){
	cout << "Walk to left" << endl;
}

int main(){
	cout << "FINAL :D" << endl;
	Account Player1;
	Player1.D();
	return 0;
}