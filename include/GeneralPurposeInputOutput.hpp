// Copyright 2021,2022 David SPORN
// ---
// This file is part of 'GpioAbstractionLayer'.
// ---
// 'GpioAbstractionLayer' is free software: you can redistribute it and/or 
// modify it under the terms of the GNU General Public License as published 
// by the Free Software Foundation, either version 3 of the License, or 
// (at your option) any later version.

// 'GpioAbstractionLayer' is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General 
// Public License for more details.

// You should have received a copy of the GNU General Public License along 
// with 'GpioAbstractionLayer'. If not, see <https://www.gnu.org/licenses/>. 

#ifndef GENERAL_PURPOSE_INPUT_OUTPUT_HPP
#define GENERAL_PURPOSE_INPUT_OUTPUT_HPP

// standard includes
#include <cstdint>

// project includes
#include "TypesForInputOutput.hpp"
#include "DigitalInputOutput.hpp"

/** @brief Abstraction layer of a set of GPIOs.
 */
class GeneralPurposeInputOutput {
    private:
        DigitalInputOutput* digital ;

    public:
        virtual ~GeneralPurposeInputOutput() {}
        inline DigitalInputOutput* getDigital() { return digital; }
        inline GeneralPurposeInputOutput* withDigital(DigitalInputOutput* dio) {digital = dio ; return this ;}
} ;

#endif