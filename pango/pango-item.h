/* Pango
 * pango-item.h: Structure for storing run information
 *
 * Copyright (C) 2000 Red Hat Software
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __PANGO_ITEM_H__
#define __PANGO_ITEM_H__

#include <pango/pango-types.h>
#include <pango/pango-item.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct _PangoAnalysis PangoAnalysis;
typedef struct _PangoItem PangoItem;

struct _PangoAnalysis
{
  PangoEngineShape *shape_engine;
  PangoEngineLang  *lang_engine;
  PangoFont        *font;
  guint8 level;
};

struct _PangoItem
{
  gint offset;
  gint length;
  gint num_chars;
  GSList *extra_attrs;
  PangoAnalysis analysis;
};

PangoItem *pango_item_new  (void);
PangoItem *pango_item_copy (PangoItem *item);
void       pango_item_free (PangoItem *item);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __PANGO_ITEM_H__ */
