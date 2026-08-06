// Generated header

class CStdioFile : public CStdFilesystemFile
{
public:
	virtual ~CStdioFile() override; // vtable[0]
	virtual ~CStdioFile() override; // vtable[1]
	virtual void FS_setbufsize(); // vtable[2]
	virtual void FS_fclose(); // vtable[3]
	virtual void FS_fseek(); // vtable[4]
	virtual void FS_ftell(); // vtable[5]
	virtual void FS_feof(); // vtable[6]
	virtual void FS_fread(); // vtable[7]
	virtual void FS_fwrite(); // vtable[8]
	virtual void FS_setmode(); // vtable[9]
	virtual void FS_vfprintf(); // vtable[10]
	virtual void FS_ferror(); // vtable[11]
	virtual void FS_fflush(); // vtable[12]
	virtual void FS_fgets() override; // vtable[13]

	void _GLOBAL__sub_I_m_LockedFDMap(); // size[0]
	void FS_fopen(); // size[0]
};
