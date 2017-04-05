
#include <iostream>
#include "composer.h"

using namespace std;

//max of Composer to hold
const int kMaxComposers = 20;

class Database {
public:
    Database ();
   // ~ Database();
        
    //Methods
    void AddComposer (string first_name, string last_name,
                              int composer_yob_,string composer_genre_,
                            string fact_);
    void RemoveComposer ( Composer & composer);
    // Display all composers in the database.
    
    Composer& GetComposer(string in_last_name);
    void DisplayAll();
    // Sort database records by rank and then display all.
   // void DisplayByRank();
    
 private:
    // Store the individual records in an array.
    Composer composers_ [kMaxComposers];
    // Track the next slot in the array to place a new record.
    int next_slot_ = 0;
    
    
};

