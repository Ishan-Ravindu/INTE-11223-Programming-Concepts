#include <iostream>
using namespace std;

// Student Number        => IM/2019/020
// Student Name             => Ishan Ravindu
// Assignment Number => 1
// Due Date                       =>23rd August 2021

int main(){
const int allAvailbaleCoinAndNote[11] = {1,2,5,10,20,50,100,500,1000,2000,5000};
int coinAndNoteCount[11]={0,0,0,0,0,0,0,0,0,0,0};
const int maxIndexOfCoinAndNoteArray = sizeof(allAvailbaleCoinAndNote)/sizeof(allAvailbaleCoinAndNote[0]) - 1;
int total ;
int cash;
int balance;

while(true){
cout <<"Enter Bill Total" <<endl;
cin >> total;
if(total>0){
    break;
}
cout<< "Error (enter positive number)" << endl;
}


while (true){
    cout << "Enter Cash "<<endl;
    cin >> cash;
   if(cash>=total){
       break;
   }else{
       cout<< "Error (enter price must more than or equal to bill total)" << endl;
   }
    
}

balance = cash - total;

if (balance==0){
    // resipt section 
    cout<<endl;
    cout << "******BIll******"<<endl;
    cout<<endl;
    cout <<"Total   = Rs:" <<total <<endl;
    cout << "Cash    = RS:" << cash <<endl;
    cout <<"Balance = Rs:0" <<endl;
    cout<<endl;
    cout << "***************"<<endl;
    // end of resipt section 
}else{
    int count = maxIndexOfCoinAndNoteArray;
    while(true){
        if(balance == 0 ){
            // resipt section 
            cout<<endl;
            cout << "##############BIll############"<<endl;
            cout<<endl;
            cout <<"Total   = Rs:" <<total <<endl;
            cout << "Cash    = RS:" << cash <<endl;
            cout <<"Balance = Rs:"<<cash-total <<endl;
            cout<<endl;
            // number of coin and note in resipt 
            cout <<"--------Number Of Coin And Notes--------"<<endl;
            cout<<endl;
           for(int i=0;i<=maxIndexOfCoinAndNoteArray;i++){
               if(coinAndNoteCount[i]==0){
                   continue;
               }
                cout<<"Rs:" << allAvailbaleCoinAndNote[i]<<"*";
                cout << coinAndNoteCount[i]<<endl;
           }
             cout<<endl;
             cout <<"----------------------------------------"<<endl;
              //end- number of coin and note in resipt 
             cout << "################################"<<endl;
             // end of resipt section 
             break;
        }else{
            if(balance<allAvailbaleCoinAndNote[count]){
                count--;
                continue;
            }else{
                coinAndNoteCount[count]++;
                balance -=allAvailbaleCoinAndNote[count];
            
            }
        }
    }
}
    
}