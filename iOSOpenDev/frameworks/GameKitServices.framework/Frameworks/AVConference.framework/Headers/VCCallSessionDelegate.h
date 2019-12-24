/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>


@protocol VCCallSessionDelegate
- (void)session:(id)session didStart:(BOOL)start connectionType:(unsigned)type localUseCell:(unsigned)cell remoteUseCell:(unsigned)cell5 error:(id)error;
- (void)session:(id)session didStopWithDelay:(int)delay error:(id)error;
- (void)session:(id)session setUseNormalBitrate:(BOOL)bitrate;
- (void)session:(id)session didStopWithError:(id)error;
- (bool)session:(id)session startVideoIO:(id *)io rtpVideo:(tagHANDLE *)video rtpAudio:(tagHANDLE *)audio actualVideoPayload:(int)payload enableUEP:(BOOL)uep enableControlByte:(BOOL)byte featuresListString:(char *)string remoteVCCallInfo:(id)info captureRule:(id)rule encodeRule:(id)rule11 usingCellular:(BOOL)cellular isUnpausing:(BOOL)unpausing;
- (bool)stopVideoIO:(BOOL)io error:(id *)error;
- (void)remoteAudioDidPause:(BOOL)remoteAudio callID:(int)anId;
- (void)remoteVideoDidPause:(BOOL)remoteVideo callID:(int)anId;
- (void)session:(id)session inititiateRelayRequest:(id)request;
- (void)session:(id)session sendRelayResponse:(id)response;
- (void)session:(id)session cancelRelayRequest:(id)request;
- (void)session:(id)session receivedNoPacketsForSeconds:(double)seconds;
- (bool)didDetectBandwidth:(BOOL)bandwidth upstreamBandwidth:(int)bandwidth2 downstreamBandwidth:(int)bandwidth3;
- (void)remoteScreenAspectRatioChangedForSession:(id)session remoteScreenPortraitAspectRatio:(CGSize)ratio remoteScreenLandscapeAspectRatio:(CGSize)ratio3 remoteSupportsVisibleRect:(BOOL)rect canLocalResizePIP:(BOOL)pip canRemoteResizePIP:(BOOL)pip6;
- (void)setBWEOptions:(BOOL)options UseNewBWEMode:(BOOL)mode FakeLargeFrameMode:(BOOL)mode3 ProbingSenderLog:(BOOL)log;
- (void)setFECMode:(int)mode;
@end
