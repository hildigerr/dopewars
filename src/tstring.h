/* tstring.h      "Translated string" wrappers for dopewars             */
/* Copyright (C)  1998-2000  Ben Webb                                   */
/*                Email: ben@bellatrix.pcl.ox.ac.uk                     */
/*                WWW: http://bellatrix.pcl.ox.ac.uk/~ben/dopewars/     */

/* This program is free software; you can redistribute it and/or        */
/* modify it under the terms of the GNU General Public License          */
/* as published by the Free Software Foundation; either version 2       */
/* of the License, or (at your option) any later version.               */

/* This program is distributed in the hope that it will be useful,      */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of       */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        */
/* GNU General Public License for more details.                         */

/* You should have received a copy of the GNU General Public License    */
/* along with this program; if not, write to the Free Software          */
/* Foundation, Inc., 59 Temple Place - Suite 330, Boston,               */
/*                   MA  02111-1307, USA.                               */

#ifndef __TSTRING_H__
#define __TSTRING_H__

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <glib.h>

void tstring_fmt(gchar **tformat,gchar ***tstrings,char *OrigFormat, ...);
void tstring_free(gchar *tformat,gchar **tstrings);

void dpg_print(gchar *format, ...);
gchar *dpg_strdup_printf(gchar *format, ...);
void dpg_string_sprintf(GString *string, gchar *format, ...);
void dpg_string_sprintfa(GString *string, gchar *format, ...);

gchar *GetDefaultTString(gchar *tstring);

#endif /* __TSTRING_H__ */