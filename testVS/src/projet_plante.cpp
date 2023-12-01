#include "projet_plante.h"

Multiplexer::Multiplexer(int A, int B, int C) {
    this->A = A;
    this->B = B;
    this->C = C;
}
void Multiplexer::setA(int a){
    this->A = a;
}
void Multiplexer::setB(int b){
    this->B = b;
}
void Multiplexer::setC(int c){
    this->C = c;
}
int Multiplexer::getA(){
    return this->A;
}
int Multiplexer::getB(){
    return this->B;
}
int Multiplexer::getC(){
    return this->C;
}
String Multiplexer::toString(){
    String msg;
    msg = msg + "---- Multiplexer ----\n";
    msg = msg + " channel\t INH C B A\n";
    msg = msg + "\t" + this->INH + " " + this->getA() + " " + this->getB() + " " +this->getC() + " ";
    return msg;
}
Multiplexer::~Multiplexer(){
    if(this)
        delete(this);
}
