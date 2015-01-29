//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Kelly de Vries on 4/28/13.
//  Copyright (c) 2013 Twyste. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
<UITextFieldDelegate>

@property (copy, nonatomic) NSString *userName;

@end
