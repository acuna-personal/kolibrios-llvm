#!/bin/bash
# This script does for Linux the same as build.bat for DOS,
# it compiles the current KolibriOS applications

	fasm -m 16384 cnv_bmp.asm cnv_bmp.obj
	kpack cnv_bmp.obj
	exit 0



