//
//  CHeader.h
//  SwiftForC
//
//  Created by yaojinhai on 2019/10/24.
//  Copyright © 2019 yaojinhai. All rights reserved.
//

#ifndef CHeader_h
#define CHeader_h

#include "CPersomModel.hpp"


#ifdef __cplusplus
extern "C" {
#endif
   struct CPersonModel* readPersonModel();

#ifdef __cplusplus
}
#endif


#endif /* CHeader_h */
