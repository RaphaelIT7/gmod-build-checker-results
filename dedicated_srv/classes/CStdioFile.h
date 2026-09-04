// Generated header

class CStdioFile : public CStdFilesystemFile
{
public:
	virtual ~CStdioFile() override; // vtable[0]
	virtual ~CStdioFile() override; // vtable[1]
	virtual void FS_setbufsize(uint param_1); // vtable[2]
	virtual void FS_fclose(); // vtable[3]
	virtual void FS_fseek(longlong param_1, int param_2); // vtable[4]
	virtual void FS_ftell(); // vtable[5]
	virtual void FS_feof(); // vtable[6]
	virtual void FS_fread(void *param_1, uint param_2, uint param_3); // vtable[7]
	virtual void FS_fwrite(void *param_1, uint param_2); // vtable[8]
	virtual void FS_setmode(FileMode_t param_1); // vtable[9]
	virtual void FS_vfprintf(char *param_1, char *param_2); // vtable[10]
	virtual void FS_ferror(); // vtable[11]
	virtual void FS_fflush(); // vtable[12]
	virtual void FS_fgets(char *param_1, int param_2) override; // vtable[13]

	void _GLOBAL__sub_I_m_LockedFDMap(); // size[492]
	void FS_fopen(char *param_1, char *param_2, longlong *param_3); // size[663]
};
