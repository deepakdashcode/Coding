#include<iostream>
#include<string.h>
using namespace std;
#define N 3
class Vehicle{
    char *brand;
    static char *color;
    int weight, max_speed, mileage;
    public:
    Vehicle(){}
    Vehicle(char *brand, int weight, int max_speed, int mileage){
        strcpy(this->brand, brand);
        this->weight = weight;
        this->max_speed = max_speed;
        this->mileage = mileage;
    }
    void details(){
        cout << "Brand is " << brand << endl;;
        cout << "Color is" << color << endl;
        cout << "Weight = " << weight << endl;
        cout << "Max Speed = " << max_speed << endl;
        cout << "Milage = " << mileage << endl;
    }
    static void change_color(char *newColor){
        strcpy(color, newColor);
    }
};
char* Vehicle::color = "Blue";
int main()
{
    Vehicle* arr[N + 1];
    for(int i = 0; i < N; i ++){
        char brand[50], color[50];
        int weight, max_speed, mileage;
        cout << "Enter Details : ";
        fflush(stdin);
        cin >> brand >>  weight >> max_speed >> mileage;
        arr[i] = new Vehicle(brand, weight, max_speed, mileage);
        cout << "Adding Complete" << endl;
        arr[i]->details();
    }
    // Displaying Details
    cout << "Adding Complete" << endl;
    for(int i = 0; i < N; i ++){
        arr[i]->details();
    }
    return 0;
}