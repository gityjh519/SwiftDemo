//
//  CPersomModel.cpp
//  SwiftForC
//
//  Created by yaojinhai on 2019/10/24.
//  Copyright © 2019 yaojinhai. All rights reserved.
//

#include "CPersomModel.hpp"
#include <string.h>
#include "CHeader.h"

struct CPersonModel* createModel(){
    CPersonModel *model = new CPersonModel();
    
    
    
    model->name = new char();
    const char *name = "张三";
    stpcpy(model->name, name);
    
    const char *birthday = "1990年05月";
    stpcpy(model->birthday, birthday);
    
    
    model->age = 30;
    return model;
}

struct CPersonModel* readPersonModel() {
    CPersonModel *model = createModel();
    return model;
}
