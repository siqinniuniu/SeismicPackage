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
/*=============================================================================
| Header file used in XCreatePixmapfromBitmap to label widgets                |
| with arrows. Application should check pixmap creation status since pixmap   |
| generation will use server graphic memory resources. The arrows included    |
| here were generated using the X utility called bitmap. The static char array|
| name indicates the direction of the individual arrow.                       |
|                     Michael L. Sherrill 10/93                               |
|                                                                             |
|                                                                             |
|Example of installing an up arrow "north_bits" :                             |
|                                                                             |
|your_pixmap = XCreatePixmapFromBitmapData(display, window, north_bits,       |
|                                          arrow_width, arrow_height,         |
|                                          widgetforeground, widgetbackground,|
|                                           DefaultDepth(display,screen) );   |
|                                                                             |
| XtVaSetValues(your_widget, XmNlabelType,   XmPIXMAP,                        |
|                            XmNlabelPixmap, your_pixmap, NULL);              |
|                                                                             |
==============================================================================*/


#define arrow_width 30
#define arrow_height 30


static char  north_bits[] = {
   0x00, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xf0, 0x03, 0x00,
   0x00, 0xf8, 0x07, 0x00, 0x00, 0xfc, 0x0f, 0x00, 0x00, 0xfe, 0x1f, 0x00,
   0x00, 0xff, 0x3f, 0x00, 0x80, 0xff, 0x7f, 0x00, 0xc0, 0xef, 0xfd, 0x00,
   0xe0, 0xe7, 0xf9, 0x01, 0xf0, 0xe3, 0xf1, 0x03, 0xf8, 0xe1, 0xe1, 0x07,
   0xfc, 0xe0, 0xc1, 0x0f, 0x7e, 0xe0, 0x81, 0x1f, 0x3f, 0xe0, 0x01, 0x3f,
   0x1f, 0xe0, 0x01, 0x3e, 0x0e, 0xe0, 0x01, 0x1c, 0x04, 0xe0, 0x01, 0x08,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00};

static char south_bits[] = {
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00,
   0x04, 0xe0, 0x01, 0x08, 0x0e, 0xe0, 0x01, 0x1c, 0x1f, 0xe0, 0x01, 0x3e,
   0x3f, 0xe0, 0x01, 0x3f, 0x7e, 0xe0, 0x81, 0x1f, 0xfc, 0xe0, 0xc1, 0x0f,
   0xf8, 0xe1, 0xe1, 0x07, 0xf0, 0xe3, 0xf1, 0x03, 0xe0, 0xe7, 0xf9, 0x01,
   0xc0, 0xef, 0xfd, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0xff, 0x3f, 0x00,
   0x00, 0xfe, 0x1f, 0x00, 0x00, 0xfc, 0x0f, 0x00, 0x00, 0xf8, 0x07, 0x00,
   0x00, 0xf0, 0x03, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xc0, 0x00, 0x00};

static char east_bits[] = {
   0x00, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xf0, 0x03, 0x00,
   0x00, 0xf0, 0x07, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0xc0, 0x1f, 0x00,
   0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0xfe, 0x00,
   0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0xf0, 0x07,
   0x00, 0x00, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x3f,
   0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0xe0, 0x0f,
   0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0xfc, 0x01,
   0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x80, 0x3f, 0x00,
   0x00, 0xc0, 0x1f, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0xf0, 0x07, 0x00,
   0x00, 0xf0, 0x03, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xc0, 0x00, 0x00};

static char west_bits[] = {
   0x00, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xf0, 0x03, 0x00,
   0x00, 0xf8, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00,
   0x00, 0x3f, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00,
   0xe0, 0x07, 0x00, 0x00, 0xf0, 0x03, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00,
   0xfc, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x3f,
   0xff, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x3f, 0xfc, 0x00, 0x00, 0x00,
   0xf8, 0x01, 0x00, 0x00, 0xf0, 0x03, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00,
   0xc0, 0x0f, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00,
   0x00, 0x7e, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00,
   0x00, 0xf0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xc0, 0x00, 0x00};

static char ne_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x1f,
   0xff, 0xff, 0xff, 0x1f, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0xe0, 0x1f,
   0x00, 0x00, 0xf0, 0x1f, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0xfc, 0x1f,
   0x00, 0x00, 0xfe, 0x1e, 0x00, 0x00, 0x7f, 0x1e, 0x00, 0x80, 0x3f, 0x1e,
   0x00, 0xc0, 0x1f, 0x1e, 0x00, 0xe0, 0x0f, 0x1e, 0x00, 0xf0, 0x07, 0x1e,
   0x00, 0xf8, 0x03, 0x1e, 0x00, 0xfc, 0x01, 0x1e, 0x00, 0xfe, 0x00, 0x1e,
   0x00, 0x7f, 0x00, 0x1e, 0x80, 0x3f, 0x00, 0x1e, 0xc0, 0x1f, 0x00, 0x1e,
   0xe0, 0x0f, 0x00, 0x1e, 0xf0, 0x07, 0x00, 0x1e, 0xf8, 0x03, 0x00, 0x1e,
   0xfc, 0x01, 0x00, 0x1e, 0xfe, 0x00, 0x00, 0x1e, 0x7f, 0x00, 0x00, 0x1e,
   0x3f, 0x00, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x1e, 0x0c, 0x00, 0x00, 0x0c};

