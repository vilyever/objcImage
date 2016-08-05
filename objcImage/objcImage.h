//
//  objcImage.h
//  objcImage
//
//  Created by FTET on 16/8/5.
//  Copyright © 2016年 vilyever. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for objcImage.
FOUNDATION_EXPORT double objcImageVersionNumber;

//! Project version string for objcImage.
FOUNDATION_EXPORT const unsigned char objcImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <objcImage/PublicHeader.h>

#import <objcImage/UIImage+VDFile.h>
#import <objcImage/UIImage+VDColor.h>
#import <objcImage/UIImage+VDResize.h>
#import <objcImage/UIImage+VDView.h">

#pragma mark VDImageFromFile
#if !VDImageFromFile
#define VDImageFromFile(filePath, type) \
[UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:filePath ofType:type]]
#endif