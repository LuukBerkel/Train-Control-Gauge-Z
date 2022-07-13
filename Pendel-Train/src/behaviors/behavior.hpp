/**
 * @file behavior.hpp
 * @author LuukBerkel
 * @brief 
 * @version 0.1
 * @date 2022-07-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "state.hpp"

/**
 * @brief This class is an interface for all the subbehaviors.
 */
class behavior{
    virtual void interrupt_call(program_state s);
    virtual void method_call(program_state s);
};
