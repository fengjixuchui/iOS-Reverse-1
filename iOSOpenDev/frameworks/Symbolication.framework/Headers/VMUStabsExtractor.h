/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUSymbolExtractor.h>


@interface VMUStabsExtractor : VMUSymbolExtractor {
}
+ (id)stabsExtractorWithMachOHeader:(id)machOHeader;	// 0x15444
+ (id)symbolForAddress:(unsigned long long)address withMachOHeader:(id)machOHeader;	// 0x15394
- (id)initWithMachOHeader:(id)machOHeader forAddress:(unsigned long long)address;	// 0x14f34
- (void)readIndirectSymbolsFromMachOHeader:(id)machOHeader section:(id)section nsyms:(unsigned)nsyms indirectSymbols:(id)symbols nlist:(id)nlist stringTable:(id)table;	// 0x161b4
- (void)readStabsFromMachOHeader:(id)machOHeader nsyms:(unsigned)nsyms nlist:(id)nlist stringTable:(id)table forAddress:(unsigned long long)address;	// 0x15498
@end
