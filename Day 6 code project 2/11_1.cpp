//Design a method that calculates the monthly cost to rent a roadside billboard. 
//Variables include the size of the billboard (S, M, or L for small, medium, or large) 
//and its location (H, M, or L for high-, medium-, or low-traffic areas). 
//The method should throw an exception if the size or location code is invalid.

#include <string>
#include <iostream>
using namespace std;

int main(){

    string choiceSize;
    string choiceTraffic;
    bool wrongChoices = true;
    void billboardMonthlyCost(string, string);    
    cout<<"Please select a size; S for small, M for medium, or L for large"<<endl;
    cin>> choiceSize;
    cout<<"Please select the traffic volume; H for high-traffic, M for medium traffic, and L for low traffic"<<endl;
    cin>> choiceTraffic;
    
    if(((choiceSize == "S") || (choiceSize == "M") || (choiceSize == "L"))&&((choiceTraffic == "H" || (choiceTraffic == "M") || choiceTraffic == "L"))){
        wrongChoices = false;
    }
    while(wrongChoices == true){
        cout<<"You have entered an incorrect choice"<<endl;
        cout<<"Please select a size; S for small, M for medium, or L for large"<<endl;
        cin>> choiceSize;
        cout<<"Please select the traffic volume; H for high-traffic, M for medium traffic, and L for low traffic"<<endl;
        cin>> choiceTraffic;
        if(((choiceSize == "S") || (choiceSize == "M") || (choiceSize == "L"))&&((choiceTraffic == "H" || (choiceTraffic == "M") || choiceTraffic == "L"))){
            wrongChoices = false;
        }
    }
    if(wrongChoices == false){      
        billboardMonthlyCost(choiceSize, choiceTraffic);
    }
    return 0;    
}

void billboardMonthlyCost(string size, string traffic){    
    const int OPTIONS = 3;
    int i;
    int j;    
    double rate;
    string sizeArray[OPTIONS] = {"S","M","L"};
    string trafficArray[OPTIONS] = {"H","M","L"};
    double rateArray[OPTIONS][OPTIONS]={900,500,200,1600,1200,600,2000,1500,800};
    
    for(i=0;i<OPTIONS;i++){
        for(j=0;j<OPTIONS;j++){
            if((size == sizeArray[i]) && (traffic == trafficArray[j])){
                    rate = rateArray[i][j];
            }                     
        }
    }
    cout<<"Your rate will be $"<<rate<<".";
    return;        
    }








