#!/bin/sh
id -nG $FT_USER | tr [:blank:] , | tr -d '\n'
