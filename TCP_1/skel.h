/*************************************************************************
	> File Name: skel.h
	> Author: WJW
	> Mail: 1971767787@qq.com
	> Created Time: 2014年04月09日 星期三 19时11分09秒
 ************************************************************************/

#ifndef __SKEL_H__
#define __SKEL_H__

#define INIT() ( program_name = strrchr( argv[0], '/' )) ? program_name++: (program_name = agrv[0])
#define EXIT(s) exit(s)
#define CLOSE() if ( close( s )) error(1, error, "close failed")
#define set_errno(e) error = (e)
#define isvalidsock(s) ((s) >= 0)

typedef int SOCKET;
#endif
