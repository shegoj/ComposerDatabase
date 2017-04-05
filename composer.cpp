#include <iostream>
#include "composer.h"

using namespace std;

// composer.h implementation

Composer::Composer(){
   
    ranking_ = kDefaultRanking;
}

Composer::~Composer(){
    
}

void Composer::set_first_name(string first_name)
{
    this->first_name_ = first_name;
}


void Composer::set_last_name(string last_name)
{
    this->last_name_ = last_name;
}

void Composer::set_composer_genre(string composer_genre)
{
    this->composer_genre_ = composer_genre;
}

string Composer::composer_genre()
{
    return composer_genre_;
}

void Composer::set_ranking(int ranking)
{
    this->ranking_ = ranking;
}

int Composer::ranking()
{
    return this->ranking_;
}

void Composer::set_fact(string fact)
{
    this->fact_ = fact;
}

string Composer::fact()
{
    return this->fact_;
}


void Composer::Demote(int decrease)
{
    ranking_ -= decrease;
    
    if (ranking_ > 1)
        ranking_ = 1 ;
    
}

void Composer::Promote(int increase)
{
    ranking_ += increase;
    
    if (ranking_ > 10)
        ranking_ = 10 ;
}


void Composer::Display()
{
    //cout << "Composer Details\n==============="<<endl;
    cout << "Name:    "<< this->first_name_ << " " << this->last_name_ << endl;
    cout << "Genre:   "<< this->composer_genre_<< endl;
    cout << "Ranking: " << this->ranking_<< endl;
    cout << endl;
}

