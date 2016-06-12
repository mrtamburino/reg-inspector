/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "riappmgr.hpp"
#include "stdlib.h"

RIAppMgr::RIAppMgr () : _ptrMainWFrame (NULL), 
                        _ptrCtrlFrame (NULL),
                        _ptrNotifyFrame (NULL),
                        _ptrUICtrl (NULL)
{
}

RIAppMgr::~RIAppMgr()
{
  
  if (_ptrCtrlFrame)
    delete _ptrCtrlFrame;
  
  if (_ptrNotifyFrame)
    delete _ptrNotifyFrame;
  
  if (_ptrMainWFrame)
    delete _ptrMainWFrame;
  
  if (_ptrUICtrl)
    delete _ptrUICtrl;
  
}

void RIAppMgr::createCtrlFrame (void)
{
  _ptrCtrlFrame = _ptrUICtrl->createWin (3,78,18,1);
}

void RIAppMgr::createNotifyFrame (void)
{
  _ptrNotifyFrame = _ptrUICtrl->createWin (3,78,21,1);
}

void RIAppMgr::run (void)
{
   _ptrUICtrl = new UIController ();
   
   // Create main win
   _ptrMainWFrame = _ptrUICtrl->createMainWin ("Register Inspector");

   // Create Control Frame
   createCtrlFrame ();
   
   createNotifyFrame ();
   
   mainLoop ();
   
}

void RIAppMgr::mainLoop (void)
{
  char cmd[11];
  _ptrUICtrl->readStr (_ptrCtrlFrame, 1,1,cmd, 10);
  
  writeNotify (cmd);
  
  getch();
}

void RIAppMgr::writeNotify(const char* ptrcString_IN)
{
  _ptrUICtrl->writeStr (_ptrNotifyFrame, 1,1, "              ");
  _ptrUICtrl->writeStr (_ptrNotifyFrame, 1,1, ptrcString_IN);
}
