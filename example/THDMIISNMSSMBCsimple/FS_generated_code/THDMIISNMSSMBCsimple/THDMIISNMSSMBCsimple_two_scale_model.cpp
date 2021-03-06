// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

// File generated at Thu 7 Nov 2019 18:53:57

/**
 * @file THDMIISNMSSMBCsimple_two_scale_model.cpp
 * @brief implementation of the THDMIISNMSSMBCsimple model class
 *
 * Contains the definition of the THDMIISNMSSMBCsimple model class methods
 * which solve EWSB and calculate pole masses and mixings from MSbar
 * parameters.
 *
 * This file was generated at Thu 7 Nov 2019 18:53:57 with FlexibleSUSY
 * 2.4.1 (git commit: d362755b3be95df66b05d93fbc583ff6255d5b5e) and SARAH 4.14.2 .
 */

#include "THDMIISNMSSMBCsimple_two_scale_model.hpp"

namespace flexiblesusy {

#define CLASSNAME THDMIISNMSSMBCsimple<Two_scale>

CLASSNAME::THDMIISNMSSMBCsimple(const THDMIISNMSSMBCsimple_input_parameters& input_)
   : THDMIISNMSSMBCsimple_mass_eigenstates(input_)
{
}

void CLASSNAME::calculate_spectrum()
{
   THDMIISNMSSMBCsimple_mass_eigenstates::calculate_spectrum();
}

void CLASSNAME::clear_problems()
{
   THDMIISNMSSMBCsimple_mass_eigenstates::clear_problems();
}

std::string CLASSNAME::name() const
{
   return THDMIISNMSSMBCsimple_mass_eigenstates::name();
}

void CLASSNAME::run_to(double scale, double eps)
{
   THDMIISNMSSMBCsimple_mass_eigenstates::run_to(scale, eps);
}

void CLASSNAME::print(std::ostream& out) const
{
   THDMIISNMSSMBCsimple_mass_eigenstates::print(out);
}

void CLASSNAME::set_precision(double p)
{
   THDMIISNMSSMBCsimple_mass_eigenstates::set_precision(p);
}

std::ostream& operator<<(std::ostream& ostr, const THDMIISNMSSMBCsimple<Two_scale>& model)
{
   model.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
