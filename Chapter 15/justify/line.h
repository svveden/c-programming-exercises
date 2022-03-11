/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

#ifndef LINE_H
#define LINE_H

void clear_line(void);

void add_word(const char *word);

int space_remaining(void);

void write_line(void);

void flush_line(void);

#endif