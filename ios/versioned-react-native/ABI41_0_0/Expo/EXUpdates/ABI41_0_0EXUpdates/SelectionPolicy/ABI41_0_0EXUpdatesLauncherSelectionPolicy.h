//  Copyright © 2021 650 Industries. All rights reserved.

#import <ABI41_0_0EXUpdates/ABI41_0_0EXUpdatesUpdate.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * Given a list of updates, implementations of this protocol should be able to choose one to launch.
 */
@protocol ABI41_0_0EXUpdatesLauncherSelectionPolicy

- (nullable ABI41_0_0EXUpdatesUpdate *)launchableUpdateFromUpdates:(NSArray<ABI41_0_0EXUpdatesUpdate *> *)updates filters:(nullable NSDictionary *)filters;

@end

NS_ASSUME_NONNULL_END
