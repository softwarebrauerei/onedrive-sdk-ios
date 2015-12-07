// Copyright (c) 2015 Microsoft Corporation
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// 
// 
// This file was generated and any chanes will be overwritten.

@class ODIdentitySet, ODItemReference, ODAudio, ODDeleted, ODFile, ODFileSystemInfo, ODFolder, ODImage, ODLocation, ODOpenWithSet, ODPhoto, ODSearchResult, ODSpecialFolder, ODVideo, ODPermission, ODThumbnailSet, ODCollection; 

#import "ODObject.h"


/**
* The header for type item.
*/

@interface ODItem : ODObject

@property ODIdentitySet *createdBy;
@property NSDate *createdDateTime;
@property NSString *cTag;
@property NSString *itemDescription;
@property NSString *eTag;
@property NSString *id;
@property ODIdentitySet *lastModifiedBy;
@property NSDate *lastModifiedDateTime;
@property NSString *name;
@property ODItemReference *parentReference;
@property int64_t size;
@property NSString *webUrl;
@property ODAudio *audio;
@property ODDeleted *deleted;
@property ODFile *file;
@property ODFileSystemInfo *fileSystemInfo;
@property ODFolder *folder;
@property ODImage *image;
@property ODLocation *location;
@property ODOpenWithSet *openWith;
@property ODPhoto *photo;
@property ODSearchResult *searchResult;
@property ODSpecialFolder *specialFolder;
@property ODVideo *video;
@property (readonly) ODCollection *permissions;
@property (readonly) ODCollection *children;
@property (readonly) ODCollection *thumbnails;

- (ODPermission *) permissions:(NSInteger)index;

- (ODItem *) children:(NSInteger)index;

- (ODThumbnailSet *) thumbnails:(NSInteger)index;

@end
