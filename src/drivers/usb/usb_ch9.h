/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef USB_CH9_H
#define USB_CH9_H

#define USB_DIR_OUT                     0               /* to device */
#define USB_DIR_IN                      0x80            /* to host */

/*
 * USB types, the second of three bRequestType fields
 */
#define USB_TYPE_MASK                   (0x03 << 5)
#define USB_TYPE_STANDARD               (0x00 << 5)
#define USB_TYPE_CLASS                  (0x01 << 5)
#define USB_TYPE_VENDOR                 (0x02 << 5)
#define USB_TYPE_RESERVED               (0x03 << 5)
/*
 * USB recipients, the third of three bRequestType fields
 */
#define USB_RECIP_MASK                  0x1f
#define USB_RECIP_DEVICE                0x00
#define USB_RECIP_INTERFACE             0x01
#define USB_RECIP_ENDPOINT              0x02
#define USB_RECIP_OTHER                 0x03
/* From Wireless USB 1.0 */
#define USB_RECIP_PORT                  0x04
#define USB_RECIP_RPIPE                 0x05

/*
 * Standard requests, for the bRequest field of a SETUP packet.
 *
 * These are qualified by the bRequestType field, so that for example
 * TYPE_CLASS or TYPE_VENDOR specific feature flags could be retrieved
 * by a GET_STATUS request.
 */
#define USB_REQ_GET_STATUS              0x00
#define USB_REQ_CLEAR_FEATURE           0x01
#define USB_REQ_SET_FEATURE             0x03
#define USB_REQ_SET_ADDRESS             0x05
#define USB_REQ_GET_DESCRIPTOR          0x06
#define USB_REQ_SET_DESCRIPTOR          0x07
#define USB_REQ_GET_CONFIGURATION       0x08
#define USB_REQ_SET_CONFIGURATION       0x09
#define USB_REQ_GET_INTERFACE           0x0A
#define USB_REQ_SET_INTERFACE           0x0B
#define USB_REQ_SYNCH_FRAME             0x0C

#define USB_REQ_SET_ENCRYPTION          0x0D    /* Wireless USB */
#define USB_REQ_GET_ENCRYPTION          0x0E
#define USB_REQ_RPIPE_ABORT             0x0E
#define USB_REQ_SET_HANDSHAKE           0x0F
#define USB_REQ_RPIPE_RESET             0x0F
#define USB_REQ_GET_HANDSHAKE           0x10
#define USB_REQ_SET_CONNECTION          0x11
#define USB_REQ_SET_SECURITY_DATA       0x12
#define USB_REQ_GET_SECURITY_DATA       0x13
#define USB_REQ_SET_WUSB_DATA           0x14
#define USB_REQ_LOOPBACK_DATA_WRITE     0x15
#define USB_REQ_LOOPBACK_DATA_READ      0x16
#define USB_REQ_SET_INTERFACE_DS        0x17

#define USB_DT_DEBUG                    0x0a

#define USB_DEVICE_DEBUG_MODE           6       /* (special devices only) */

/*
 * USB Packet IDs (PIDs)
 */

/* token */
#define USB_PID_OUT		0xe1
#define USB_PID_IN		0x69
#define USB_PID_SOF		0xa5
#define USB_PID_SETUP		0x2d
/* handshake */
#define USB_PID_ACK		0xd2
#define USB_PID_NAK		0x5a
#define USB_PID_STALL		0x1e
#define USB_PID_NYET		0x96
/* data */
#define USB_PID_DATA0		0xc3
#define USB_PID_DATA1		0x4b
#define USB_PID_DATA2		0x87
#define USB_PID_MDATA		0x0f
/* Special */
#define USB_PID_PREAMBLE	0x3c
#define USB_PID_ERR		0x3c
#define USB_PID_SPLIT		0x78
#define USB_PID_PING		0xb4
#define USB_PID_UNDEF_0		0xf0

#define USB_PID_DATA_TOGGLE	0x88

struct usb_ctrlrequest {
	u8  bRequestType;
	u8  bRequest;
	u16 wValue;
	u16 wIndex;
	u16 wLength;
} __packed;

struct usb_debug_descriptor {
	u8  bLength;
	u8  bDescriptorType;

	/* bulk endpoints with 8 byte maxpacket */
	u8  bDebugInEndpoint;
	u8  bDebugOutEndpoint;
};

#endif
