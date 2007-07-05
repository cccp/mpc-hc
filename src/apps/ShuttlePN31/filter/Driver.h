#ifndef DRIVER_H
#define DRIVER_H

// Declarations for PN31Snoop driver
// Generated by Walt Oney's driver wizard

#include "stddcls.h"

///////////////////////////////////////////////////////////////////////////////
// Device extension structure


typedef struct tagDEVICE_EXTENSION {
	PDEVICE_OBJECT DeviceObject;			// device object this extension belongs to
	PDEVICE_OBJECT LowerDeviceObject;		// next lower driver in same stack
	PDEVICE_OBJECT Pdo;						// the PDO
	IO_REMOVE_LOCK RemoveLock;
	ULONG		   uSequenceNumber;
	PDRIVER_OBJECT OriginalDriverObject;
} DEVICE_EXTENSION, *PDEVICE_EXTENSION;

// For our context information

typedef struct {
	// information for the old CompletionRoutine
	PIO_COMPLETION_ROUTINE CompletionRoutine;
    PVOID Context;
    UCHAR Control;

	// what we need : the saved PURB & its number
	PURB pUrb;
	ULONG uSequenceNumber;

	// the stack where we should restore information
	PIO_STACK_LOCATION Stack;
} CONTEXT, * PCONTEXT;

///////////////////////////////////////////////////////////////////////////////
// Global variables

#ifdef __cplusplus
extern "C" {
#endif

extern UNICODE_STRING servkey;
extern BOOLEAN isWin98;

void Sleep(int nsecond);

/* maximum number of endpoints that can be handled by Snoopy */
#define MAX_ENDPOINT 50

// one second in 100-nanoseconds (stupid Microsoft units!)
#define SECONDS 10000000L

#ifdef __cplusplus
};
#endif

#endif // DRIVER_H
