#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} ep;

union money
{
    /* data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << (m1 == 1);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep raushan;
    // struct employee shubham;
    // struct employee rohanDas;
    // raushan.eId = 1;
    // raushan.favChar = 'c';
    // raushan.salary = 120000000;
    // cout<<"The value is "<<raushan.eId<<endl;
    // cout<<"The value is "<<raushan.favChar<<endl;
    // cout<<"The value is "<<raushan.salary<<endl;
    return 0;
}
