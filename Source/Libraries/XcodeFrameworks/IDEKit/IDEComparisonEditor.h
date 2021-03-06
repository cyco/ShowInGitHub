/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEEditor.h>

#import "IDEPathCellDelegate-Protocol.h"
#import "IDESourceControlLogControllerDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class DVTComparisonDocumentLocation, DVTReplacementView, IDEComparisonEditorAutoLayoutView, IDEComparisonEditorSubmode, IDEComparisonNavTimelineBar, IDEComparisonToolbar, IDEEditorDocument, IDENavigableItem, IDENavigableItemCoordinator, IDESourceControlConflictResolutionController, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSSplitView;

@interface IDEComparisonEditor : IDEEditor <NSSplitViewDelegate, IDESourceControlLogControllerDelegate, IDEPathCellDelegate>
{
    IDEComparisonNavTimelineBar *_navTimelineBar;
    IDEComparisonToolbar *_comparisonToolbar;
    NSSplitView *_aboveView;
    DVTReplacementView *_logReplacementView;
    DVTReplacementView *_submodeReplacementView;
    id <IDEComparisonEditorDataSource> _dataSource;
    id _frameResizeToken;
    NSMutableArray *_navItemCoordinatorDidForgetItemsTokens;
    IDENavigableItemCoordinator *_primaryNavigableItemCoordinator;
    IDENavigableItemCoordinator *_secondaryNavigableItemCoordinator;
    IDENavigableItem *_primaryRootNavigableItem;
    IDENavigableItem *_secondaryRootNavigableItem;
    IDENavigableItem *_primarySubNavigableItem;
    IDENavigableItem *_secondarySubNavigableItem;
    NSMutableSet *_documentsToRelease;
    NSMutableSet *_documentsToClose;
    NSMutableSet *_documentsToDelete;
    IDEEditorDocument *_primaryDocument;
    id <DVTInvalidation> _primaryDocumentExportToken;
    id <DVTInvalidation> _primaryPathControlUpdateToken;
    IDEEditorDocument *_secondaryDocument;
    id <DVTInvalidation> _secondaryDocumentExportToken;
    id <DVTInvalidation> _secondaryPathControlUpdateToken;
    IDEEditorDocument *_ancestorDocument;
    id <DVTInvalidation> _ancestorDocumentExportToken;
    int _editorSubmode;
    IDEComparisonEditorAutoLayoutView *_layoutView;
    DVTComparisonDocumentLocation *_internalComparisonDocumentLocation;
    NSArray *_keyEditorDocumentLocations;
    NSDictionary *_keyEditorAnnotationRepresentedObjectState;
    unsigned long long _conflictCount;
    IDESourceControlConflictResolutionController *_conflictResolutionController;
    NSSet *_blacklistedAnnotationProviders;
    BOOL _documentHasUnsavedChanges;
    BOOL _hideToolBar;
    BOOL _hideNavTimelineBar;
    BOOL _disableChangeSourceTree;
    BOOL _disableChangeBranch;
    BOOL _disableChangeRevision;
    BOOL _ownsDataSource;
    BOOL _hardFailPrimary;
    BOOL _hardFailSecondary;
    BOOL _shouldSelectFirstDiff;
    BOOL _shouldTakeFocus;
    unsigned long long _exportOperationsFinished;
    unsigned long long _exportOperationsPending;
}

