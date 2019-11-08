//
// Created by utec on 8/11/19.
//

#ifndef UNTITLED8_FIBONACCI_H
#define UNTITLED8_FIBONACCI_H

#import "tipos.h"
#import "progression.h"

class fibonacci_t{
private:
    numeric_t previous;
public:
    void fibonacci_progression(numeric_t previous);
    numeric_t next_value();

};
#endif //UNTITLED8_FIBONACCI_H
