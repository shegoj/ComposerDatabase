#ifndef TIME_H
#define TIME_H

#include <iostream>
// composer.h olusegun ojewale
// Description: The class for a Composer record
// Default ranking is set to 10

using namespace std;

const int kDefaultRanking = 10;

class Composer {
public:
    // constructor
    Composer ();
    // destructor
    ~Composer ();
    
    // mutator and accessors
    void set_first_name (string first_name);
    string first_name();
    void set_last_name (string last_name);
    string last_name();
    void set_composer_yob (string composer_yob);
    int composer_yob ();
    void set_composer_genre (string composer_genre);
    string composer_genre ();
    void set_fact (string fact);
    string fact();
    void set_ranking (int ranking);
    int ranking();
    
    // Methods
    // increase ranking
    void Promote (int increase);
    // decrease ranking
    void Demote (int decrease);
    // Display composer details
    void Display ();
    
    // Equal operator
    //riend bool operator== (const Composer &c1, const Composer &c2);
    friend bool operator== (const Composer &c1, const Composer &c2);
    
    
private:
  string first_name_;
  string last_name_;
  int composer_yob_; // year of birth
  string composer_genre_; // baroque, classical, romantic, etc.
  string fact_;
  int ranking_;
  
};

#endif
