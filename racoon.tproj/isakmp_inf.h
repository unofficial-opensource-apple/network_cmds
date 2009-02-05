/*	$KAME: isakmp_inf.h,v 1.12 2000/09/13 04:50:26 itojun Exp $	*/

/*
 * Copyright (C) 1995, 1996, 1997, and 1998 WIDE Project.
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the project nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE PROJECT AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE PROJECT OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

struct saproto;
extern int isakmp_info_recv __P((struct ph1handle *, vchar_t *));
extern int isakmp_info_send_d1 __P((struct ph1handle *));
extern int isakmp_info_send_d2 __P((struct ph2handle *));
extern int isakmp_info_send_nx __P((struct isakmp *,
	struct sockaddr *, struct sockaddr *, int, vchar_t *));
extern int isakmp_info_send_n1 __P((struct ph1handle *, int, vchar_t *));
extern int isakmp_info_send_n2 __P((struct ph2handle *, int, vchar_t *));
extern int isakmp_info_send_common __P((struct ph1handle *,
	vchar_t *, u_int32_t, int));

extern vchar_t * isakmp_add_pl_n __P((vchar_t *, u_int8_t **, int,
	struct saproto *, vchar_t *));

extern void isakmp_check_notify __P((struct isakmp_gen *, struct ph1handle *));
