//
//  BluetoothManager.h
//  bartenderClient
//
//  Created by Davis Gossage on 10/2/14.
//  Copyright (c) 2014 Davis Gossage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface BTBluetoothManager : NSObject<CBCentralManagerDelegate,CBPeripheralDelegate>

+(BTBluetoothManager*)sharedInstance;

- (void)attemptBluetoothConnection;

@end