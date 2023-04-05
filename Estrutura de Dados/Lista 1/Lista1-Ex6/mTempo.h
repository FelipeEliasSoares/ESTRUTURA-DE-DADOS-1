/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   mTempo.h
 * Author: felipe
 *
 * Created on 14 de agosto de 2022, 08:26
 */

#ifndef MTEMPO_H
#define MTEMPO_H

class mTempo {
public:
    mTempo();
    mTempo(const mTempo& orig);
    virtual ~mTempo();
   
    int s;
    void lerDados();
    void calcTempo();
    
private:

};

#endif /* MTEMPO_H */

