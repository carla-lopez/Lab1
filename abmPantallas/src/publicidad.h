/*
 * publicidad.h
 *
 *  Created on: 29 abr. 2021
 *      Author: carla
 */

#ifndef PUBLICIDAD_H_
#define PUBLICIDAD_H_

typedef struct
{
    char cuit[50];
    char archivo[250];
    int dias;
    int isEmpty; ///1vacio - 0ocupado
    int idPublicidad; ///clave unica de identidad univoca
    int idPantalla;
}Publicidad;

int pub_initPublicidad(Publicidad* pPublicidad,int len);

int pub_addPub(Publicidad* pPublicidad,Pantalla* pPantalla,int len,char* msgE,int tries);
int pub_removePublicidad(Publicidad* pPublicidad, int len,char* msgE,int tries);

int pub_findPubById(Publicidad* pPublicidad, int len, int idE);
int pub_findFree(Publicidad* pPublicidad, int len);

int pub_getID (Publicidad* pPublicidad,int len,char* msgE,int tries);

void pub_printContrataciones2(Publicidad* lista,int len);

#endif // PUBLICIDAD_H_INCLUDED


