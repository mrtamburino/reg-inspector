/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   uicontroller.hpp
 * Author: ale
 *
 * Created on June 12, 2016, 6:56 PM
 */

#ifndef UICONTROLLER_HPP
#define UICONTROLLER_HPP

#include "ncurses.h"

class Frame
{
public:
    Frame ();
    ~Frame ();
    
    WINDOW * _ptrWin;
    
    void show (void);
};

class UIController
{
public:
    UIController ();
    ~UIController ();

    Frame* createWin ( unsigned char ucHeight_IN,
                       unsigned char ucWidth_IN,
                       unsigned char ucPosX_IN,
                       unsigned char ucPosY_IN,
                       unsigned char ucBorder_IN);
    
    Frame* createMainWin ( const char* ptrsTitle_IN, unsigned char ucBorder_IN);
    
    void readStr (Frame*, unsigned char,unsigned char, char*, unsigned char);
    void writeStr (Frame*, unsigned char,unsigned char, const char*);
    
private:

};

#endif /* UICONTROLLER_HPP */

