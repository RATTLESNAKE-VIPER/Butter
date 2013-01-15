//
//  BTRImageView.h
//  Butter
//
//  Created by Jonathan Willing on 12/12/12.
//  Copyright (c) 2012 ButterKit. All rights reserved.
//

#import <Butter/BTRView.h>

// Equivalent to UIViewContentMode. See "Providing CALayer Content"
// in the Core Animation guide for more information about the modes.
typedef NS_ENUM(NSInteger, BTRViewContentMode) {
    BTRViewContentModeScaleToFill,
    BTRViewContentModeScaleAspectFit,
    BTRViewContentModeScaleAspectFill,
    BTRViewContentModeCenter,
    BTRViewContentModeTop,
    BTRViewContentModeBottom,
    BTRViewContentModeLeft,
    BTRViewContentModeRight,
    BTRViewContentModeTopLeft,
    BTRViewContentModeTopRight,
    BTRViewContentModeBottomLeft,
    BTRViewContentModeBottomRight,
};

@interface BTRImageView : BTRView

- (id)initWithImage:(NSImage *)image;

@property (nonatomic, strong) NSImage *image;

// The transform applied to the image.
@property (nonatomic, assign) CATransform3D transform;

// The content mode for the image view. Directly modifies the layer's contentsGravity.
//
// Defaults to BTRViewContentModeScaleToFill.
@property (nonatomic, assign) BTRViewContentMode contentMode;
@end