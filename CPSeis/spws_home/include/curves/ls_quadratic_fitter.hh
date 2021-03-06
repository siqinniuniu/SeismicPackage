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
// y' = y - y0
// x' = x - x0
// y' = a2 * x'**2 + a1 * x' + a0

#ifndef LS_QUADRATIC_FITTER_HH
#define LS_QUADRATIC_FITTER_HH

#include "curves/weighted_curve_fitter.hh"

class LSQuadraticFitter : public WeightedCurveFitter {

public:
  LSQuadraticFitter ();				// constructor

  virtual ~LSQuadraticFitter ();		// destructor

  virtual int doFit ();				// find slope and offset

  virtual int computeErrorStatistics ();	// find error statistics

  virtual int coefficientRangeDefault		// return def coef range
    (int index,					//   given index of coefficnt
     double *min,				//   rtnd minimum coef value
     double *max);				//   rtnd maximum coef value

protected:
  virtual double internalCoefficient		// rtn internal coefficient
    (int index);				//   given index of coefficnt

  virtual void initializeSums ();		// initialize the sums

  virtual void incrementSums			// increment the sums using
    (double x,					//   independent value
     double y);					//   dependent value

  virtual void decrementSums			// decrement the sums using
    (double x,					//   independent value
     double y);					//   dependent value

  virtual void redoCoefficientValues ();	// redo scaled coefficients

  double
    _sx_sum,					// sum of indpndnt scaled data
    _sy_sum,					// sum of dependnt scaled data
    _sx2_sum,					// sum of scaled indep sqrd
    _sxy_sum,					// sum of scaled products
    _sy2_sum,					// sum of scaled depend sqrd
    _sx2y_sum,					// sum of scaled products
    _sx3_sum,					// sum of scaled indep to 3rd
    _sx4_sum;					// sum of scaled indep to 4th

};

#endif
