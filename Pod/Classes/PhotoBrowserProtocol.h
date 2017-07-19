//
//  PhotoBrowserProtocol.h
//  Pods
//
//  Created by Mrlu on 19/07/2017.
//
//

#import <Foundation/Foundation.h>

@protocol PhotoBrowserProtocol <NSObject>

@property (nonatomic) BOOL zoomPhotosToFill;
- (void)cancelControlHiding;
- (void)hideControlsAfterDelay;
- (void)toggleControls;
- (UIImage *)imageForPhoto:(id<MWPhoto>)photo;

@optional
- (void)photoBrowserImageHandleSingleTap;
- (void)photoBrowserViewHandleSingleTap;
- (void)photoBrowserViewHandleDoubleTap;

@end
