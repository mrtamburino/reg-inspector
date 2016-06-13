/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "riappmgr.hpp"
#include "stdlib.h"

RIAppMgr::RIAppMgr () : _ptrMainWFrame (NULL), 
                        _ptrCtrlFrame (NULL),
                        _ptrUICtrl (NULL)
{
}

RIAppMgr::~RIAppMgr()
{
  
  if (_ptrCtrlFrame)
    delete _ptrCtrlFrame;

  if (_ptrMainWFrame)
    delete _ptrMainWFrame;
  
  if (_ptrUICtrl)
    delete _ptrUICtrl;
  
}


void RIAppMgr::run (void)
{
   _ptrUICtrl = new UIController ();
   
   // Create main win
   _ptrMainWFrame = _ptrUICtrl->createMainWin ("Register Inspector", 0);
   _ptrMainWFrame->show ();

   // Create Control Frame
   _ptrCtrlFrame = _ptrUICtrl->createWin (3,78,18,1, 1);
   _ptrCtrlFrame->show ();
   
   mainLoop ();
   
}

void RIAppMgr::mainLoop (void)
{
  char cmd[11];
  _ptrUICtrl->readStr (_ptrCtrlFrame, 1,1,cmd, 10);
  
  getch();
}
