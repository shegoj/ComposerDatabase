#include <iostream>
#include "database.h"

using namespace std;

// ddatabase implementation

Database::Database()
{
}

int validate_input();

// Method to add composer to the database
void Database::AddComposer(string first_name, string last_name, int composer_yob_, string composer_genre_, string fact_)
{
    Composer composer;
    composer.set_composer_genre(composer_genre_);
    composer.set_first_name(first_name);
    composer.set_last_name(last_name);
    composer.set_fact(fact_);
    
    composers_ [next_slot_++] = composer;
    
    return;
    
}


void  Database::DisplayAll()
{
    for (int j =0 ; j < next_slot_; ++j) 
    {
        cout <<"["<< j + 1<<"]"<< endl;
        composers_ [j].Display();
        //cout << endl;
    }
}





