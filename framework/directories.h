#ifdef WIN32
#define LOCAL_FILE_DIR "data\\"
#define GLOBAL_FILE_DIR "..\\data\\"
#endif //WIN32

#if defined(LOAD_X11) || defined(__APPLE__)
#define LOCAL_FILE_DIR "data/"
#define GLOBAL_FILE_DIR "../data/"
#endif //LOAD_X11

