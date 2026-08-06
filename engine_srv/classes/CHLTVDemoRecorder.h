// Generated header

class CHLTVDemoRecorder : public IDemoRecorder
{
public:
	virtual void GetDemoFile(); // vtable[0]
	virtual void GetRecordingTick(); // vtable[1]
	virtual void StartRecording(); // vtable[2]
	virtual void SetSignonState(); // vtable[3]
	virtual void IsRecording(); // vtable[4]
	virtual void PauseRecording(); // vtable[5]
	virtual void ResumeRecording(); // vtable[6]
	virtual void StopRecording(); // vtable[7]
	virtual void RecordCommand(); // vtable[8]
	virtual void RecordUserInput(); // vtable[9]
	virtual void RecordMessages(); // vtable[10]
	virtual void RecordPacket(); // vtable[11]
	virtual void RecordServerClasses(); // vtable[12]
	virtual void RecordStringTables(); // vtable[13]
	virtual void ResetDemoInterpolation() override; // vtable[14]
	virtual ~CHLTVDemoRecorder(); // vtable[15]
	virtual ~CHLTVDemoRecorder(); // vtable[16]

	_GLOBAL__sub_I_CHLTVDemoRecorder(); // size[0]
	void StopRecording(); // size[0]
	CHLTVDemoRecorder(); // size[0]
	void StartAutoRecording(); // size[0]
	void WriteMessages(); // size[0]
	void WriteServerInfo(); // size[0]
	void WriteSignonData(); // size[0]
	void WriteFrame(); // size[0]
};
