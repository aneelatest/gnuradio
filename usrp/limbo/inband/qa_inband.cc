/* -*- c++ -*- */
/*
 * Copyright 2007 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <qa_inband.h>
#include <qa_inband_packet_prims.h>
#include <qa_inband_usrp_server.h>

CppUnit::TestSuite *
qa_inband::suite()
{
  CppUnit::TestSuite	*s = new CppUnit::TestSuite("inband");

  s->addTest (qa_inband_packet_prims::suite());
  s->addTest (qa_inband_usrp_server::suite());

  return s;
}