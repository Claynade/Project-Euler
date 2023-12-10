#include <iostream>
using namespace std;

int summation(int n, int a){
    return (n*(2*a + (n-1)*a))/2; //using basic summation formula
}

int main(){
    int maximum_value = 1000;
    int sum_three = summation((maximum_value-1)/3, 3);
    int sum_five = summation((maximum_value-1)/5, 5);
    int sum_fifteen = summation((maximum_value-1)/15, 15);
    int sum = sum_three + sum_five - sum_fifteen;
    cout << sum;
    }   