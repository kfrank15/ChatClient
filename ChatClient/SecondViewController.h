//
//  SecondViewController.h
//  ChatClient
//
//  Created by Kelli Frank on 4/8/15.
//  Copyright (c) 2015 Kelli Frank. All rights reserved.
//

#import <UIKit/UIKit.h>
NSMutableArray * messages;
@interface SecondViewController : UIViewController <NSStreamDelegate, UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) IBOutlet UITextField *inputMessageField;
@property (strong, nonatomic) IBOutlet UITableView *tView;
- (IBAction)sendMessage:(UIButton *)sender;


@end

