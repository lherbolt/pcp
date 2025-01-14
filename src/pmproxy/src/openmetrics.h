/*
 * Copyright (c) 2019 Red Hat.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 */
#ifndef OPEN_METRICS_H
#define OPEN_METRICS_H

#include "pmwebapi.h"
#include "dict.h"

/* check if PCP metric type has valid Open Metrics form */
extern int open_metrics_type_check(sds);

/* convert PCP metric name to Open Metrics form */
extern sds open_metrics_name(sds, int);

/* convert PCP metric type to Open Metrics form */
extern sds open_metrics_semantics(sds);

/* convert an array of PCP labelsets into Open Metrics form */
extern void open_metrics_labels(pmWebLabelSet *, dict *);

#endif	/* OPEN_METRICS_H */
