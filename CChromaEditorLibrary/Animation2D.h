#pragma once

#include "ChromaSDKPluginTypes.h"
#include "AnimationBase.h"

namespace ChromaSDK
{
	class Animation2D : public AnimationBase
	{
	public:
		Animation2D();
		void Reset();
		EChromaSDKDeviceTypeEnum GetDeviceType();
		EChromaSDKDevice2DEnum GetDevice();
		bool SetDevice(EChromaSDKDevice2DEnum device);
		int GetDeviceId();
		std::vector<FChromaSDKColorFrame2D>& GetFrames();
		int GetFrameCount();
		float GetDuration(unsigned int index);
		void Load();
		void Unload();
		void Play(bool loop);
		void Pause();
		void Resume(bool loop);
		void Stop();
		void Update(float deltaTime);
		void ResetFrames();
		int Save(const char* path);
		void SetChromaCustom(bool flag);
		bool UseChromaCustom();
	private:
		EChromaSDKDevice2DEnum _mDevice;
		std::vector<FChromaSDKColorFrame2D> _mFrames;
		bool _mUseChromaCustom;
	};
}
