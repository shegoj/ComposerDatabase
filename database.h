
#include <iostream>
#include "composer.h"
#include <vector>

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
    bool RemoveComposer ( Composer &composer);
    // Display all composers in the database.
    
    Composer GetComposer(const string &in_last_name);
    void DisplayAll();
    // Sort database records by rank and then display all.
   // void DisplayByRank();
    
 private:
    // Store the individual records in an array.
    //Composer composers_ [kMaxComposers];
    vector <Composer> v_composers_ ;
    
    // Track the next slot in the array to place a new record.
    int next_slot_ = 0;
    
    
};

