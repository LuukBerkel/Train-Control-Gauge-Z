/**
 * @file state.hpp
 * @author LuukBerkel
 * @brief This class is header that can be included for the program-state enum's
 * @version 0.1
 * @date 2022-07-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// This class defines the program state accordingly
enum class program_state{ 
    CHECKING,
    READY,
    TRAIN_ONE,
    TRAIN_TWO
};