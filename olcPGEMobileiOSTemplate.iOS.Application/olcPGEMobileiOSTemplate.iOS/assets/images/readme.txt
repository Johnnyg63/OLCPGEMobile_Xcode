
/******************************************/
Pixel Game Engone Mobile for Android & iOS
Folder: assests
/******************************************/

/******************************************/
1: Android does not support folder stuctures (well of course it does, but best not to try it)
2: Place all your assests in this folder
3: DO NOT create sub folders
4: All assests names must be lower case, including their extenstions
5: images: png, jpg, bmp, svg
	Use png everytime if possible
	best perfomance is optained with png
6: flat files: bin, jar, txt, out, csv
7: sound: mp3
8: Database: SQLLite 
9: file name: MyLogo.png this will not work use mylogo.png
10: All file names MUST be unique regardless of extenstion
	i.e. sprite.txt & sprite.png will not work
	Android is very smart at detecting the correct image files etc. 
	to display depending on your screen size, to do this it will
	create an internal index using the name of the file and location
	| Res 			| Res Name 		| Location 					 |
	| assests		| sprite		| scr/main/assests/sprite.png|
	| drawable		| sprite		| res/drawable/sprite.png|
	| drawable_hd	| sprite		| res/drawable_hd/sprite.png|
	etc etc
	if you use duplicate file names this index will break
/******************************************/