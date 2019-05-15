void scipher(char* a, char* key, char** res);
void invscipher(char* a, char* key, char** res);
void cipherit(char* a, unsigned char* exkey);
void invcipherit(char* a, unsigned char* exkey);
void cipher(char* a, char* key, char* res);
void invcipher(char* a, char* key, char* res);
void subbytes(unsigned char* state);
void invsubbytes(unsigned char* state);
void shiftrows(unsigned char* state);
void invshiftrows(unsigned char* state);
void mixcolumns(unsigned char* state);
void invmixcolumns(unsigned char* state);
void addroundkey(unsigned char* state, unsigned char* rkey);
void keyex(unsigned char* key, unsigned char* exkey);
void scipherD(char* a, char* key, int k);
void invscipherD(char* a, char* key, int k)
