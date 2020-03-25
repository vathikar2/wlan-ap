# Copyright (c) 2015, Plume Design Inc. All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#    1. Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#    2. Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#    3. Neither the name of the Plume Design Inc. nor the
#       names of its contributors may be used to endorse or promote products
#       derived from this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
# DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

##############################################################################
#
# Flow Collection Manager
#
##############################################################################
UNIT_NAME := fcm

UNIT_DISABLE := $(if $(CONFIG_TARGET_MANAGER_FCM),n,y)

# For unit testing in native builds, if compiled with clang:
# - compile the manager as a library
# - omit fcm_main.c (the UT code provides its own main file)
# Otherwise, compile the manager as a binary.
ifeq (,$(findstring clang,$(CC)))
	UNIT_TYPE := BIN
	UNIT_SRC := src/fcm_main.c
	UNIT_SRC += src/fcm_ovsdb.c
else
	UNIT_TYPE := LIB
	UNIT_SRC := src/fcm_ovsdb.c
endif

UNIT_SRC += src/fcm_mgr.c


UNIT_CFLAGS := -I$(UNIT_PATH)/inc

UNIT_LDFLAGS := -lev -ljansson

UNIT_EXPORT_CFLAGS := $(UNIT_CFLAGS)
UNIT_EXPORT_LDFLAGS := $(UNIT_LDFLAGS)

UNIT_DEPS += src/lib/ds
UNIT_DEPS += src/lib/common
UNIT_DEPS += src/lib/ovsdb
UNIT_DEPS += src/lib/pjs
UNIT_DEPS += src/lib/schema
UNIT_DEPS += src/lib/version
UNIT_DEPS += src/lib/evsched
UNIT_DEPS += src/lib/datapipeline
UNIT_DEPS += src/lib/json_util
UNIT_DEPS += src/lib/network_metadata
UNIT_DEPS += src/lib/policy_tags
UNIT_DEPS += src/lib/fcm_filter
UNIT_DEPS += src/lib/ip_map
