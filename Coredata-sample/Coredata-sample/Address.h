//
//  Address.h
//  Coredata-sample
//
//  Created by SHIYA KEITA on 2013/04/02.
//  Copyright (c) 2013年 SHIYA KEITA. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface Address : NSManagedObject

@property (strong, nonatomic) NSString *zipCode;
@property (strong, nonatomic) NSString *state;
@property (strong, nonatomic) NSString *city;
@property (strong, nonatomic) NSString *other;

@end
