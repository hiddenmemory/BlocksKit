#if __has_feature(objc_generics)
#define _gsingle(CODE) <CODE>
#define _gpair(LEFT,RIGHT) <LEFT,RIGHT>
#else
#warning Recommend upgrading to Xcode 7
#define _gsingle(CODE)
#define _gpair(LEFT,RIGHT)
#define KeyType id
#define ObjectType id
#endif