/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIWindow.h>
#import <UIKit/UIView.h>
#import <Availability2.h>
#import <IOSurface/IOSurface.h>

@class NSUndoManager;

@interface UIWindow ()
+(CGRect)constrainFrameToScreen:(CGRect)screen;
+(id)keyWindow;
+(void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height fence:(int)fence;
+(CFDictionaryRef)_ioSurfacePropertyDictionaryForRect:(CGRect)rect;
+(IOSurfaceRef)createIOSurfaceWithContextId:(unsigned)contextId frame:(CGRect)frame;
+(IOSurfaceRef)createIOSurfaceWithContextIds:(const unsigned*)contextIds count:(size_t)count frame:(CGRect)frame;
+(IOSurfaceRef)createScreenIOSurface;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame output:(int)anOutput;
-(id)initWithFrame:(CGRect)frame output:(int)anOutput bitsPerComponent:(int)component;
-(id)initWithContentRect:(CGRect)contentRect;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(void)setContentView:(id)view;
-(id)representation;
-(BOOL)_ignoresHitTest;
-(BOOL)_disableGroupOpacity;
-(BOOL)_disableEdgeAntialiasing;
-(unsigned)_contextId;
-(void)makeKeyAndOrderFront:(id)front;
-(void)orderFront:(id)front;
-(void)_orderFrontWithoutMakingKey;
-(void)orderOut:(id)anOut;
-(void)setHidden:(BOOL)hidden;
-(void)makeKey:(id)key;
-(CGPoint)warpPoint:(CGPoint)point;
-(BOOL)_pointInStatusBar:(CGPoint)statusBar;
-(void)_handleMouseDown:(GSEventRef)down;
-(void)_handleMouseDragged:(GSEventRef)dragged;
-(void)_handleMouseUp:(GSEventRef)up;
-(void)_handleMouseEntered:(GSEventRef)entered;
-(void)_handleMouseMoved:(GSEventRef)moved;
-(void)_handleMouseExited:(GSEventRef)exited;
-(BOOL)_isScrollingEnabledForView:(id)view;
-(void)_statusBarMouseDown:(GSEventRef)down;
-(void)_statusBarMouseDragged:(GSEventRef)dragged;
-(void)_statusBarMouseUp:(GSEventRef)up;
-(void)_sendGesturesForEvent:(id)event;
-(void)_sendTouchesForEvent:(id)event;
-(void)_setExclusiveTouchView:(id)view;
-(id)_exclusiveTouchView;
-(void)_beginModalSession;
-(void)_endModalSession;
-(id)nextResponder;
-(BOOL)_containedInAbsoluteResponderChain;
-(CGPoint)convertWindowToDevice:(CGPoint)device;
-(CGPoint)convertDeviceToWindow:(CGPoint)window;
-(void)setLevel:(float)level;
-(float)level;
-(void)setBecomeKeyOnOrderFront:(BOOL)front;
-(void)_clearPendingKeyboardChanges;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
-(void)_handleStatusBarOrientationChange:(id)change;
-(void)_handleDeviceOrientationChange:(id)change;
-(void)_updateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation animated:(BOOL)animated;
-(void)_updateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration force:(BOOL)force;
-(void)_updateInterfaceOrientationFromDeviceOrientation;
-(void)beginDisablingInterfaceAutorotation;
-(BOOL)isInterfaceAutorotationDisabled;
-(void)endDisablingInterfaceAutorotation;
-(void)setAutorotates:(BOOL)autorotates;
-(void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;
-(void)_setRotatableViewOrientation:(int)orientation duration:(double)duration;
-(int)_degreesToRotateFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
-(void)_forceTwoPartRotationAnimation:(BOOL)animation;
-(void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration fenceID:(int)id animation:(int)animation;
-(void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_setRotatableViewOrientation:(int)orientation duration:(double)duration force:(BOOL)force;
-(BOOL)autorotates;
-(BOOL)isRotating;
-(BOOL)isUsingOnePartRotationAnimation;
-(int)interfaceOrientation;
-(void)synchronizeDrawingWithID:(int)id;
-(void)synchronizeDrawingWithID:(int)id count:(unsigned)count;
-(void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;
-(int)windowOutput;
-(int)bitsPerComponent;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)makeKeyWindow;
-(void)becomeKeyWindow;
-(void)resignKeyWindow;
-(void)makeKeyAndVisible;
-(id)contentView;
-(void)_registerChargedView:(id)view;
-(void)_unregisterChargedView:(id)view;
-(void)_registerSwipeView:(id)view;
-(void)_unregisterSwipeView:(id)view;
-(void)_registerScrollToTopView:(id)topView;
-(void)_unregisterScrollToTopView:(id)topView;
-(void)_setFirstResponder:(id)responder;
-(UIResponder*)firstResponder;
-(UIResponder*)_firstResponder;
-(BOOL)_becomeFirstResponderWhenPossible;
-(id)undoManager;
-(void)undo:(id)undo;
-(void)redo:(id)redo;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)_setMouseDownView:(id)view withEvent:(GSEventRef)event;
-(void)_setMouseEnteredView:(id)view;
-(BOOL)_clearMouseView;
-(IOSurfaceRef)createIOSurfaceWithFrame:(CGRect)frame;
-(IOSurfaceRef)createIOSurface;
-(void)_setCancelScroller:(BOOL)scroller;
-(BOOL)_isLayerHidden;
-(void)_setLayerHidden:(BOOL)hidden;
-(id)_touchData;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
// inherited: -(void)encodeWithCoder:(id)coder;
-(void)awakeFromNib;
+(void*)createRotatedCGImageFromIOSurface:(void*)iosurface;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)contextIds count:(unsigned)count frame:(CGRect)frame outTransform:(CGAffineTransform*)transform;
+(id)_hitTestToPoint:(CGPoint)point pathIndex:(int)index forEvent:(id)event;
+(id)_findWithDisplayPoint:(CGPoint)displayPoint;
-(BOOL)_isClassicControllerWindow;
-(void)_updateTransformLayer;
-(void)_createContext;
-(void)_destroyContext;
-(void)_createContextIfNecessary;
-(float)_contentsScale;
-(void)_setContentsScale:(float)scale;
-(void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)deviceOrientation;
-(void)_setRotatableClient:(id)client toOrientation:(int)orientation duration:(double)duration force:(BOOL)force;
-(void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(id)context;
-(void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context;
-(int)_windowOutput;
-(CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)windowCoordinates;
-(CGPoint)_convertOffset:(CGPoint)offset toWindow:(id)window;
-(CGPoint)_convertOffset:(CGPoint)offset fromWindow:(id)window;
-(id)_rootViewControllers;
-(id)_clientsForRotation;
-(void)_addRootViewController:(id)controller;
-(void)_removeRootViewController:(id)controller;
-(BOOL)resizesToFullScreen;
-(void)setResizesToFullScreen:(BOOL)fullScreen;
#else
-(void)_commonInit;
-(void)_createWindow;
-(void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;
-(void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;
-(void)_applicationDidBeginIgnoringInteractionEvents:(id)_application;
-(void)_applicationDidEndIgnoringInteractionEvents:(id)_application;
-(void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(void*)context;
-(void)_finishedFullRotation:(id)rotation finished:(id)finished context:(void*)context;
-(BOOL)isHandlingContentRotation;
-(BOOL)acceptsGlobalPoint:(CGPoint)point;
#endif
@end

@interface UIWindow (UITextEffectsWindow)
-(void)updateForOrientation:(int)orientation;
-(void)matchDeviceOrientation;
@end

@interface UIWindow (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@protocol UIWindowDelegate 
@optional
-(BOOL)window:(UIWindow*)window shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
-(void)window:(UIWindow*)window willRotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration;
-(void)window:(UIWindow*)window willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration;
-(void)window:(UIWindow*)window willAnimateFromContentFrame:(CGRect)fromFrame toContentFrame:(CGRect)toFrame;
-(void)window:(UIWindow*)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration;
-(void)window:(UIWindow*)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
-(void)window:(UIWindow*)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration;
-(void)window:(UIWindow*)window didRotateFromInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(UIWindow*)window;
-(UIView*)rotatingContentViewForWindow:(UIWindow*)window;
-(UIView*)rotatingHeaderViewForWindow:(UIWindow*)window;
-(UIView*)rotatingFooterViewForWindow:(UIWindow*)window;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)clientsForRotationForWindow:(UIWindow*)window;
-(void)getRotationContentSettings:(XXStruct_t5OlHA*)settings forWindow:(UIWindow*)window;
#else
-(void)getRotationContentSettings:(XXStruct_TF$i3B*)settings forWindow:(UIWindow*)window;
#endif
@end

@interface UIWindow (UITextEffectsWindowAdditions)
-(BOOL)_isTextEffectsWindow __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
@end