+ (id)comparisonEditorLogAspect;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingIsThreeWayDiff;
+ (id)keyPathsForValuesAffectingKeyEditor;
+ (id)keyPathsForValuesAffectingPrimaryEditorInstance;
+ (id)keyPathsForValuesAffectingPrimaryRootNavigableItem_arrayOfOne;
+ (id)keyPathsForValuesAffectingSecondaryRootNavigableItem_arrayOfOne;
+ (id)keyPathsForValuesAffectingSubmode;
- (id)_cleanupDocumentLocationFromStateSaving:(id)arg1;
- (void)_cleanupSupportViews;
- (BOOL)_comparisonDocumentLocationContainsSourceControlDocumentLocations:(id)arg1;
- (void)_convertDocumentLocationToComparisonDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (void)_disposeDocument:(id)arg1;
- (void)_editorDocumentDirtyStatusDidChange:(id)arg1;
- (void)_exportAncestorDocument;
- (void)_exportOperationFinished;
- (void)_exportPrimaryDocument;
- (void)_exportSecondaryDocument;
- (void)_pendingExportOperations:(unsigned long long)arg1 withDocumentLocation:(id)arg2;
- (void)_setupEmptyEditors;
- (void)_setupSupportViews;
- (void)_trackDocument:(id)arg1 options:(int)arg2;
- (void)_unpackAndApplyAnnotationRepresentedObjectState;
- (void)_updateOnSubmodeChange;
- (void)_updatePrimaryPathControl;
- (void)_updateSecondaryPathControl;
- (void)_validateAndUpdateOnSubmodeChange;
- (void)_willOpenSpecifier:(id)arg1;
@property NSSplitView *aboveView; // @synthesize aboveView=_aboveView;
@property IDEEditorDocument *ancestorDocument; // @synthesize ancestorDocument=_ancestorDocument;
@property NSSet *blacklistedAnnotationProviders; // @synthesize blacklistedAnnotationProviders=_blacklistedAnnotationProviders;
- (void)compareCurrentRevisionToRevision:(id)arg1;
- (void)compareRevisionChange:(id)arg1;
@property IDEComparisonToolbar *comparisonToolbar; // @synthesize comparisonToolbar=_comparisonToolbar;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
- (id)conflictResolutionController;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
@property id <IDEComparisonEditorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (BOOL)disableBlame;
@property BOOL disableChangeBranch; // @synthesize disableChangeBranch=_disableChangeBranch;
@property BOOL disableChangeRevision; // @synthesize disableChangeRevision=_disableChangeRevision;
@property BOOL disableChangeSourceTree; // @synthesize disableChangeSourceTree=_disableChangeSourceTree;
@property BOOL documentHasUnsavedChanges; // @synthesize documentHasUnsavedChanges=_documentHasUnsavedChanges;
@property int editorSubmode;
@property BOOL hideNavTimelineBar;
@property BOOL hideToolBar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)internalComparisonDocumentLocation;
- (void)invalidate;
- (BOOL)isCurrentPrimaryRevisionInMemoryOrLocal;
@property(readonly) BOOL isThreeWayDiff;
- (id)keyEditor;
@property NSDictionary *keyEditorAnnotationRepresentedObjectState; // @synthesize keyEditorAnnotationRepresentedObjectState=_keyEditorAnnotationRepresentedObjectState;
@property(copy) NSArray *keyEditorDocumentLocations; // @synthesize keyEditorDocumentLocations=_keyEditorDocumentLocations;
@property IDEComparisonEditorAutoLayoutView *layoutView; // @synthesize layoutView=_layoutView;
- (void)loadView;
@property DVTReplacementView *logReplacementView; // @synthesize logReplacementView=_logReplacementView;
@property IDEComparisonNavTimelineBar *navTimelineBar; // @synthesize navTimelineBar=_navTimelineBar;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (struct CGRect)overlayFrameForView:(id)arg1;
- (BOOL)pathCell:(id)arg1 shouldPopUpMenuForPathComponentCell:(id)arg2 item:(id)arg3;
@property IDEEditorDocument *primaryDocument; // @synthesize primaryDocument=_primaryDocument;
- (id)primaryEditorInstance;
@property IDENavigableItem *primaryRootNavigableItem; // @synthesize primaryRootNavigableItem=_primaryRootNavigableItem;
@property(readonly) NSArray *primaryRootNavigableItem_arrayOfOne;
@property IDENavigableItem *primarySubNavigableItem; // @synthesize primarySubNavigableItem=_primarySubNavigableItem;
@property IDEEditorDocument *secondaryDocument; // @synthesize secondaryDocument=_secondaryDocument;
- (id)secondaryEditorInstance;
@property IDENavigableItem *secondaryRootNavigableItem; // @synthesize secondaryRootNavigableItem=_secondaryRootNavigableItem;
@property(readonly) NSArray *secondaryRootNavigableItem_arrayOfOne;
@property IDENavigableItem *secondarySubNavigableItem; // @synthesize secondarySubNavigableItem=_secondarySubNavigableItem;
- (void)selectDocumentLocations:(id)arg1;
- (void)setInternalComparisonDocumentLocation:(id)arg1;
@property BOOL shouldSelectFirstDiff; // @synthesize shouldSelectFirstDiff=_shouldSelectFirstDiff;
@property BOOL shouldTakeFocus; // @synthesize shouldTakeFocus=_shouldTakeFocus;
@property DVTReplacementView *submodeReplacementView; // @synthesize submodeReplacementView=_submodeReplacementView;
- (BOOL)shouldShowAnnotationsFromProviderClass:(Class)arg1;
- (void)showRevision:(id)arg1;
- (void)sourceControlLogViewController:(id)arg1 changeToRevision:(id)arg2;
- (void)sourceControlLogViewController:(id)arg1 compareRevisionToPreviousRevision:(id)arg2;
- (void)sourceControlLogViewController:(id)arg1 compareToRevision:(id)arg2;
- (void)sourceControlLogViewController:(id)arg1 diffWithRevision:(id)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
@property(readonly) IDEComparisonEditorSubmode *submode;
- (void)takeFocus;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end

