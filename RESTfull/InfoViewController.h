//
//  InfoViewController.h
//  RESTfull
//
//  Created by ECEP2010 on 9/25/15.
//  Copyright (c) 2015 ECEP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InfoViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textViewinfo;
@property (nonatomic, strong) NSString *content;
@end
