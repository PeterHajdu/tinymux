/*
 * UFC-crypt: ultra fast crypt(3) implementation
 *
 * Copyright (C) 1991, 1992, 1993, 1996, 1997 Free Software Foundation, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; see the file COPYING.LIB.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * @(#)crypt-private.h	1.4 12/20/96
 */

/* Prototypes for local functions in libcrypt.h.  */

extern void _ufc_doit_r (ufc_long itr, struct crypt_data *__data,
			 ufc_long *res);


/* crypt_util.c */
extern void __init_des_r (struct crypt_data *__data);
extern void __init_des (void);
extern char *fcrypt (const char *key, const char *salt);

extern void _ufc_setup_salt_r (const char *s, struct crypt_data *__data);
extern void _ufc_mk_keytab_r (char *key, struct crypt_data *__data);
extern void _ufc_dofinalperm_r (ufc_long *res, struct crypt_data *__data);
extern void _ufc_output_conversion_r (ufc_long v1, ufc_long v2,
				      const char *salt,
				      struct crypt_data *__data);
