/*
 * Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MT7603_DMA_H
#define __MT7603_DMA_H

#include "dma.h"

#define MT_RXD0_LENGTH			GENMASK(15, 0)
#define MT_RXD0_PKT_TYPE		GENMASK(31, 29)

#define MT_RXD0_NORMAL_ETH_TYPE_OFS	GENMASK(22, 16)
#define MT_RXD0_NORMAL_IP_SUM		BIT(23)
#define MT_RXD0_NORMAL_UDP_TCP_SUM	BIT(24)
#define MT_RXD0_NORMAL_GROUP_1		BIT(25)
#define MT_RXD0_NORMAL_GROUP_2		BIT(26)
#define MT_RXD0_NORMAL_GROUP_3		BIT(27)
#define MT_RXD0_NORMAL_GROUP_4		BIT(28)

enum rx_pkt_type {
	PKT_TYPE_TXS		= 0,
	PKT_TYPE_TXRXV		= 1,
	PKT_TYPE_NORMAL		= 2,
	PKT_TYPE_RX_DUP_RFB	= 3,
	PKT_TYPE_RX_TMR		= 4,
	PKT_TYPE_RETRIEVE	= 5,
	PKT_TYPE_RX_EVENT	= 7,
};

#define MT_RXD1_NORMAL_BSSID		GENMASK(31, 26)
#define MT_RXD1_NORMAL_PAYLOAD_FORMAT	GENMASK(25, 24)
#define MT_RXD1_NORMAL_HDR_TRANS	BIT(23)
#define MT_RXD1_NORMAL_HDR_OFFSET	BIT(22)
#define MT_RXD1_NORMAL_MAC_HDR_LEN	GENMASK(21, 16)
#define MT_RXD1_NORMAL_CH_FREQ		GENMASK(15, 8)
#define MT_RXD1_NORMAL_KEY_ID		GENMASK(7, 6)
#define MT_RXD1_NORMAL_BEACON_UC	BIT(5)
#define MT_RXD1_NORMAL_BEACON_MC	BIT(4)
#define MT_RXD1_NORMAL_BCAST		BIT(3)
#define MT_RXD1_NORMAL_MCAST		BIT(2)
#define MT_RXD1_NORMAL_U2M		BIT(1)
#define MT_RXD1_NORMAL_HTC_VLD		BIT(0)

#define MT_RXD2_NORMAL_NON_AMPDU	BIT(31)
#define MT_RXD2_NORMAL_NON_AMPDU_SUB	BIT(30)
#define MT_RXD2_NORMAL_NDATA		BIT(29)
#define MT_RXD2_NORMAL_NULL_FRAME	BIT(28)
#define MT_RXD2_NORMAL_FRAG		BIT(27)
#define MT_RXD2_NORMAL_UDF_VALID	BIT(26)
#define MT_RXD2_NORMAL_LLC_MIS		BIT(25)
#define MT_RXD2_NORMAL_MAX_LEN_ERROR	BIT(24)
#define MT_RXD2_NORMAL_AMSDU_ERR	BIT(23)
#define MT_RXD2_NORMAL_LEN_MISMATCH	BIT(22)
#define MT_RXD2_NORMAL_TKIP_MIC_ERR	BIT(21)
#define MT_RXD2_NORMAL_ICV_ERR		BIT(20)
#define MT_RXD2_NORMAL_CLM		BIT(19)
#define MT_RXD2_NORMAL_CM		BIT(18)
#define MT_RXD2_NORMAL_FCS_ERR		BIT(17)
#define MT_RXD2_NORMAL_SW_BIT		BIT(16)
#define MT_RXD2_NORMAL_SEC_MODE		GENMASK(15, 12)
#define MT_RXD2_NORMAL_TID		GENMASK(11, 8)
#define MT_RXD2_NORMAL_WLAN_IDX		GENMASK(7, 0)

#define MT_RXD3_NORMAL_PF_STS		GENMASK(31, 30)
#define MT_RXD3_NORMAL_PF_MODE		BIT(29)
#define MT_RXD3_NORMAL_CLS_BITMAP	GENMASK(28, 19)
#define MT_RXD3_NORMAL_WOL		GENMASK(18, 14)
#define MT_RXD3_NORMAL_MAGIC_PKT	BIT(13)
#define MT_RXD3_NORMAL_OFLD		GENMASK(12, 11)
#define MT_RXD3_NORMAL_CLS		BIT(10)
#define MT_RXD3_NORMAL_PATTERN_DROP	BIT(9)
#define MT_RXD3_NORMAL_TSF_COMPARE_LOSS	BIT(8)
#define MT_RXD3_NORMAL_RXV_SEQ		GENMASK(7, 0)

#define MT_RXV1_VHTA1_B5_B4		GENMASK(31, 30)
#define MT_RXV1_VHTA2_B8_B1		GENMASK(29, 22)
#define MT_RXV1_HT_NO_SOUND		BIT(21)
#define MT_RXV1_HT_SMOOTH		BIT(20)
#define MT_RXV1_HT_SHORT_GI		BIT(19)
#define MT_RXV1_HT_AGGR			BIT(18)
#define MT_RXV1_VHTA1_B22		BIT(17)
#define MT_RXV1_FRAME_MODE		GENMASK(16, 15)
#define MT_RXV1_TX_MODE			GENMASK(14, 12)
#define MT_RXV1_HT_EXT_LTF		GENMASK(11, 10)
#define MT_RXV1_HT_AD_CODE		BIT(9)
#define MT_RXV1_HT_STBC			GENMASK(8, 7)
#define MT_RXV1_TX_RATE			GENMASK(6, 0)

#define MT_RXV2_VHTA1_B16_B6		GENMASK(31, 21)
#define MT_RXV2_LENGTH			GENMASK(20, 0)

#define MT_RXV3_F_AGC1_CAL_GAIN		GENMASK(31, 29)
#define MT_RXV3_F_AGC1_EQ_CAL		BIT(28)
#define MT_RXV3_RCPI1			GENMASK(27, 20)
#define MT_RXV3_F_AGC0_CAL_GAIN		GENMASK(19, 17)
#define MT_RXV3_F_AGC0_EQ_CAL		BIT(16)
#define MT_RXV3_RCPI0			GENMASK(15, 8)
#define MT_RXV3_SEL_ANT			BIT(7)
#define MT_RXV3_ACI_DET_X		BIT(6)
#define MT_RXV3_OFDM_FREQ_TRANS_DETECT	BIT(5)
#define MT_RXV3_VHTA1_B21_B17		GENMASK(4, 0)

#define MT_RXV4_F_AGC_CAL_GAIN		GENMASK(31, 29)
#define MT_RXV4_F_AGC2_EQ_CAL		BIT(28)
#define MT_RXV4_IB_RSSI1		GENMASK(27, 20)
#define MT_RXV4_F_AGC_LPF_GAIN_X	GENMASK(19, 16)
#define MT_RXV4_WB_RSSI_X		GENMASK(15, 8)
#define MT_RXV4_IB_RSSI0		GENMASK(7, 0)

#define MT_RXV5_LTF_SNR0		GENMASK(31, 26)
#define MT_RXV5_LTF_PROC_TIME		GENMASK(25, 19)
#define MT_RXV5_FOE			GENMASK(18, 7)
#define MT_RXV5_C_AGC_SATE		GENMASK(6, 4)
#define MT_RXV5_F_AGC_LNA_GAIN_0	GENMASK(3, 2)
#define MT_RXV5_F_AGC_LNA_GAIN_1	GENMASK(1, 0)

#define MT_RXV6_C_AGC_STATE		GENMASK(30, 28)
#define MT_RXV6_NS_TS_FIELD		GENMASK(27, 25)
#define MT_RXV6_RX_VALID		BIT(24)
#define MT_RXV6_NF2			GENMASK(23, 16)
#define MT_RXV6_NF1			GENMASK(15, 8)
#define MT_RXV6_NF0			GENMASK(7, 0)

#define MT_TXD0_P_IDX			BIT(31)
#define MT_TXD0_Q_IDX			GENMASK(30, 27)
#define MT_TXD0_UTXB			BIT(26)
#define MT_TXD0_UNXV			BIT(25)
#define MT_TXD0_UDP_TCP_SUM		BIT(24)
#define MT_TXD0_IP_SUM			BIT(23)
#define MT_TXD0_ETH_TYPE_OFFSET		GENMASK(22, 16)
#define MT_TXD0_TX_BYTES		GENMASK(15, 0)

#define MT_TXD1_OWN_MAC			GENMASK(31, 26)
#define MT_TXD1_PROTECTED		BIT(23)
#define MT_TXD1_TID			GENMASK(22, 20)
#define MT_TXD1_NO_ACK			BIT(19)
#define MT_TXD1_HDR_PAD			GENMASK(18, 16)
#define MT_TXD1_FT			BIT(15)
#define MT_TXD1_HDR_FORMAT		GENMASK(14, 13)
#define MT_TXD1_HDR_INFO		GENMASK(12, 8)
#define MT_TXD1_WLAN_IDX		GENMASK(7, 0)

#define MT_TXD2_FIX_RATE		BIT(31)
#define MT_TXD2_TIMING_MEASURE		BIT(30)
#define MT_TXD2_BA_DISABLE		BIT(29)
#define MT_TXD2_POWER_OFFSET		GENMASK(28, 24)
#define MT_TXD2_MAX_TX_TIME		GENMASK(23, 16)
#define MT_TXD2_FRAG			GENMASK(15, 14)
#define MT_TXD2_HTC_VLD			BIT(13)
#define MT_TXD2_DURATION		BIT(12)
#define MT_TXD2_BIP			BIT(11)
#define MT_TXD2_MULTICAST		BIT(10)
#define MT_TXD2_RTS			BIT(9)
#define MT_TXD2_SOUNDING		BIT(8)
#define MT_TXD2_NDPA			BIT(7)
#define MT_TXD2_NDP			BIT(6)
#define MT_TXD2_FRAME_TYPE		GENMASK(5, 4)
#define MT_TXD2_SUB_TYPE		GENMASK(3, 0)

#define MT_TXD3_SN_VALID		BIT(31)
#define MT_TXD3_PN_VALID		BIT(30)
#define MT_TXD3_SEQ			GENMASK(27, 16)
#define MT_TXD3_REM_TX_COUNT		GENMASK(15, 11)
#define MT_TXD3_TX_COUNT		GENMASK(10, 6)

#define MT_TXD4_PN_LOW			GENMASK(31, 0)

#define MT_TXD5_PN_HIGH			GENMASK(31, 16)
#define MT_TXD5_SW_POWER_MGMT		BIT(13)
#define MT_TXD5_BA_SEQ_CTRL		BIT(12)
#define MT_TXD5_DA_SELECT		BIT(11)
#define MT_TXD5_TX_STATUS_HOST		BIT(10)
#define MT_TXD5_TX_STATUS_MCU		BIT(9)
#define MT_TXD5_TX_STATUS_FMT		BIT(8)
#define MT_TXD5_PID			GENMASK(7, 0)

#define MT_TXD6_SGI			BIT(31)
#define MT_TXD6_LDPC			BIT(30)
#define MT_TXD6_TX_RATE			GENMASK(29, 18)
#define MT_TXD6_I_TXBF			BIT(17)
#define MT_TXD6_E_TXBF			BIT(16)
#define MT_TXD6_DYN_BW			BIT(15)
#define MT_TXD6_ANT_PRI			GENMASK(14, 12)
#define MT_TXD6_SPE_EN			BIT(11)
#define MT_TXD6_BW			GENMASK(10, 8)
#define MT_TXD6_ANT_ID			GENMASK(7, 2)
#define MT_TXD6_FIXED_RATE		BIT(0)

#endif
