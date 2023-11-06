/* SPDX-License-Identifier: GPL-2.0 */
/*
 * ddbridge-ci.h: Digital Devices bridge CI (DuoFlex, CI Bridge) support
 *
 * Copyright (C) 2010-2017 Digital Devices GmbH
 *                         Marcus Metzler <mocm@metzlerbros.de>
 *                         Ralph Metzler <rjkm@metzlerbros.de>
 */

#ifndef __DDBRIDGE_CI_H__
#define __DDBRIDGE_CI_H__

#include "ddbridge.h"

/******************************************************************************/

int ddb_ci_attach(struct ddb_port *port, u32 bitrate);
void ddb_ci_detach(struct ddb_port *port);

#endif /* __DDBRIDGE_CI_H__ */
