#include <iostream>
#include "composer.h"
#include "database.h"


void DisplayMenu() {
 
    cout << "Composer Menu Options" << endl;
    cout << "=====================" << endl;
    
    cout << "1: Add  Composer"<< endl;
    cout << "2: Remove Composer"<< endl;
    cout << "3: Get Composer"<< endl;
    cout << "4: Display All"<< endl;

}

int main() {
//     Composer composer;
//     composer.set_composer_genre("Slicker Than Your Average");
//     composer.set_first_name("David");
//     composer.set_last_name("Craig");
//     composer.set_fact("fact");
//     
//     composer.Display();
//     composer.set_ranking(5);
//     composer.Display();
    
    
       // Database database;
    
    
//     do {
//         int option = 0;
//         DisplayMenu();
//         
//         cin >> option;
//         
//         switch (option) {
//             
//             case 1:  database.AddComposer("Darlene", "Zchez",1,"Glory","3rd Album");
//             case 2: 
//         
//     } while (true);
//     
    
    Database database;
    database.AddComposer("Darlene", "Zchez",1,"Glory","3rd Album");
    database.AddComposer("David", "Craig",1,"Slicker Than Your Average","1st Album");
    database.AddComposer("Sade", "Adu",1,"My World","2nd Album");
    
    Composer cmpser = database.GetComposer("Adu");
    cmpser.Display();
    database.RemoveComposer(cmpser);
    
    Composer cmp2 = database.GetComposer("Craig");
    database.RemoveComposer(cmp2);
    
    database.AddComposer("Michael", "Igwe",1,"Lord of Grace","1st Album");
    cout << "Composer Details\n==============="<<endl;
    database.DisplayAll();
    
    return 0;
    
}



