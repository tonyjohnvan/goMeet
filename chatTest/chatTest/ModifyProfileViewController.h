//
//  ModifyProfileViewController.h
//  chatTest
//
//  Created by Simin Liu on 5/12/15.
//  Copyright (c) 2015 LPP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSKImageCropViewController.h"

@interface ModifyProfileViewController : UIViewController<UITextFieldDelegate,NSStreamDelegate,UIImagePickerControllerDelegate,RSKImageCropViewControllerDataSource,RSKImageCropViewControllerDelegate,UINavigationControllerDelegate>

@end
