//
//  FirstViewController.h
//  ChatClient
//
//  Created by Kelli Frank on 4/8/15.
//  Copyright (c) 2015 Kelli Frank. All rights reserved.
//

#import <UIKit/UIKit.h>

NSInputStream *inputStream;
NSOutputStream *outputStream;

@interface FirstViewController : UIViewController <NSStreamDelegate>
@property (weak, nonatomic) IBOutlet UITextField *inputNameField;
@property (strong, nonatomic) IBOutlet UIView *joinView;
- (IBAction)joinChat:(UIButton *)sender;


@end

