//
//  FirstViewController.h
//  Hello World
//
//  Created by Z on 01/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HelloClass.h"

@interface FirstViewController : UIViewController

@property (nonatomic, retain) HelloClass * hello;
@property (nonatomic, strong) IBOutlet UILabel * label1;

@end
