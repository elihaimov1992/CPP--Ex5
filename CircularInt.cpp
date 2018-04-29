#include <iostream>

#include "CircularInt.hpp"

#include <string>



using namespace std;



CircularInt::CircularInt(int start, int end){

    this->start = start;

    this->end = end;

    curHour = start;

}



CircularInt::CircularInt(int start, int end, int curHour){

    this->start = start;

    this->end = end;

    this->curHour = curHour;

    this->getInRange();

}





int CircularInt::getStart(){

    return start;

}



int CircularInt::getEnd(){

    return end;

}



int CircularInt::getCurHour(){

    return curHour;

}



void CircularInt::getInRange(){

    while(curHour < start || curHour > end){

        if(curHour > end){

            curHour -= (end-(start-1));

        }

        else if(curHour < start){

            curHour += (end-(start-1));

        }

    }

}



void CircularInt::setCurHour(int hour){

    curHour = hour;

}





ostream& operator<<(ostream& os, const CircularInt& circ) {  

    os << circ.curHour;

    return os;  

}



istream& operator>>(istream& is, CircularInt& circ) {  

    is >> circ.curHour;

    circ.getInRange();

    return is;  

}



CircularInt& CircularInt::operator+= (double add){ 

    curHour = curHour + add;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator+= (CircularInt& circ){ 

    curHour = curHour + circ.getCurHour();

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator++ (){ 

    curHour++;

    this->getInRange();

    return *this;

}



CircularInt CircularInt::operator++ (int){ 

    CircularInt temp {start, end, curHour};

    curHour++;

    this->getInRange();

    return temp;

}



double CircularInt::operator+ (CircularInt& circ){

    CircularInt temp {start, end, curHour};

    int ans = curHour + circ.getCurHour();

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double CircularInt::operator+ (double a){

    CircularInt temp {start, end, curHour};

    int ans = curHour + a;

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



CircularInt& CircularInt::operator-= (double sub){ 

    curHour = curHour - sub;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator-= (CircularInt& circ){ 

    curHour = curHour - circ.getCurHour();

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator-- (){ 

    curHour--;

    this->getInRange();

    return *this;

}



CircularInt CircularInt::operator-- (int){ 

    CircularInt temp {start, end, curHour};

    curHour--;

    this->getInRange();

    return temp;

}



double CircularInt::operator- (){

    CircularInt temp {start, end, curHour};

    int ans = -curHour;

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double CircularInt::operator- (CircularInt& circ){

    CircularInt temp {start, end, curHour};

    int ans = curHour - circ.getCurHour();

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double CircularInt::operator- (double a){

    CircularInt temp {start, end, curHour};

    int ans = curHour - a;

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



CircularInt& CircularInt::operator*= (double mult){ 

    curHour = curHour * mult;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator*= (CircularInt& circ){ 

    curHour = curHour * circ.getCurHour();

    this->getInRange();

    return *this;

}



double CircularInt::operator* (double mult){

    CircularInt temp {start, end, curHour};

    int ans = curHour * mult;

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double CircularInt::operator* (CircularInt& circ){

    CircularInt temp {start, end, curHour};

    int ans = curHour * circ.getCurHour();

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



CircularInt& CircularInt::operator/= (int divi){ 

    if(curHour % divi != 0){

        string message = "There is no number x in {" + to_string(start) + "," 

                       + to_string(end) +"} such that x*" + to_string(divi) + "=" + to_string(curHour);

        throw message;

    }

    else{

        curHour = curHour / divi;

        this->getInRange();

        return *this;

    }

}



double CircularInt::operator/ (CircularInt& circ){

    

    if(curHour % circ.getCurHour() != 0){

        string message = "There is no number x in {" + to_string(start) + "," 

                       + to_string(end) +"} such that x*" + to_string(circ.getCurHour()) + "=" + to_string(curHour);

        throw message;

    }

    else{

        CircularInt temp {start, end, curHour};

        int ans = curHour / circ.getCurHour();

        temp.setCurHour(ans);

        temp.getInRange();

        ans = temp.getCurHour();

        return ans;

    }

}



double CircularInt::operator/ (int divi){ 

    if(curHour % divi != 0){

        string message = "There is no number x in {" + to_string(start) + "," 

                       + to_string(end) +"} such that x*" + to_string(divi) + "=" + to_string(curHour);

        throw message;

    }

    else{

        CircularInt temp {start, end, curHour};

        int ans = curHour / divi;

        temp.setCurHour(ans);

        temp.getInRange();

        ans = temp.getCurHour();

        return ans;

    }

}



CircularInt& CircularInt::operator= (CircularInt& circ){

    curHour = circ.curHour;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator= (double hour){

    curHour = hour;

    this->getInRange();

    return *this;

}



bool CircularInt::operator== (CircularInt& circ){

    return ( ( curHour == circ.getCurHour() ) && ( start == circ.getStart() ) && ( end == circ.getEnd() ) );

}



bool CircularInt::operator== (double a){

    return curHour == getToRange(a, *this);

}



double CircularInt::operator% (CircularInt& circ){

    CircularInt temp {start, end, curHour};

    int ans = (curHour) % (circ.getCurHour());

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double CircularInt::operator% (int a){

    return curHour % a;

}



CircularInt& CircularInt::operator%= (int a){ 

    curHour = curHour % a;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator%= (CircularInt& circ){ 

    curHour = curHour % circ.getCurHour();

    this->getInRange();

    return *this;

}



bool CircularInt::operator!= (CircularInt& circ){

    return ( ( curHour != circ.getCurHour() ) || ( start == circ.getStart() ) || ( end == circ.getEnd() ) );

}



bool CircularInt::operator!= (double a){

    return curHour != getToRange(a, *this);

}



bool CircularInt::operator! (){

    return !curHour;

}



bool CircularInt::operator> (CircularInt& circ){

    return curHour > circ.getCurHour();

}



bool CircularInt::operator> (double a){

    return curHour > getToRange(a, *this);

}



bool CircularInt::operator>= (CircularInt& circ){

    return curHour >= circ.getCurHour();

}



bool CircularInt::operator>= (double a){

    return curHour >= getToRange(a, *this);

}



bool CircularInt::operator< (CircularInt& circ){

    return curHour < circ.getCurHour();

}



bool CircularInt::operator< (double a){

    return curHour < getToRange(a, *this);

}



bool CircularInt::operator<= (CircularInt& circ){

    return curHour <= circ.getCurHour();

}



bool CircularInt::operator<= (double a){

    return curHour <= getToRange(a, *this);

}



bool CircularInt::operator&& (CircularInt& circ){

    return curHour && circ.getCurHour();

}



bool CircularInt::operator&& (double a){

    return curHour && a;

}



bool CircularInt::operator|| (CircularInt& circ){

    return curHour || circ.getCurHour();

}



bool CircularInt::operator|| (double a){

    return curHour || a;

}



int CircularInt::operator~ (){

    return ~curHour;

}



int CircularInt::operator& (CircularInt& circ){

    return curHour & circ.getCurHour();

}



int CircularInt::operator& (int a){

    return curHour & a;

}



CircularInt& CircularInt::operator&= (int a){ 

    curHour = curHour & a;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator&= (CircularInt& circ){ 

    curHour = curHour & circ.getCurHour();

    this->getInRange();

    return *this;

}



int CircularInt::operator| (CircularInt& circ){

    return curHour | circ.getCurHour();

}



int CircularInt::operator| (int a){

    return curHour | a;

}



CircularInt& CircularInt::operator|= (int a){ 

    curHour = curHour | a;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator|= (CircularInt& circ){ 

    curHour = curHour | circ.getCurHour();

    this->getInRange();

    return *this;

}



int CircularInt::operator^ (CircularInt& circ){

    return curHour ^ circ.getCurHour();

}



int CircularInt::operator^ (int a){

    return curHour ^ a;

}



CircularInt& CircularInt::operator^= (int a){ 

    curHour = curHour ^ a;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator^= (CircularInt& circ){ 

    curHour = curHour ^ circ.getCurHour();

    this->getInRange();

    return *this;

}



int CircularInt::operator<< (CircularInt& circ){

    return curHour << circ.getCurHour();

}



int CircularInt::operator<< (int shift){

    return curHour << shift;

}



CircularInt& CircularInt::operator<<= (int a){ 

    curHour = curHour << a;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator<<= (CircularInt& circ){ 

    curHour = curHour << circ.getCurHour();

    this->getInRange();

    return *this;

}



int CircularInt::operator>> (CircularInt& circ){

    return curHour >> circ.getCurHour();

}



int CircularInt::operator>> (int shift){

    return curHour >> shift;

}



CircularInt& CircularInt::operator>>= (int a){ 

    curHour = curHour >> a;

    this->getInRange();

    return *this;

}



CircularInt& CircularInt::operator>>= (CircularInt& circ){ 

    curHour = curHour >> circ.getCurHour();

    this->getInRange();

    return *this;

}







/////////////////////////////////////////////

////NEED TO ADD MORE FUNCTIONS LIKE THESE FOR OTHER OPERATORS:

//////Ex: 1 + hour, 1 - hour, 1 * hour, 1 << hour ....



int getToRange(double a, CircularInt& circ){

    int start = circ.getStart();

    int end = circ.getEnd();

    while(a < start || a > end){

        if(a > end){

            a -= (end-(start-1));

        }

        else if(a < start){

            a += (end-(start-1));

        }

    }

    return a;

}



double operator- (double base, CircularInt& circ){ 

    CircularInt temp {circ.getStart(), circ.getEnd(), circ.getCurHour()};

    int ans = base - (circ.getCurHour());

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double operator+ (double base, CircularInt& circ){ 

    CircularInt temp {circ.getStart(), circ.getEnd(), circ.getCurHour()};

    int ans = base + (circ.getCurHour());

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



double operator* (double base, CircularInt& circ){ 

    CircularInt temp {circ.getStart(), circ.getEnd(), circ.getCurHour()};

    int ans = base * (circ.getCurHour());

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



int operator/ (int base, CircularInt& circ){ 

    CircularInt temp {circ.getStart(), circ.getEnd(), circ.getCurHour()};

    int ans = base / (circ.getCurHour());

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

}



int operator% (int base, CircularInt& circ){ 

    CircularInt temp {circ.getStart(), circ.getEnd(), circ.getCurHour()};

    int ans = base %(circ.getCurHour());

    temp.setCurHour(ans);

    temp.getInRange();

    ans = temp.getCurHour();

    return ans;

} 



bool operator> (double base, CircularInt& circ){ 

    return getToRange(base, circ) > circ.getCurHour();

}



bool operator< (double base, CircularInt& circ){ 

    return getToRange(base, circ) < circ.getCurHour();

}



bool operator>= (double base, CircularInt& circ){ 

    return getToRange(base, circ) >= circ.getCurHour();

}



bool operator<= (double base, CircularInt& circ){ 

    return getToRange(base, circ) <= circ.getCurHour();

}



bool operator== (double base, CircularInt& circ){ 

    return getToRange(base, circ) == circ.getCurHour();

}



bool operator!= (double base, CircularInt& circ){ 

    return getToRange(base, circ) != circ.getCurHour();

}