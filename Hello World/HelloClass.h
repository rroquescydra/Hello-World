//
//  HelloClass.h
//  Hello World
//
//  Created by Z on 01/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HelloClass : NSObject

@property (nonatomic, strong)NSString *nome;

+ (NSString *) addHelloTo:(NSString *) text;    
+ (NSString *) addByeTo:(NSString *) text;
    
@end
