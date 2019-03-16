This Generic Makefile for C/C++ Program source from: 
           http://ldc.usb.ve/~vtheok/cursos/ci2126/sd10/practicas/code7/Makefile
Renew by ken, http://ken8341.blog.163.com/blog/static/2177720442014111141239309/

################################################################################
# THIS IS [Makefile_For_GNU_C_CXX_depstar_release] 2014/12/15 (version 0.583.2)
#
# Generic Makefile for C/C++ Program
#
# License: GPL (General Public License)
# Author:  whyglinux <whyglinux AT gmail DOT com>
# Date:    2006/03/04 (version 0.1)
#          2007/03/24 (version 0.2)
#          2007/04/09 (version 0.3)
#          2007/06/26 (version 0.4)
#          2008/04/05 (version 0.5)
# Description:
# ------------
# This is an easily customizable makefile template. The purpose is to
# provide an instant building environment for C/C++ programs.
#
# It searches all the C/C++ source files in the specified directories,
# makes dependencies, compiles and links to form an executable.
#
# Besides its default ability to build C/C++ programs which use only
# standard C/C++ libraries, you can customize the Makefile to build
# those using other libraries. Once done, without any changes you can
# then build programs using the same or less libraries, even if source
# files are renamed, added or removed. Therefore, it is particularly
# convenient to use it to build codes for experimental or study use.
#
# GNU make is expected to use the Makefile. Other versions of makes
# may or may not work.
#
# Usage:
# ------
# 1. Copy the Makefile to your program directory.
# 2. Customize in the "Customizable Section" only if necessary:
#    * to use non-standard C/C++ libraries, set pre-processor or compiler
#      options to <MY_CFLAGS> and linker ones to <MY_LIBS>
#      (See Makefile.gtk+-2.0 for an example)
#    * to search sources in more directories, set to <SRCDIRS>
#    * to specify your favorite program name, set to <PROGRAM>
# 3. Type make to start building your program.
#
# Make Target:
# ------------
# The Makefile provides the following targets to make:
#   $ make           compile and link
#   $ make NODEP=yes compile and link without generating dependencies
#   $ make objs      compile only (no linking)
#   $ make tags      create tags for Emacs editor
#   $ make ctags     create ctags for VI editor
#   $ make clean     clean objects and the executable file
#   $ make distclean clean objects, the executable and dependencies
#   $ make help      get the usage of the makefile
#
#===============================================================================
#
# [Makefile_For_GNU_C_CXX_depstar_release] Description:
# -----------------------------------------
# ken renew it form china on the base of the original: 2008/04/05 (version 0.5).
# License: GPL (General Public License)
# Author:  ken <ken8341 DOT blog DOT 163 DOT com>
#
# ADD Make Target:
# ----------------
# 1. $ make cleanall   Add this function to clean the objects, executable, 
#    dependencies and any files that you can define.
# 2. Support multiple directories for GNU C/C++ program. 
# 3. Support setup SRCs and HEADERs in different directories.
# 4. Support enble/disable auto run the executable program after "make".
# 5. Support display the include directories of the header in "INCDIRS" column.
#
# This is a powerful generic GNU C/C++  "make" template that I can see before.
# Why the modern good idea and technology are not source from china? I Think
# that the main reason is a rubbish animal ideologist of Kong Qiu which born 
# in china, and make china fall behind the world thousands years. Shit confucius
# this hired thugs of the devil. Long live the freedom spirit!
#
# Bug:
# ----
# 1. In C/CXX mix source code work in the Cygwin on windows xp, Seldom when the 
# source code has an special error can cause the Makefile unvalid, Such as 
# "*** missing separator. Stop."error, This show that the error in the "xyz.d" 
# file.
# Solution: 
# Correct error of the source code relation to the name of "xyz", such as 
# "xyz.c" or "xyz.cxx" or "xyz.h" file, etc. 
# Temporary solution is make the error relation source files disable and delete 
# all the “*.d” files by manual can make the Makefile valid again. Another 
# solution perhas can use "$ make NODEP=yes" to make without generating 
# dependencies.
# Reason:
# Not know yet, Once I only move the code to other place in the header file that
# can solve, But when I move the code back to the original place, The error not 
# show again. It is seem that perhas cause by the platform of WinXP and Cygwin.
#///////////////////////////////////////////////////////////////////////////////

The example has pass on this:
gcc (GCC) 4.8.3
g++ (GCC) 4.8.3
GNU bash, version 4.1.17(9)-release (i686-pc-cygwin)

Cygwin 2014 first new online install on windows xp.
$ cygcheck -c cygwin
Cygwin Package Information
Package              Version        Status
cygwin               1.7.33-1       OK


Usage:
# cd example directory and run "make", OK!
$ cd example
$ make
