#include <iostream>
using namespace std;

int main(){
const int allAvailbaleCoinAndNote[11] = {1,2,5,10,20,50,100,500,1000,2000,5000};
int coinAndNoteCount[11]={0,0,0,0,0,0,0,0,0,0,0};
int totalBillPrice ;
int tenderPrice;
int balance;

while(true){
cout <<"Enter Bill Total" <<endl;
cin >> totalBillPrice;
if(totalBillPrice>0){
    break;
}
cout<< "Error (enter positive number)" << endl;
}


while (true){
    cout << "Enter Tender Price"<<endl;
    cin >> tenderPrice;
   if(tenderPrice>=totalBillPrice){
       break;
   }else{
       cout<< "Error (enter price must more than or equal to bill total)" << endl;
   }
    
}

balance = tenderPrice - totalBillPrice;

if (balance==0){
    cout << "******BIll******"<<endl;
    cout <<"Total  = Rs:" <<totalBillPrice <<endl;
    cout << "Tender = RS:" << tenderPrice <<endl;
    cout <<"Balance = Rs:0" <<endl;
    cout << "***************"<<endl;
}else{
    int count = sizeof(allAvailbaleCoinAndNote)/sizeof(allAvailbaleCoinAndNote[0]) - 1;
    while(true){
        if(balance == 0 ){
    
            cout << coinAndNoteCount[0]<<endl;
            cout << coinAndNoteCount[1]<<endl;
            cout << coinAndNoteCount[2]<<endl;
            cout << coinAndNoteCount[3]<<endl;
            cout << coinAndNoteCount[4]<<endl;
            cout << coinAndNoteCount[5]<<endl;
            cout << coinAndNoteCount[6]<<endl;
            cout << coinAndNoteCount[7]<<endl;
            cout << coinAndNoteCount[8]<<endl;
            cout << coinAndNoteCount[9]<<endl;
            cout << coinAndNoteCount[10]<<endl;
            
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