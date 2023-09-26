#include <iostream>
#include <string>

using namespace std;

void addM();
void takeM();
void seeM();
void tfM();

int main(){

    int answer;
    string name = "Novelaxz";

    do{

        cout << "==============================\n" << name << " Bank Account!"; 
        cout << "Choose action : \n1. Add Balance\n2. Withdraw\n3. See Balance\n4. Transfer Balance\n\nChoosing : ";
        cin >> answer;

    }

    while(answer != 5);

}