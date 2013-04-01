//
//  Person.h
//  Coredata-sample
//
//  Created by SHIYA KEITA on 2013/04/02.
//  Copyright (c) 2013年 SHIYA KEITA. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "Address.h"

@interface Person : NSManagedObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) Address *address;

@end
