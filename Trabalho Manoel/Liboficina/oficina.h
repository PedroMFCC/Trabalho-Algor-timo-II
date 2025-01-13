#ifndef OFICINA_H
#define OFICINA_H

typedef struct{
    char nomeofic[40];
    char cnpjofic[20];
    char ruaofic[50];
    char telefofic[22];
    char emailofic[40];
    float lucro;
    
}dadooficina;

void regoficinabin();
void regoficinatxt();
void regoficinapath();
void regoficina();

void leroficbin();
void lerofictxt();
void lerofic();

void editofic();

void resetofic();  

void removeroficbin();
void removerofictxt();
void removerofic();

#endif