/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "JetBrains Mono:size=11" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/*Custom colors*/
static char normfgcolor[] = "#ccc3bf";
static char normbgcolor[] = "#243c3f";
static char selfgcolor[]  = "#ccc3bf";
static char selbgcolor[]  = "#A68D75";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
  [SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	/* { "font",        STRING, &font }, */
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
	/* { "prompt",      STRING, &prompt }, */
};
