/*
Copyright (c) 2015, Plume Design Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
   3. Neither the name of the Plume Design Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * schema_consts.h
 */
#ifndef __HAVE_SCHEMA_CONST_H__
#define __HAVE_SCHEMA_CONST_H__

/* interfaces/plume.ovsschema constants not generated by schema ... */

#define SCHEMA_CONSTS_RADIO_TYPE_STR_2G     "2.4G"
#define SCHEMA_CONSTS_RADIO_TYPE_STR_5G     "5G"
#define SCHEMA_CONSTS_RADIO_TYPE_STR_5GL    "5GL"
#define SCHEMA_CONSTS_RADIO_TYPE_STR_5GU    "5GU"

/* Cloud Radio ifname's */
#define SCHEMA_CONSTS_RADIO_PHY_NAME_2G     "wifi0"
#define SCHEMA_CONSTS_RADIO_PHY_NAME_5G     "wifi1"
#define SCHEMA_CONSTS_RADIO_PHY_NAME_5GL    "wifi1"
#define SCHEMA_CONSTS_RADIO_PHY_NAME_5GU    "wifi2"

/* Cloud VIF ifname's */
#define SCHEMA_CONSTS_IF_NAME_POSTFIX_2G    "-ap-24"
#define SCHEMA_CONSTS_IF_NAME_POSTFIX_5G    "-ap-50"
#define SCHEMA_CONSTS_IF_NAME_POSTFIX_5GL   "-ap-50l"
#define SCHEMA_CONSTS_IF_NAME_POSTFIX_5GU   "-ap-50u"

#define SCHEMA_CONSTS_IF_NAME_PREFIX_HOME   "home"
#define SCHEMA_CONSTS_IF_NAME_PREFIX_BHAUL  "bhaul"
#define SCHEMA_CONSTS_IF_NAME_PREFIX_GUEST  "guest"

#define SCHEMA_CONSTS_IF_NAME_HOME_2G       SCHEMA_CONSTS_IF_NAME_PREFIX_HOME SCHEMA_CONSTS_IF_NAME_POSTFIX_2G
#define SCHEMA_CONSTS_IF_NAME_BHAUL_2G      SCHEMA_CONSTS_IF_NAME_PREFIX_BHAUL SCHEMA_CONSTS_IF_NAME_POSTFIX_2G
#define SCHEMA_CONSTS_IF_NAME_GUEST_2G      SCHEMA_CONSTS_IF_NAME_PREFIX_GUEST SCHEMA_CONSTS_IF_NAME_POSTFIX_2G

#define SCHEMA_CONSTS_IF_NAME_HOME_5G       SCHEMA_CONSTS_IF_NAME_PREFIX_HOME SCHEMA_CONSTS_IF_NAME_POSTFIX_5G
#define SCHEMA_CONSTS_IF_NAME_BHAUL_5G      SCHEMA_CONSTS_IF_NAME_PREFIX_BHAUL SCHEMA_CONSTS_IF_NAME_POSTFIX_5G
#define SCHEMA_CONSTS_IF_NAME_GUEST_5G      SCHEMA_CONSTS_IF_NAME_PREFIX_GUEST SCHEMA_CONSTS_IF_NAME_POSTFIX_5G

#define SCHEMA_CONSTS_IF_NAME_HOME_5GL      SCHEMA_CONSTS_IF_NAME_PREFIX_HOME SCHEMA_CONSTS_IF_NAME_POSTFIX_5GL
#define SCHEMA_CONSTS_IF_NAME_BHAUL_5GL     SCHEMA_CONSTS_IF_NAME_PREFIX_BHAUL SCHEMA_CONSTS_IF_NAME_POSTFIX_5GL
#define SCHEMA_CONSTS_IF_NAME_GUEST_5GL     SCHEMA_CONSTS_IF_NAME_PREFIX_GUEST SCHEMA_CONSTS_IF_NAME_POSTFIX_5GL

#define SCHEMA_CONSTS_IF_NAME_HOME_5GU      SCHEMA_CONSTS_IF_NAME_PREFIX_HOME SCHEMA_CONSTS_IF_NAME_POSTFIX_5GU
#define SCHEMA_CONSTS_IF_NAME_BHAUL_5GU     SCHEMA_CONSTS_IF_NAME_PREFIX_BHAUL SCHEMA_CONSTS_IF_NAME_POSTFIX_5GU
#define SCHEMA_CONSTS_IF_NAME_GUEST_5GU     SCHEMA_CONSTS_IF_NAME_PREFIX_GUEST SCHEMA_CONSTS_IF_NAME_POSTFIX_5GU