static char se_bits[] = {
   0x0c, 0x00, 0x00, 0x0c, 0x1e, 0x00, 0x00, 0x1e, 0x3f, 0x00, 0x00, 0x1e,
   0x7f, 0x00, 0x00, 0x1e, 0xfe, 0x00, 0x00, 0x1e, 0xfc, 0x01, 0x00, 0x1e,
   0xf8, 0x03, 0x00, 0x1e, 0xf0, 0x07, 0x00, 0x1e, 0xe0, 0x0f, 0x00, 0x1e,
   0xc0, 0x1f, 0x00, 0x1e, 0x80, 0x3f, 0x00, 0x1e, 0x00, 0x7f, 0x00, 0x1e,
   0x00, 0xfe, 0x00, 0x1e, 0x00, 0xfc, 0x01, 0x1e, 0x00, 0xf8, 0x03, 0x1e,
   0x00, 0xf0, 0x07, 0x1e, 0x00, 0xe0, 0x0f, 0x1e, 0x00, 0xc0, 0x1f, 0x1e,
   0x00, 0x80, 0x3f, 0x1e, 0x00, 0x00, 0x7f, 0x1e, 0x00, 0x00, 0xfe, 0x1e,
   0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0xf0, 0x1f,
   0x00, 0x00, 0xe0, 0x1f, 0xfe, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x1f,
   0xff, 0xff, 0xff, 0x1f, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00};

static char sw_bits[] = {
   0x0c, 0x00, 0x00, 0x0c, 0x1e, 0x00, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x3f,
   0x1e, 0x00, 0x80, 0x3f, 0x1e, 0x00, 0xc0, 0x1f, 0x1e, 0x00, 0xe0, 0x0f,
   0x1e, 0x00, 0xf0, 0x07, 0x1e, 0x00, 0xf8, 0x03, 0x1e, 0x00, 0xfc, 0x01,
   0x1e, 0x00, 0xfe, 0x00, 0x1e, 0x00, 0x7f, 0x00, 0x1e, 0x80, 0x3f, 0x00,
   0x1e, 0xc0, 0x1f, 0x00, 0x1e, 0xe0, 0x0f, 0x00, 0x1e, 0xf0, 0x07, 0x00,
   0x1e, 0xf8, 0x03, 0x00, 0x1e, 0xfc, 0x01, 0x00, 0x1e, 0xfe, 0x00, 0x00,
   0x1e, 0x7f, 0x00, 0x00, 0x9e, 0x3f, 0x00, 0x00, 0xde, 0x1f, 0x00, 0x00,
   0xfe, 0x0f, 0x00, 0x00, 0xfe, 0x07, 0x00, 0x00, 0xfe, 0x03, 0x00, 0x00,
   0xfe, 0x01, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x1f, 0xfe, 0xff, 0xff, 0x3f,
   0xfe, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00};

static char nw_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x1f, 0xfe, 0xff, 0xff, 0x3f,
   0xfe, 0xff, 0xff, 0x3f, 0xfe, 0xff, 0xff, 0x1f, 0xfe, 0x01, 0x00, 0x00,
   0xfe, 0x03, 0x00, 0x00, 0xfe, 0x07, 0x00, 0x00, 0xfe, 0x0f, 0x00, 0x00,
   0xde, 0x1f, 0x00, 0x00, 0x9e, 0x3f, 0x00, 0x00, 0x1e, 0x7f, 0x00, 0x00,
   0x1e, 0xfe, 0x00, 0x00, 0x1e, 0xfc, 0x01, 0x00, 0x1e, 0xf8, 0x03, 0x00,
   0x1e, 0xf0, 0x07, 0x00, 0x1e, 0xe0, 0x0f, 0x00, 0x1e, 0xc0, 0x1f, 0x00,
   0x1e, 0x80, 0x3f, 0x00, 0x1e, 0x00, 0x7f, 0x00, 0x1e, 0x00, 0xfe, 0x00,
   0x1e, 0x00, 0xfc, 0x01, 0x1e, 0x00, 0xf8, 0x03, 0x1e, 0x00, 0xf0, 0x07,
   0x1e, 0x00, 0xe0, 0x0f, 0x1e, 0x00, 0xc0, 0x1f, 0x1e, 0x00, 0x80, 0x3f,
   0x1e, 0x00, 0x00, 0x3f, 0x1e, 0x00, 0x00, 0x1e, 0x0c, 0x00, 0x00, 0x0c};


