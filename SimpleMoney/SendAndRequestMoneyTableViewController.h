//
//  RequestMoneyTableViewController.h
//  SimpleMoney
//
//  Created by Joshua Conner on 4/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>
#import <QuartzCore/QuartzCore.h>
#import <AddressBookUI/AddressBookUI.h>
#import <Foundation/Foundation.h>
#import "KeychainWrapper.h"
#import "User.h"
#import "Transaction.h"
#import "MBProgressHUD.h"
#import "ABContactCell.h"
#import "GCStoryboardPINViewController.h"

@interface SendAndRequestMoneyTableViewController : UITableViewController<UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, RKObjectLoaderDelegate, MBProgressHUDDelegate, ABContactCellDelegate, GCStoryboardPINViewControllerDelegate> {
    MBProgressHUD *loadingIndicator;
}

@property (weak, nonatomic) IBOutlet UITableViewCell *emailTextFieldCell;
@property (weak, nonatomic) IBOutlet UITextField *emailTextField;
@property (weak, nonatomic) IBOutlet UITextField *amountTextField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionTextField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *sendButton;
@property (strong, nonatomic) NSMutableArray *contacts;
@property BOOL isRequestMoney;

- (IBAction)requestMoneyButtonWasPressed;
- (IBAction)clearEmailCellButtonPressed;

@end