/* Cloud VIF type */
typedef enum {
    SCHEMA_CONSTS_VIF_TYPE_NONE = 0,
    SCHEMA_CONSTS_VIF_TYPE_BHAUL,
    SCHEMA_CONSTS_VIF_TYPE_HOME,
    SCHEMA_CONSTS_VIF_TYPE_GUEST
} schema_consts_vif_type_t;

/* Cloud bridge ifname's */
#define SCHEMA_CONSTS_BR_NAME_WAN            "br-wan"
#define SCHEMA_CONSTS_BR_NAME_HOME           "br-home"
#define SCHEMA_CONSTS_BR_NAME_GUEST          "br-guest"

/* Cloud channel mode */
#define SCHEMA_CONSTS_CH_MODE_CLOUD          "cloud"
#define SCHEMA_CONSTS_CH_MODE_AUTO           "auto"
#define SCHEMA_CONSTS_CH_MODE_MANUAL         "manual"

/* Cloud channel mode */
#define SCHEMA_CONSTS_DEVICE_MODE_CLOUD      "cloud"
#define SCHEMA_CONSTS_DEVICE_MODE_MONITOR    "monitor"
#define SCHEMA_CONSTS_DEVICE_MODE_BATTERY    "battery"

#define SCHEMA_CONSTS_SSID_BROAD_ENABLED     "enabled"
#define SCHEMA_CONSTS_SSID_BROAD_DISABLED    "disabled"

#define SCHEMA_CONSTS_VIF_MODE_AP            "ap"
#define SCHEMA_CONSTS_VIF_MODE_STA           "sta"

#define SCHEMA_CONSTS_MAC_TYPE_NONE          "none"
#define SCHEMA_CONSTS_MAC_TYPE_BLACKLIST     "blacklist"
#define SCHEMA_CONSTS_MAC_TYPE_WHITELIST     "whitelist"

#define SCHEMA_CONSTS_DM_CMD_REBOOT          "reboot"
#define SCHEMA_CONSTS_DM_CMD_RESTART         "restart"
#define SCHEMA_CONSTS_DM_CMD_EXECUTE         "execute"

/* VIF security */
#define SCHEMA_CONSTS_SECURITY_KEY              "key"
#define SCHEMA_CONSTS_SECURITY_MODE             "mode"
#define SCHEMA_CONSTS_SECURITY_RADIUS_IP        "radius_server_ip"
#define SCHEMA_CONSTS_SECURITY_RADIUS_PORT      "radius_server_port"
#define SCHEMA_CONSTS_SECURITY_RADIUS_SECRET    "radius_server_secret"

#define SCHEMA_CONSTS_SECURITY_ENCRYPT          "encryption"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_OPEN     "OPEN"

#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WEP      "WEP"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WEP_64   "64"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WEP_128  "126"

#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WPA      "WPA-PSK"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WPA_EAP  "WPA-EAP"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WPA_1    "1"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WPA_2    "2"
#define SCHEMA_CONSTS_SECURITY_ENCRYPT_WPA_MIX  "mixed"

#define SCHEMA_CONSTS_INET_ENABLED          "enabled"
#define SCHEMA_CONSTS_INET_DNS              "dns"
#define SCHEMA_CONSTS_INET_DNS_PRIMARY      "primary"
#define SCHEMA_CONSTS_INET_DNS_SECONDARY    "secondary"

#define SCHEMA_CONSTS_INET_IP_SCHEME_DHCP   "dhcp"
#define SCHEMA_CONSTS_INET_IP_SCHEME_STATIC "static"

#define SCHEMA_CONSTS_INET_DHCPD            "dhcpd"

#define SCHEMA_CONSTS_INET_DHCP_OPTION      "dhcp_option"
#define SCHEMA_CONSTS_INET_DHCP_IP_START    "start"
#define SCHEMA_CONSTS_INET_DHCP_IP_STOP     "stop"
#define SCHEMA_CONSTS_INET_DHCP_LEASE_TIME  "lease_time"
#define SCHEMA_CONSTS_INET_DHCP_FORCE       "force"


#endif /* __HAVE_SCHEMA_CONST_H__ */
