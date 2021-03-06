/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int routingIncidentMessageIndex : 1; 
    }  _has;
    unsigned int  _routingIncidentMessageIndex;
    NSString * _routingMessage;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _transitIncidentIndexs;
}

@property (nonatomic) BOOL hasRoutingIncidentMessageIndex;
@property (nonatomic, readonly) BOOL hasRoutingMessage;
@property (nonatomic) unsigned int routingIncidentMessageIndex;
@property (nonatomic, retain) NSString *routingMessage;
@property (nonatomic, readonly) unsigned int*transitIncidentIndexs;
@property (nonatomic, readonly) unsigned int transitIncidentIndexsCount;

- (void)addTransitIncidentIndex:(unsigned int)arg1;
- (void)clearTransitIncidentIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRoutingIncidentMessageIndex;
- (BOOL)hasRoutingMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routingIncidentMessageIndex;
- (id)routingMessage;
- (void)setHasRoutingIncidentMessageIndex:(BOOL)arg1;
- (void)setRoutingIncidentMessageIndex:(unsigned int)arg1;
- (void)setRoutingMessage:(id)arg1;
- (void)setTransitIncidentIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)transitIncidentIndexs;
- (unsigned int)transitIncidentIndexsCount;
- (void)writeTo:(id)arg1;

@end
