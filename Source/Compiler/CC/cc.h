#include <stdio.h>

#define  VERSION     2
#define  MAJREV      2
#define  MINREV      0

direct int  aflag = FALSE,
            bflag = FALSE,
            cflag = FALSE,
            fflag = FALSE,
            llflg = FALSE,
            mflag = FALSE,
            oflag = TRUE,
            o2flg = FALSE,
            pflag = FALSE,
            p2flg = FALSE,
            qflag = FALSE,
            rflag = FALSE,
            sflag = FALSE,
            s2flg = FALSE,
            tflag = FALSE,
            xflag = FALSE,
            zflag = FALSE,
            tmpdir = TRUE,

            childid = 0,
            childstat = 0,
            filcnt = 0,
            hello = FALSE,
            libcnt = 0,
            maccnt = 0,
            newopath = 0,
            nullflag = FALSE,
            rsufflg = FALSE,
            loopcnt;

direct char *thisfilp = 0,
            *lasfilp = 0;

direct int  frkprmsiz = 0;
direct char *frkprmp = 0;

char        *tmproot[] = { "/R", "/R0", "/DD/TMP"} ;
char        tmptail[] = "ctmp.XXXXXX";
char        tmpname[64] = "";

char        mainline[20] = "cstart.r";

char        *libarray[4],
            *namarray[100],
            suffarray[100],
            *macarray[100],
            ofn[60],
            *xtramem,
            *modname,
            *edition,
            destfile[60],
            srcfile[60],
            objname[60],
            parmbuf[256],
            devnam1[20];
