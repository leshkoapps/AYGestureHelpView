//
//  AYGestureHelpView.h
//  AYGestureHelpView
//
//  Created by Ayan Yenbekbay on 10/22/15.
//  Copyright © 2015 Ayan Yenbekbay. All rights reserved.
//

typedef void (^AYGestureHelpViewDismissHandler)(void);

extern UIEdgeInsets kAYGestureHelpViewPadding;

extern CGFloat kAYGestureHelpViewDefaultTouchRadius;



@interface AYGestureHelpView : UIView

#pragma mark Properties

/**
 *  Insets for the help label. Default is {20.0,20.0,20.0,20.0}.
 */
@property (nonatomic,readonly) UIEdgeInsets labelInsets;
/**
 *  Radius for the touch view used for gesture animations. Default is 25.
 */
@property (nonatomic,readonly) CGFloat touchRadius;

#pragma mark Methods

/**
 *  Initializes and returns a newly allocated gesture help view object with the specified frame rectangle and
 *  the specified font for the description label.
 *
 *  @param frame       The frame rectangle for the gesture help view.
 *  @param labelInsets Font for the description label.
 *  @param touchRadius Radius for the touch view used for gesture animations.
 *
 *  @return A newly created gesture help view object.
 */
- (instancetype)initWithFrame:(CGRect)frame
                       insets:(UIEdgeInsets)labelInsets
                  touchRadius:(CGFloat)touchRadius;
/**
 *  Performs a repeating tap gesture animation at the specified point with the specified description text.
 *
 *  @param labelText      Text for the description label.
 *  @param labelPoint     Position for the description label relative to the view frame.
 *  @param touchPoint     Position for the touch view relative to the view frame.
 *  @param dismissHandler Action performed when the user taps on the view.
 *  @param hideOnDismiss  Whether or not the view should be dismissed on tap. Set NO if you would like to
 *  chain other animations.
 */
- (void)tapWithLabelText:(NSAttributedString *)labelText
              labelPoint:(CGPoint)labelPoint
              touchPoint:(CGPoint)touchPoint
                  window:(UIWindow *)window
          dismissHandler:(AYGestureHelpViewDismissHandler)dismissHandler
           hideOnDismiss:(BOOL)hideOnDismiss;
/**
 *  Performs a repeating double tap gesture animation at the specified point with the specified description text.
 *
 *  @param labelText      Text for the description label.
 *  @param labelPoint     Position for the description label relative to the view frame.
 *  @param touchPoint     Position for the touch view relative to the view frame.
 *  @param dismissHandler Action performed when the user taps on the view.
 *  @param hideOnDismiss  Whether or not the view should be dismissed on tap. Set NO if you would like to
 *  chain other animations.
 */
- (void)doubleTapWithLabelText:(NSAttributedString *)labelText
                    labelPoint:(CGPoint)labelPoint
                    touchPoint:(CGPoint)touchPoint
                        window:(UIWindow *)window
                dismissHandler:(AYGestureHelpViewDismissHandler)dismissHandler
                 hideOnDismiss:(BOOL)hideOnDismiss;
/**
 *  Performs a repeating swipe gesture animation between specified points with the specified description text.
 *
 *  @param labelText       Text for the description label.
 *  @param labelPoint      Position for the description label relative to the view frame.
 *  @param touchStartPoint Position for the starting point of the touch view animation relative to the view frame.
 *  @param touchEndPoint   Position for the ending point of the touch view animation relative to the view frame.
 *  @param dismissHandler  Action performed when the user taps on the view.
 *  @param hideOnDismiss   Whether or not the view should be dismissed on tap. Set NO if you would like to
 *  chain other animations.
 */
- (void)swipeWithLabelText:(NSAttributedString *)labelText
                labelPoint:(CGPoint)labelPoint
           touchStartPoint:(CGPoint)touchStartPoint
             touchEndPoint:(CGPoint)touchEndPoint
                    window:(UIWindow *)window
            dismissHandler:(AYGestureHelpViewDismissHandler)dismissHandler
             hideOnDismiss:(BOOL)hideOnDismiss;
/**
 *  Performs a repeating long press gesture animation at the specified point with the specified description text.
 *
 *  @param labelText      Text for the description label.
 *  @param labelPoint     Position for the description label relative to the view frame.
 *  @param touchPoint     Position for the touch view relative to the view frame.
 *  @param dismissHandler Action performed when the user taps on the view.
 *  @param hideOnDismiss  Whether or not the view should be dismissed on tap. Set NO if you would like to
 *  chain other animations.
 */
- (void)longPressWithLabelText:(NSAttributedString *)labelText
                    labelPoint:(CGPoint)labelPoint
                    touchPoint:(CGPoint)touchPoint
                        window:(UIWindow *)window
                dismissHandler:(AYGestureHelpViewDismissHandler)dismissHandler
                 hideOnDismiss:(BOOL)hideOnDismiss;

@end
