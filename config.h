/* user and group to drop privileges to */
static const char *user  = "jonathan";
static const char *group = "jonathan";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#32a852",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
