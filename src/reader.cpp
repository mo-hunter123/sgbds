#include <iostream>
#include <string>
#include <fstream> 


using namespace std; 

#define INSTANCE_NAME = "../resources/InputDataDepot50_ExistedDeadheadsWithBusLines.txt"



int main(int argc, char const *argv[])
{
    char fileName[] = "../resources/InputDataDepot50_ExistedDeadheadsWithBusLines.txt"; 


    fstream instanceFile; 
    instanceFile.open(fileName, ios::in); 

    if(!instanceFile) {
        cout << "Error while openning file"; 
    } else {
        string word; 
        int i = 0; 
        while(instanceFile >> word){
            if(instanceFile.eof()) break; 
            cout << word << endl; 
        }
    }

    instanceFile.close(); 


    
    return 0;
}
