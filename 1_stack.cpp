#include <iostream>
#include <stack>

using namespace std;

struct Car{
    string merk;
    int id;
};

void show_cars(stack<Car> car){
    do {
        int i = car.size();

        cout << "Car " << i << endl;
        cout << "Merk : " << car.top().merk << endl;
        cout << "Id   : " << car.top().id << endl;
        car.pop();
        cout << "---------------------------------" << endl;
    } while (car.size());
}

int main (){
    int total;
    Car car;
    stack<Car> cars;

    system("cls");

    cout << "=================================" << endl;
    cout << "           Garrage" << endl;
    cout << "=================================" << endl;
    cout << "How many your cars : ";
    cin >> total;
    cout << "---------------------------------" << endl;

    if (total <= 3){
        for (int i = 0; i < total; i++){
            cout << "Car " << i + 1 << endl;
            cout << "Merk : ";
            cin >> car.merk;
            cout << "Id   : ";
            cin >> car.id;

            cars.push(car);
            cout << "---------------------------------" << endl;
        }

        system("cls");
        cout << endl << "=================================" << endl;
        cout << "         Cars in Garrage" << endl;
        cout << "=================================" << endl;

        show_cars(cars);

        cout << endl << "---------------------------------" << endl;
        cout << "How many cars you want to add : ";
        cin >> total;
        cout << "---------------------------------" << endl;

        if (total <= 3){
            for (int i = 0; i < total; i++){
                cout << "Car " << i + 1 << endl;
                cout << "---------------------------------" << endl;
                cout << "Merk : ";
                cin >> car.merk;
                cout << "Id : ";
                cin >> car.id;

                if (cars.size() >= 3){
                    cars.pop();
                    cars.push(car);
                } else {
                    cars.push(car);
                }
            }
        }

        cout << endl << "=================================" << endl;
        cout << "       New Cars in Garrage" << endl;
        cout << "=================================" << endl;
        show_cars(cars);

    } else {
        cout << "Your garrage is not too big to accomodate your cars" << endl;
    }

    return 0;
}