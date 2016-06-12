/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   riappmgr.hpp
 * Author: ale
 *
 * Created on June 12, 2016, 8:05 PM
 */

#ifndef RIAPPMGR_HPP
#define RIAPPMGR_HPP

#include "uicontroller.hpp"
#include "reginspector.hpp"

#define MAX_REGISTER_SIZE 4

class RIAppMgr
{
public:
    RIAppMgr ();
    ~RIAppMgr ();
    
    void run (void);
private:
    Frame* _ptrMainWFrame;
    Frame* _ptrCtrlFrame;
    Frame* _ptrNotifyFrame;
    
    Frame* _ptrDetailFrames[MAX_REGISTER_SIZE];
    
    UIController* _ptrUICtrl;
    
    void mainLoop (void);
    void createCtrlFrame (void);
    void createNotifyFrame (void);
    
    void writeNotify (const char*);
    
    void clearCtrlFrame (void);
};

#endif /* RIAPPMGR_HPP */

