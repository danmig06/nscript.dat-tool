# nscript.dat-tool
this is a decryptor/encryptor for NScripter's nscript.dat files and a reverse engineering of the original windows-only nsdec.exe tool, its algorithm boils down to XORing every single byte in the file with the value 0x84 (decimal 132), basically inverting the 8th and 3rd bits starting from the right, and this is not the only encoding the engine supports, it seems that every game written in NScripter either uses scripts in this format (.dat), uses plaintext as its script (not only .txt, but .u and .utf as well), or put the script in an archive file (such as arc.nsa or arc.sar).<br>
this tool will <b>only</b> work with NScripter games that use "compiled" scripts with .dat extentions, that heavily depends on what version of the game you have, and thus can be used on any of the visual novels in the list below as long as you see a nscript.dat file in a game's directory, then follow the steps at the bottom of this file and this tool should do the work for you.
As for the newer version of the engine, P(proportional)O(open)Nscripter, i have not yet tested the algorithm aganist pscript.dat, that i personally think is encoded in a similar manner, i recommend to try that as well.<br>
you can find the list of all the games that use NScripter <a href="https://en.m.wikipedia.org/wiki/Category:NScripter_games">here</a>.<br>

<h1>Why did i make this</h1>
As stated in the beginning, as far as i'm aware, there doesn't exist any version of nsdec (the original decryptor for script files in the visual novel engine NScripter) and nscmake (the encryptor) for systems other than windows, and it is close-source like its SDK. (original SDK at http://nscripter.insani.org/sdk.html)<br>

<h2>Usage:</h2>
  <b>to decrypt a script </b>
    Place the executable in the same folder as the script file named nscript.dat and
    Run it (it should take a few seconds depending on the length of the script, it should NOT trigger any antivirus, read the readme.txt in the release)<br>
  <b>to encrypt a script</b>, likewise, place the executable in the same folder as the script that you need to encrypt, note that the script has to be a text file called nscript.txt<br>
  
 
<h2>Compiling from source:</h2>
  <b>NOTE: you will need a compiler that supports C99 or later</b><br><br>
  for Linux:<br>
  $: gcc -o rdat.out rdat.c && chmod +x ./rdat.out <br><br>
  for Windows:<br>
  > gcc -o rdat.exe rdat.c <br>
 
