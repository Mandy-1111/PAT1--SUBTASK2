#include <iostream>

using namespace std;

int main()
{
   //declaring variables
    int temperature1,temperature2,temperature3;

    //input temperature1
    cout<<"temperature1:";
    cin>>temperature1;


     //input temperature2
    cout<<"temperature2:";
    cin>>temperature2;

    //checking heat difference between temperature1 and temperature2
    if(temperature2-temperature1>50){

        cout<<"reduce frying heat before taking temperature3 readings."<<endl;
    }
    else if(temperature2-temperature1<10){
            cout<<"increase frying heat before taking temperature3 readings."<<endl;

    }
    //input temperature3
    cout<<"temperature3:";
    cin>>temperature3;

    //check if oil is ready
    if(temperature3>=150 && temperature3<=190){
            cout<<"you may start frying magwinya."<<endl;

    }
    else{
    cout<<"oil is not ready for frying!"<<endl;
   }

   return 0;

  }
