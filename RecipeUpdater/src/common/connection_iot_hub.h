/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

#pragma once

/// <summary>
/// Context data required for connecting directly to an Azure IoT Hub
/// </summary>
typedef struct {
    const char *hubHostname;
    const char *endpoint;
    const char *certPath;
} Connection_IotHub_Config;
