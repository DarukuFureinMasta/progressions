//
// Created by utec on 8/11/19.
//

#ifndef UNTITLED8_ARITHMETIC_H
#define UNTITLED8_ARITHMETIC_H

#import "tipos.h"
#import "progression.h"



class arithmetic_t{
private:
    numeric_t increment;
public:
    void arithmetic_progress(cant_t increment);
    numeric_t next_value();

};
#endif //UNTITLED8_ARITHMETIC_H
