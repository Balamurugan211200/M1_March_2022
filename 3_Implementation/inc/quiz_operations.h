/**
 * @file quiz_operations.h
 * @author Balamurugan D (18eumc028@skcet.ac.in)
 * @brief Header file for QuizGame
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _QUIZ_GAME_OPERATIONS_H_
#define _QUIZ_GAME_OPERATIONS_H_

/**
 * @brief score has been saved
 * @return in text file score has been saved
 */
void show_record();

/**
 * @brief result score to be resetted
 * @return score has been reset to zero
 */
void reset_score();

/**
 * @brief instructions is displayed
 * 
 */
void help();

/**
 * @brief give score information
 * @return integer value returned
 * 
 */
void edit_score();

#endif /* #define _QUIZ_GAME_H_ */