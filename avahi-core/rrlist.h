#ifndef foorrlisthfoo
#define foorrlisthfoo

/* $Id$ */

/***
  This file is part of avahi.
 
  avahi is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.
 
  avahi is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General
  Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public
  License along with avahi; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/


#include "rr.h"

typedef struct AvahiRecordList AvahiRecordList;

AvahiRecordList *avahi_record_list_new(void);
void avahi_record_list_free(AvahiRecordList *l);
void avahi_record_list_flush(AvahiRecordList *l);

AvahiRecord* avahi_record_list_next(AvahiRecordList *l, gboolean *flush_cache, gboolean *unicast_response, gboolean *auxiliary);
void avahi_record_list_push(AvahiRecordList *l, AvahiRecord *r, gboolean flush_cache, gboolean unicast_response, gboolean auxiliary);
void avahi_record_list_drop(AvahiRecordList *l, AvahiRecord *r);

gboolean avahi_record_list_empty(AvahiRecordList *l);

#endif
