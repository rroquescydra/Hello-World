//
//  HelloClass.m
//  Hello World
//
//  Created by Z on 01/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "HelloClass.h"

@implementation HelloClass

@synthesize nome=_nome;

+ (NSString *) addHelloTo:(NSString *) texto{

    NSString * output= [@"Hello " stringByAppendingFormat:texto];
    
    return output;
}

@end
