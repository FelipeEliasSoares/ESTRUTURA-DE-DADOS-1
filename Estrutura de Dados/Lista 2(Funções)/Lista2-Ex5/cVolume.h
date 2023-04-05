/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cVolume.h
 * Author: felipe
 *
 * Created on 5 de setembro de 2022, 10:03
 */

#ifndef CVOLUME_H
#define CVOLUME_H

class cVolume {
public:
    cVolume();
    cVolume(const cVolume& orig);
    virtual ~cVolume();
    
    void LerRaio();
    float calcVolume(float raio);
private:

};

#endif /* CVOLUME_H */

