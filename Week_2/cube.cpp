#include <iostream>
using namespace std;

void stickers(){
    int length;
    cout<<"Enter the side lenght of rubik's cube: ";
    cin>>length;
    cout<<"Number of stickers needed: "<<(length*length)*6;
}
int main(){
    stickers();
    return 0; 
}
