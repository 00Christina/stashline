//
//  ViewController.h
//  FinanceLine
//
//  Created by Tristan Hume on 2013-06-18.
//  Copyright (c) 2013 Tristan Hume. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TimelineView.h"
#import "AnnuityTrackView.h"
#import "SelectionEditViewController.h"
#import "Selection.h"
#import "DataTrack.h"
#import "FinanceModel.h"
#import "ScrubbableTextView.h"

@interface TimelineViewController : UIViewController <TrackSelectionDelegate, UITextFieldDelegate, SelectionEditorDelegate> {
  SelectionEditViewController *selectEditor;
  
  FinanceModel *model;
  NSNumberFormatter *amountFormatter;
}

- (IBAction)clearSelection;
- (IBAction)zeroSelection;
- (IBAction)expandSelectionToEnd;
- (IBAction)cutJobAtRetirement;
- (IBAction)parameterFieldChanged:(UITextField*)sender;

- (IBAction)loadFile;

- (IBAction)aboutMe;

@property (weak, nonatomic) IBOutlet UIView *editorContainerView;

@property (weak, nonatomic) IBOutlet ScrubbableTextView *growthRateField;
@property (weak, nonatomic) IBOutlet ScrubbableTextView *dividendRateField;
@property (weak, nonatomic) IBOutlet ScrubbableTextView *safeWithdrawalField;

@property (weak, nonatomic) IBOutlet UITextField *fileNameField;

@property (nonatomic, strong) IBOutlet TimelineView *timeLine;

@end
