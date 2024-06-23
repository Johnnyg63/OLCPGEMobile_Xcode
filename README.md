# OLC Pixel Game Engine Mobile 2.2.8 for Xcode

<p><b>Supports: Windows, Linux and Apple MAC</b></p>
<p><b>This project supports iOS devices SDK 13.5 --> 17.2 and beyond</b> <br/><br/></p>
<hr/>
<p><b><i>!!SHOUT OUTS!!</i></b><br/><br/>
 	<b><i>THANK YOU</i></b> to <a href='https://github.com/vitoralmeidasilva'>@VasCoder</a> without your testing this would not have been possible!<br/>
	<b><i>THANK YOU</i></b> to <a href='https://github.com/baderouaich/'>@baderouaich</a> for fixing the bug with OnUserDestroy()!<br/>
 	<b><i>THANK YOU</i></b> to <a href='https://github.com/Moros1138'>@Moros1138</a> for <a href='https://pgetinker.com/'>PGETinker</a> Check it out folks!!!<br/>
  	<b><i>THANK YOU</i></b> to <a href='https://github.com/OneLoneCode'>@Javidx9</a> for... well everything!<br/>

</p>
<hr/>



<p><img src='https://github.com/Johnnyg63/OLCPGEMobile_Xcode/assets/96908304/6545fc21-d300-42d2-99ea-428980669fd4' /></p>
<hr/>
<p>For Visual Studio All In One (Android and iOS) Project Template: <a href="https://github.com/Johnnyg63/OLCPGEMobileVisualStudio">OLC Pixel Game Engine Mobile 2.2.8 Visual Studio for Android and iOS</a></i></p>
<p>For Visual Studio Android Only (Windows) Use this project: <a href="https://github.com/Johnnyg63/OLCPGEMobileVisualStudio_Android">OLC Pixel Game Engine Mobile 2.2.8 for Android Visual Studio</a></i></p>
<p>For Android Studio (Windows/Linux/MAC) Use this project: <a href="https://github.com/Johnnyg63/OLCPGEMobile_AndroidStudio">OLC Pixel Game Engine Mobile 2.2.8 for Android Studio</a></i></p>
<p>For Xcode (MAC) Use this project: <a href="https://github.com/Johnnyg63/OLCPGEMobile_Xcode">OLC Pixel Game Engine Mobile 2.2.8 for Xcode</a></i></p>
<hr/>

<p><b>Supports olcPGEX_MiniAudio.h</b><br/><a href="https://github.com/Moros1138/olcPGEX_MiniAudio/">https://github.com/Moros1138/olcPGEX_MiniAudio/</a> thanks @Moros1138</p>

<ul>
  <li>2.01: BETA Port code from olcPixelGameEngine.h to olcPixelGameEngine_mobile.h</li>
  <li>2.02: Corrected support for X86</li>
  <li>2.03: Update EventManager to handle, Touch, Mouse and Keyboard events</li>
  <li>2.04: Corrected Touch offset, added 1 touch point, unlinked Mouse & Touch Events</li>
  <li>2.05: Sensors Support added</li>
  <li>2.06: Multi Touch Support</li>
  <li>2.06a: Added basic mouse support for Android Emulator</li>
  <li>2.07: Updated SIMD_SSE for Intel Atom devices, Updated GetTouch() to default to touch point zero</li>
  <li>2.07a: Corrected two small bugs in main.cpp</li>
  <li>2.08: Added ClearTouchPoints(int8_t startIndex = 0) for clearing of touch points at index x, some bug fixes too<br/> <i>Added Demos folder with some demos. Just Copy and Paste the code into main.cpp</i></li>
  <li>2.09: Added Demos folder with some demos
	<br/> Added: FileManager: for gaining access to the Android Assets APK and iOS Zip Packages
				<br/> app_LoadFileFromAssets()
				<br/> app_ExtractFileFromAssets()
				<br/> app_GetInternalAppStorage()
				<br/> app_GetExternalAppStorage()
				<br/> app_GetPublicAppStorage()
				<br/> SmartPtr filehandler
				<br/> LoadFileFromAssets()
				<br/> ExtractFileFromAssets()
				<br/> GetInternalAppStorage()
				<br/> GetExternalAppStorage()
				<br/> GetPublicAppStorage()
  </li>
  <li>2.10: Removed ASensor_getHandle() as it only supports SDK 29 and higher. Updated project to support SDK 21 to SDK32, Thank you @VasCoder</li>
  <li>2.11: Corrected offset error bug in Drawline,<br/> Added release config to build.gradle.template. Please see: <a href="https://developer.android.com/studio/publish/app-signing">https://developer.android.com/studio/publish/app-signing"</a> and<br/> Please see: <a href="https://developer.android.com/studio/publish/app-signing">https://stackoverflow.com/questions/9081877/how-do-i-debug-an-apk-that-is-signed-for-release</a> for more info<br/><b>NOTE: You cannot debug or deploy a release app unless you have a signing key (Android Developer Account)</b></li>
  <li>2.20 <b>Pre-Release!</b> Can now be used in Production Environment, have fun! <br/> Android Keyboard mapping completed for GetKey() <br/>Note if using a MacOS, Linux or Windows for debugging, some keys may not map correctly, directionally keys will be out of sync as Android is mapped to a Direction Pad by default</li>
  <li>2.21 <b>Full Production Release</b> </li>
  <li>2.22 Better support for the latest Android phones<br/>
			The Engine will now detect the correct OpenGLES setting for your Android phone and apply the correct settings</li>
  <li>2.23 Now with Sound, supports olcPGE_MiniAudio <a href="https://github.com/Moros1138/olcPGEX_MiniAudio/">https://github.com/Moros1138/olcPGEX_MiniAudio/</a> thanks @Moros1138
		   <br/>Updated EventManager::HandleInput to ensure Volume UP/Down/Mute, Camera and Power Buttons are released back to the OS after execution
  </li>
  <li>2.24 <b>iOS Beta support. Sensors not supported. Anything you develop for Android will work on the iOS</b> </li>
  <li>2.25 Corrected Fatal signal 11 (SIGSEGV), code 2 (SEGV_ACCERR), fault, forgot to take (subtract) the 1</li>
  <li>2.26 Updated olc_Configure to set OGLES_20 to use SDK 26->33. A big thanks you to @VasCoder for all his testing!!!!</li>
  <li>2.27 Removed mutexTouchPoints from main engine thread, the engine will run as fast as possible now!!! </li>
  <li>2.28 Correct onUserDestroy so that it is not called every frame. A Big thank you to <a href='https://github.com/baderouaich/'>@baderouaich</a>. <br/>Added OnLowMemoryWarning() </li>
</ul>
