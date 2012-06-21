//
//  QuizAppDelegate.h
//  Quiz
//
//  Created by Himanshu Awasthi on 11/01/12.
//  Copyright (c) 2012 GFITM. All rights reserved.
//

#import <UIKit/UIKit.h>
@class RootViewController;

@interface QuizAppDelegate : UIResponder <UIApplicationDelegate>
{
    int currentQuestionIndex;
    
    //the model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    //the view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
    
}
@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (nonatomic, retain) RootViewController *rootViewController;
- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
