/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   mediaNotas.h
 * Author: felipe
 *
 * Created on 14 de agosto de 2022, 09:42
 */

#ifndef MEDIANOTAS_H
#define MEDIANOTAS_H

class mediaNotas {
public:
    mediaNotas();
    mediaNotas(const mediaNotas& orig);
    virtual ~mediaNotas();
    
    float media;
    float lerNotas();
    float calcMedia(float n1,float n2,float n3);
private:

};

#endif /* MEDIANOTAS_H */

