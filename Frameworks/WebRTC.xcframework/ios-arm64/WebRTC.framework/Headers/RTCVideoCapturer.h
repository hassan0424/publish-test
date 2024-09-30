/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <WebRTC/RTCVideoFrame.h>

#import <WebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

@class RTC_OBJC_TYPE(RTCVideoCapturer);

RTC_OBJC_EXPORT @protocol RTC_OBJC_TYPE (RTCVideoCaptureShopliveDelegate)<NSObject>
    - (void)capturer : (RTC_OBJC_TYPE(RTCVideoCapturer) *) capturer didCaptureVideoSampleBuffer: (CMSampleBufferRef) frame;
    - (void)capturer : (RTC_OBJC_TYPE(RTCVideoCapturer) *) capturer didCaptureAudioFrame : (CMSampleBufferRef) frame;
    - (void)capturer : (RTC_OBJC_TYPE(RTCVideoCapturer) *) capturer didCaptureRTCVideoFrame : (RTCVideoFrame *) frame;
@end


RTC_OBJC_EXPORT
@protocol RTC_OBJC_TYPE
(RTCVideoCapturerDelegate)<NSObject> 
    - (void)capturer : (RTC_OBJC_TYPE(RTCVideoCapturer) *)capturer didCaptureVideoFrame: (RTC_OBJC_TYPE(RTCVideoFrame) *)frame;
    
@end



RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCVideoCapturer) : NSObject

@property(nonatomic, weak) id<RTC_OBJC_TYPE(RTCVideoCapturerDelegate)> delegate;
@property(nonatomic, weak) id<RTC_OBJC_TYPE(RTCVideoCaptureShopliveDelegate)> shopliveDelegate;


- (instancetype)initWithDelegate:(id<RTC_OBJC_TYPE(RTCVideoCapturerDelegate)>)delegate shopliveDelegate: (id<RTC_OBJC_TYPE(RTCVideoCaptureShopliveDelegate)>)shopliveDelegate;

@end

NS_ASSUME_NONNULL_END
