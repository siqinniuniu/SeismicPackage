/*<license>
 -------------------------------------------------------------------------------
  Copyright (c) 2007 ConocoPhillips Company
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
 
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
 
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 -------------------------------------------------------------------------------
 </license>*/

//------------------------ vfbox_pick.hh --------------------------//
//------------------------ vfbox_pick.hh --------------------------//
//------------------------ vfbox_pick.hh --------------------------//

//               header file for the VfboxPick class
//                derived from the SLDatabox class
//                derived from the VfInform class
//                      subdirectory vfgui

 
#ifndef _VFBOX_PICK_HH_
#define _VFBOX_PICK_HH_

#include "sl/sl_databox.hh"
#include "vf/vf_inform.hh"


class VfboxPick  :  public SLDatabox, public VfInform
{

//----------------------------- data -------------------------------//
//----------------------------- data -------------------------------//
//----------------------------- data -------------------------------//

private:           // also protected manager() in VfInform.

//------------------------ functions ------------------------------//
//------------------------ functions ------------------------------//
//------------------------ functions ------------------------------//

public:          // constructors and destructor

  VfboxPick (SLDelay *slparent, char *name, VfManager *manager);
  virtual ~VfboxPick();

private:        // overriding VfInform base class.

  virtual void postNewActivePicks
                      (class VfDataset *dataset, long ifun, long nchng);

private:

  void makeHelper();

//---------------------- end of functions -----------------------//
//---------------------- end of functions -----------------------//
//---------------------- end of functions -----------------------//

} ;

#endif

//---------------------------- end --------------------------------//
//---------------------------- end --------------------------------//
//---------------------------- end --------------------------------//
