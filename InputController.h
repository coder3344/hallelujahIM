#import <Cocoa/Cocoa.h>
#import <InputMethodKit/InputMethodKit.h>

@interface InputController : IMKInputController {
    NSMutableString*				_composedBuffer;
    NSMutableString*				_originalBuffer;
    NSInteger						_insertionIndex;
    BOOL							_didConvert;
    id								_currentClient;
    BOOL                            _is_cmd_mode;
    NSUInteger                      _lastModifiers[2];
    NSEventType                     _lastEventTypes[2];
}

-(NSMutableString*)composedBuffer;
-(void)setComposedBuffer:(NSString*)string;
-(NSMutableString*)originalBuffer;
-(void)originalBufferAppend:(NSString*)string client:(id)sender;
-(void)setOriginalBuffer:(NSString*)string;

@end
