//
//  CPersomModel.hpp
//  SwiftForC
//
//  Created by yaojinhai on 2019/10/24.
//  Copyright © 2019 yaojinhai. All rights reserved.
//

#ifndef CPersomModel_hpp
#define CPersomModel_hpp

#include <stdio.h>


struct CPersonModel {
    char *name;
    char birthday[20];
    int age;
};
struct CPersonModel* createModel();


#endif /* CPersomModel_hpp */
