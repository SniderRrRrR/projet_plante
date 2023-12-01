#pragma once // info preprog
#include <WString.h>
using namespace std;

/**
* \class Multiplexer
* \brief Define and implements the CD4051BE
* Multiplexer.
*
* \version: 1.0
*/
class Multiplexer {
    private:
        int A; /** Define the third input state*/
        int B; /** Define the second input state*/
        int C; /** Define the first input state*/
        int INH = 0; /** Enable the use of the channel */
        /** example: C=0, B=1, A=0 => 2 */
    public:
        /** 
         * \fn Multiplexer(int =0,int =0,int =0);
         * \brief default constructor
         * 
         * \param X : represent the state A.
         * \param Y : represent the state B.
         * \param Z : represent the state C.
        */
        Multiplexer(int X=0,int Y=0,int Z=0);

        /** 
         * \fn virtual ~Multiplexer()
         * \brief Multiplexer destructor.
        */
        virtual ~Multiplexer(); 
        /** accessors */
        /**
         * \fn void setA(int A)
         * \brief Sets the new value of A.
         * 
         * \param A: the new int value of A
        */
        void setA(int A);
        /**
         * \fn void setB(int B)
         * \brief Sets the new value of B.
         * 
         * \param B: the new int value of B
        */
        void setB(int B);
        /**
         * \fn void setC(int C)
         * \brief Sets the new value of C.
         * 
         * \param C: the new int value of C
        */
        void setC(int C);

        /**
         * \fn int getA()
         * \brief Gets the value of A
         * 
         * \return the value of A.
        */
        int getA();
        /**
         * \fn int getB()
         * \brief Gets the value of B
         * 
         * \return the value of B.
        */
        int getB();
        /**
         * \fn int getC()
         * \brief Gets the value of C
         * 
         * \return the value of C.
        */
        int getC();

        /**
         * \fn int toString()
         * \brief returns all multiplixer's states.
         * 
         * \return the string of multiplexer's state.
        */
        String toString();
};