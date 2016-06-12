/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ncurses.h"
#include "uicontroller.hpp"

Frame::Frame () : _ptrWin (NULL){}

Frame::~Frame ()
{
  if (_ptrWin)
    delwin(_ptrWin);
}


UIController::UIController () 
{
    	initscr();			/* Start curses mode 		  */
        cbreak();
        //noecho();
        
        start_color();
        init_pair(1, COLOR_CYAN, COLOR_BLACK);
        
        mvprintw(25, 0, "Prova");
	refresh();
        
        attron(COLOR_PAIR(1));
	printw("Press F1 to exit");
	refresh();

}

UIController::~UIController ()
{  
  endwin();
}


Frame* UIController::createWin ( unsigned char ucHeight_IN,
                                 unsigned char ucWidth_IN,
                                 unsigned char ucPosX_IN,
                                 unsigned char ucPosY_IN )
{
  
  Frame* newFrame = new Frame ();

  newFrame->_ptrWin = newwin (ucHeight_IN, ucWidth_IN, ucPosX_IN, ucPosY_IN);
  box(newFrame->_ptrWin, 0, 0);
  wrefresh(newFrame->_ptrWin);

  return newFrame;
}

Frame* UIController::createMainWin ( const char* ptrsTitle_IN)
{
  Frame* newFrame = createWin (25,80, 0,0);
  mvwprintw(newFrame->_ptrWin, 1,1, ptrsTitle_IN);
  
  wrefresh(newFrame->_ptrWin);
  
  return newFrame;
}

void UIController::readStr (Frame* ptrFrame_IN, 
                            unsigned char ucPosY_IN,
                            unsigned char ucPosX_IN,
                            char* ptrsBuffer_OUT, 
                            unsigned char ucBufferLen)
{

  mvwgetnstr( ptrFrame_IN->_ptrWin, 
              ucPosY_IN,
              ucPosX_IN,
              ptrsBuffer_OUT, 
              ucBufferLen);
}

void UIController::writeStr (Frame* ptrFrame_IN, 
                             unsigned char ucPosY_IN,
                             unsigned char ucPosX_IN, 
                             const char* ptrsString_IN)
{
  mvwprintw(ptrFrame_IN->_ptrWin, 
            ucPosY_IN,
            ucPosX_IN, 
            ptrsString_IN);
  wrefresh(ptrFrame_IN->_ptrWin);
}