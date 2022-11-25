#include <iostream>
#include <iomanip>

using namespace std;

struct JohanesMart{
    string snack_name;
    int price, quantity, total;
};

void line(){
    cout << "==================================" << endl;
}

void miniline(){
    cout << "----------------------------------" << endl;
}

void resultMiniLine(){
    cout << "-----------------------------------------------" << endl;
}

void resultLine(){
    cout << "===============================================" << endl;
}

void result(){
    system("cls");
    resultLine();
    cout << "|             SNACK YOU HAVE TAKEN            |" << endl;
    resultLine();
    cout << "| " << "no" << " | "<< setw(16) << left << "Snack name" << "| " << setw(3) << left << "n" << "| " << setw(7) << left << "price"<< "| " << setw(7) << left << "total" << "|" << endl;
    resultMiniLine();
}

void goShop(){
    system("cls");
    JohanesMart shop[5];

    int id, item_total;
    long pay;

    system("cls");

    line();
    cout << "|    WELCOME TO JOHANES' MART    |" << endl;
    line();
    cout << "| id |    Snack      |   Price   |" << endl;
    miniline();           
    cout << "| 1. Oreo            :   5000    |" << endl;
    cout << "| 2. Bengbeng        :   3000    |" << endl;
    cout << "| 3. Zuper Cheese    :   4500    |" << endl;
    cout << "| 4. Ultra Milk      :   7000    |" << endl;
    cout << "| 5. Squeeze Yougurt :   9000    |" << endl;
    line();

    cout << "How many snack type you want : ";
    cin >> item_total;

    if (item_total <= 5){
        for (int i = 1; i <= item_total; i++){
            miniline();
            cout << "Snack " << i << endl;
            miniline();

            cout << "Snack id          : "; 
            cin >> id;
            cout << "How many you want : ";
            cin >> shop[i].quantity;

            if (id == 1){
                shop[i].price = 5000;
                shop[i].snack_name = "oreo";
            } else if (id == 2){
                shop[i].price = 3000;
                shop[i].snack_name = "Bengbeng";
            } else if (id == 3){
                shop[i].price = 4500;
                shop[i].snack_name = "Zuper Cheese";
            } else if (id == 4){
                shop[i].price = 7000;
                shop[i].snack_name = "Ultra Milk";
            } else if (id == 5){
                shop[i].price = 9000;
                shop[i].snack_name = "Squeeze Yougurt";
            } else {
                shop[i].price = 0;
                shop[i].snack_name = " - ";    
            }
            shop[i].total = shop[i].price * shop[i].quantity;
        }

        result();
        for(int i = 1; i <= item_total; i++){
            cout << "| " << i << "  | "<< setw(16) << left << shop[i].snack_name << "| " << setw(3) << left << shop[i].quantity << "| " << setw(7) << left << shop[i].price << "| " << setw(7) << left << shop[i].total << "|" << endl;
            resultMiniLine();
            pay += shop[i].total;
        }

        cout << "| " << setw(35) << left << "Total you have to Pay" << "| " << setw(7) << left << pay << "|" << endl;
        resultMiniLine();

    } else {
        miniline();
        cout << "Your snack total is too big" << endl;
        miniline();
    }

}

int main(){
    goShop();

    return 0;
}
