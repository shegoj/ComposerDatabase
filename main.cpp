#include <iostream>
#include "composer.h"
#include "database.h"

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
    
    Database database;
    database.AddComposer("Darlene", "Zchez",1,"Glory","3rd Album");
    database.AddComposer("Sade", "Adu",1,"My World","2nd Album");
    database.AddComposer("David", "Craig",1,"Slicker Than Your Average","1st Album");
    

    cout << "Composer Details\n==============="<<endl;
    database.DisplayAll();
    return 0;
    
}
