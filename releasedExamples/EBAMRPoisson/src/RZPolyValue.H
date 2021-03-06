#ifdef CH_LANG_CC
/*
 *      _______              __
 *     / ___/ /  ___  __ _  / /  ___
 *    / /__/ _ \/ _ \/  V \/ _ \/ _ \
 *    \___/_//_/\___/_/_/_/_.__/\___/
 *    Please refer to Copyright.txt, in Chombo's root directory.
 */
#endif

#ifndef _RZPOLYVALUE_H_
#define _RZPOLYVALUE_H_

#include "RealVect.H"

#include "BaseBCValue.H"
#include "MayDay.H"
#include "UsingNamespace.H"

//gives phi for poisson eqn based on
/**
   phi = r^3, rho  = 9*r.   Only makes sense in 2d, RZ coords.
 */
class RZPolyValue: public BaseBCValue
{
public:
  ///
  RZPolyValue();

  ///
  virtual ~RZPolyValue();

  ///
  virtual Real value(const RealVect& a_point,
                     const RealVect& a_normal,
                     const Real&     a_time,
                     const int&      a_comp) const;

private:
};

#endif
