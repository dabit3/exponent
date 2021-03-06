// Copyright 2015-present 650 Industries. All rights reserved.

#import <UIKit/UIKit.h>

@class EXErrorView;

typedef enum EXFatalErrorType {
  kEXFatalErrorTypeLoading,
  kEXFatalErrorTypeException,
} EXFatalErrorType;

@protocol EXErrorViewDelegate <NSObject>

- (void)errorViewDidSelectRetry: (EXErrorView *)errorView;

@end

@interface EXErrorView : UIView

@property (nonatomic, assign) EXFatalErrorType type;
@property (nonatomic, assign) id<EXErrorViewDelegate> delegate;
@property (nonatomic, strong) NSError *error;

@end
