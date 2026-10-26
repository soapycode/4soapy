#define MAJOR 4
#define MINOR 1
#define PATCH 8

#define ST__(s) #s
#define ST_(s) ST__(s)
#define MAJOR_STR ST_(MAJOR)
#define MINOR_STR ST_(MINOR)
#define PATCH_STR ST_(PATCH)

// string
#define VN__(a,b,c) #a "." #b "." #c
#define VN_(a,b,c) VN__(a,b,c)
#define VERSION_NUMBER VN_(MAJOR,MINOR,PATCH)
#define VERSION_STRING "" VERSION_NUMBER

#define VERSION VERSION_STRING

#define WINDOW_NAME "4coder: " VERSION