#include <iostream>
#include <iomanip> 

using namespace std;

double calculateTax(int salary);
double TaxDeduction(int numberOfChildren,int salary);

int main(){
const int salaryArray[12] ={25000,50000,75000,100000,125000,150000,175000,200000,225000,250000,275000,300000} ;
for (int i = 0; i < 12; i++){
cout<<salaryArray[i]<<setw(10)<<calculateTax(salaryArray[i])<<setw(10)<<TaxDeduction(1,salaryArray[i])<<setw(10)<<TaxDeduction(2,salaryArray[i])<<setw(10)<<TaxDeduction(3,salaryArray[i])<<endl;

}


}

double calculateTax(int salary){
    double tax=0.0;
    const double taxForSecond50000 = (50000.0*5.0)/100.0;
    const double taxForThird50000 = (50000.0*10.0)/100.0;
    const double taxForFourth50000 = (50000.0*20.0)/100.0;
    const double taxForFifth50000 = (50000.0*35.0)/100.0;
    if(salary <=50000 ){
        return tax;
    }
    if(salary>50000){
        if(salary>250000){
          tax =tax+ ((salary -250000.0)*55.0)/100.0;
          tax= tax+taxForSecond50000+taxForThird50000+taxForFourth50000+taxForFifth50000;
          return tax;
        }
        if(salary>200000){
            tax =tax+ ((salary -200000.0)*35.0)/100.0;
            tax = tax + taxForSecond50000+taxForThird50000+taxForFourth50000;
            return tax;
        }
        if(salary>150000){
            tax =tax+ ((salary -150000.0)*20.0)/100.0;
            tax = tax + taxForSecond50000+taxForThird50000;
            return tax;
        }
        if(salary>100000){
            tax =tax+ ((salary -100000.0)*10.0)/100.0;
            tax = tax + taxForSecond50000;
            return tax;
        }
        if(salary>50000){
            tax =tax+ ((salary -50000.0)*10.0)/100.0;
            return tax;
        }
    }

    return -1.0;
    
}

double TaxDeduction(int numberOfChildren,int salary){
    double tax = calculateTax(salary);
    if(numberOfChildren==0){
        return tax;
    }
    if(numberOfChildren==1){
        return tax -(tax*5.0)/100.0;
    }
    if(numberOfChildren==2){
        return tax - (tax*13.0)/100.0;
    }
    if(numberOfChildren>=3){
        return tax -(tax*25.0)/100.0;
    }
    return -1.0;
}

