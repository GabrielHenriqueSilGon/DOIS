#ifndef PILHA_H 
#define PILHA_H

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
  
#define MAXTAM 1000

typedef struct Item 
 {
    int val;
    char valc;
    
 } Item;

typedef struct Pilha 
 {
    Item vet[MAXTAM];
    int top;
    int base;
    
 } Pilha;

void FPVazia (Pilha * p);
void PUSH (Pilha * p, Item d);
void POP (Pilha * p);
void PRemove (Pilha * p, Item d);
void PImprime (Pilha * p);

#endif