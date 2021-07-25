/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

#define FONTSIZE "13"

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"Liberation Mono:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"NotoColorEmoji:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"JoyPixels:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"FontAwesome:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"misc fixed:pixelsize="FONTSIZE":antialias=true:autohint=true;1",
	"unifont:fontformat=truetype:pixelsize="FONTSIZE":antialias=false:antialias=true:autohint=true",
	"siji:pixelsize="FONTSIZE":antialias=true:autohint=true;1",
	"IPAexMincho:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"IPAPMincho:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"IPAMincho:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"IPAexGothic:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"IPAPGothic:pixelsize="FONTSIZE":antialias=true:autohint=true",
	"IPAGothic:pixelsize="FONTSIZE":antialias=true:autohint=true",
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
