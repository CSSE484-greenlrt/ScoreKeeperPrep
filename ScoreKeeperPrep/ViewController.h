//
//  ViewController.h
//  ScoreKeeperPrep
//
//  Created by Ryan Greenlee on 3/20/18.
//  Copyright © 2018 Ryan Greenlee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)pressedButton:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField* editTextField;
@property (weak, nonatomic) IBOutlet UITextView* staticTextView;

@end

