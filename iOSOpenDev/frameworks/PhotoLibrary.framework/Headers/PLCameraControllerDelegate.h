/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>



@protocol PLCameraControllerDelegate <NSObject>
@optional
- (void)cameraControllerTorchAvailabilityChanged:(id)changed;
- (void)cameraControllerFocusDidEnd:(id)cameraControllerFocus;
- (void)cameraControllerFocusDidStart:(id)cameraControllerFocus;
- (void)cameraControllerWillStartAutofocus:(id)cameraController;
- (void)cameraControllerVideoCaptureDidStop:(id)cameraControllerVideoCapture withReason:(int)reason userInfo:(id)info;
- (void)cameraControllerDidStopVideoCapture:(id)cameraController;
- (void)cameraControllerVideoCaptureDidStart:(id)cameraControllerVideoCapture;
- (void)cameraController:(id)controller capturedPanorama:(id)panorama error:(id)error;
- (void)cameraControllerPanoramaDidStopProcessing:(id)cameraControllerPanorama;
- (void)cameraControllerPanoramaWillStartProcessing:(id)cameraControllerPanorama;
- (void)cameraControllerWillStopPanoramaCapture:(id)cameraController;
- (void)cameraController:(id)controller didUpdatePanoramaPreview:(id)preview;
- (void)cameraController:(id)controller didChangeCaptureAbility:(BOOL)ability;
- (void)cameraController:(id)controller capturedPhoto:(id)photo error:(id)error;
- (void)cameraControllerDidTakePhoto:(id)cameraController;
- (void)cameraControllerWillTakePhoto:(id)cameraController;
- (void)cameraControllerModeDidChange:(id)cameraControllerMode;
- (void)cameraControllerModeWillChange:(id)cameraControllerMode;
- (void)cameraController:(id)controller cleanApertureDidChange:(CGRect)cleanAperture;
- (void)cameraControllerServerDied:(id)died;
- (void)cameraControllerSessionInterruptionEnded:(id)ended;
- (void)cameraControllerSessionWasInterrupted:(id)interrupted;
- (void)cameraControllerSessionDidStop:(id)cameraControllerSession;
- (void)cameraControllerWillStopSession:(id)cameraController;
- (void)cameraControllerDidStopSession:(id)cameraController;
- (void)cameraControllerSessionDidStart:(id)cameraControllerSession;
- (void)cameraControllerPreviewDidStart:(id)cameraControllerPreview;
- (void)cameraControllerWillStartPreview:(id)cameraController;
- (void)cameraControllerDidStartSession:(id)cameraController;
@end
