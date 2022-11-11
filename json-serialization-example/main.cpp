#include "IClient.hpp"
#include "Client.hpp"
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
//#include "ClientManager.hpp"
#include <fstream> 


int main()
{
    ifstream MyReadFile("filename.txt");
    json storage;

    if(MyReadFile.good()){
        MyReadFile >> storage;

        MyReadFile.close();
    }
    
    if(storage.empty()){
        Client c(1, "Agustin2", 41927655, "a@a.com");
        
        storage["id"] = c.getId();
        storage["name"] = c.getName();
        storage["dni"] = c.getDNI();
        storage["email"] = c.getEmail();  
    }

    ofstream MyFile("json_example.json");
    MyFile << setw(4) << storage << endl; 
    MyFile.close();


    //cout << storage["name"] << endl; 
    return 0;
}