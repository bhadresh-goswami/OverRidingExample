//
//  main.cpp
//  OverRidingExample
//
//  Created by Mac on 29/11/18.
//  Copyright © 2018 tops. All rights reserved.
//

#include <iostream>

class ParentClass {
    
    
public:
    
    virtual void print()
    {
        std::cout<<"\n\n\tPrint called from PARENTCLASS!\n";
    }
};

class ChildClass:public ParentClass {
    
    
public:
    virtual void print()
    {
        std::cout<<"\n\n\tPrint called from CHILDCLASS!\n";
    }
};

int main(int argc, const char * argv[]) {
  
    
    ChildClass obj;
    obj.print();
    obj.ParentClass::print();
    
    return 0;
}
