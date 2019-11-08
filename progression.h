//
// Created by utec on 8/11/19.
//

#ifndef UNTITLED8_PROGRESSION_H
#define UNTITLED8_PROGRESSION_H

#import "tipos.h"

class progression_t{
protected:
    numeric_t first;
    numeric_t current;
public:
    progression_t(numeric_t first);
    numeric_t first_value();
    virtual numeric_t next_value();
    void print_progression(cant_t n);




};

#endif //UNTITLED8_PROGRESSION_H
