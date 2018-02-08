#ifndef __LOG_H__
#define __LOG_H__

#define AV_LOG

#ifdef AV_LOG
#define avlog(fmt,args...) fprintf(stderr,"[line:%d %s]"fmt"\n",__LINE__,__FILE__,##args);
#else
#define avlog(fmt,...)
#endif

#endif
