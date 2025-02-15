#include <iostream>

using namespace std;

int myArray[30];
int numElem = 0;
int maxElem = 20;

void traverseArray(){
    cout << "Showing elements in my array\n";
    for(int i= 0; i< maxElem; i++){
        cout<< to_string(myArray[i]) + " | ";
    }
}

string insertAtTheEnd(int num){
   if(numElem != maxElem){
        myArray[numElem] = num;
        numElem++;
        return "An element is successfully insert at the end! \n";
   }

return "The array is full. Please remove elements before inserting new one. \n";
 
}

string insertAtTheBeginning(int num){
    if(numElem != maxElem){
        for(int i = numElem; i >= 0; i--){
            myArray[i+1] = myArray[i];
            
        }
        
        myArray[0] = num;
        numElem++;
        return "An element is successfully inserted at the beginning! \n";
        
    }

    return "The array is full. Please remove elements before inserting new one. \n";
 
}

string insertAtTheGivenPosition(int num, int ElementAfter){
    if(numElem != maxElem){
        int position;
        for(int i = 0; i<= maxElem; i++){
            if(myArray[i] == ElementAfter){
                position = i;
                break;
              
        }   
    }
    for(int i = numElem; i>=position; i--){
        myArray[i+1] = myArray[i];
        
    }
    myArray[position + 1] = num;
    numElem++;
    return "An element is successfully inserted at the specified location! \n";
  }

return "The array is full. Please remove elements before inserting new one. \n";

}
int main(){
 

 insertAtTheEnd(3);
 insertAtTheEnd(7);
 insertAtTheEnd(9);
 insertAtTheEnd(11);
 insertAtTheEnd(15);
 

traverseArray();



    



return 0;
 

}