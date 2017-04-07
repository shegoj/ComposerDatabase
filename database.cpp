#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "database.h"

using namespace std;

// ddatabase implementation

Database::Database()
{
    v_composers_.reserve(kMaxComposers);
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
    //composers_ [next_slot_++] = composer;
    v_composers_.push_back(composer);
    return;
}


Composer Database::GetComposer(const string &in_last_name)
{
    for (int j =0 ; j < next_slot_; ++j) 
    {
        if (v_composers_.at (j).last_name() == in_last_name)
            return v_composers_.at (j);
    }
    return v_composers_.at (0);
}


bool Database::RemoveComposer(Composer &composer)
{
    for (int j =0 ; j < v_composers_.size(); ++j) 
    {
        if (composer == v_composers_.at (j)) 
        {
            v_composers_.erase(v_composers_.begin() + j + 1);
            cout<< "Composer Deleted.."<<endl;
            return true;
        }
    }
    cout<< "Could not delete Composer.."<<endl;
    
    return false;
}


void  Database::DisplayAll()
{
    for (int j =0 ; j < v_composers_.size(); ++j) 
    {
        cout <<"["<< j + 1<<"]"<< endl;
        v_composers_.at(j).Display();
        //cout << endl;
    }
}





