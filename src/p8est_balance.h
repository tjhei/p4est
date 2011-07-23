/*
  This file is part of p4est.
  p4est is a C library to manage a collection (a forest) of multiple
  connected adaptive quadtrees or octrees in parallel.

  Copyright (C) 2011 The University of Texas System
  Written by Carsten Burstedde, Lucas C. Wilcox, and Tobin Isaac

  p4est is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  p4est is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with p4est; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#ifndef P8EST_BALANCE_H
#define P8EST_BALANCE_H

#include <p8est.h>

int                 p8est_balance_face_test (p8est_quadrant_t * restrict q,
                                             p8est_quadrant_t * restrict p,
                                             int face, p8est_connect_type_t
                                             balance, sc_array_t * seeds);

int                 p8est_balance_corner_test (p8est_quadrant_t * restrict q,
                                               p8est_quadrant_t * restrict p,
                                               int face, p8est_connect_type_t
                                               balance, sc_array_t * seeds);

int                 p8est_balance_edge_test (p8est_quadrant_t * restrict q,
                                             p8est_quadrant_t * restrict p,
                                             int face, p8est_connect_type_t
                                             balance, sc_array_t * seeds);

int                 p8est_balance_test (p8est_quadrant_t * restrict q,
                                        p8est_quadrant_t * restrict p,
                                        p8est_connect_type_t balance,
                                        sc_array_t * seeds);

#endif