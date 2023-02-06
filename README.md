# nscript.dat-tool
decryptor/encryptor for NScripter's nscript.dat files, a reverse engineering of the original windows-only nsdec.exe tool

As stated above, as far as i'm aware, there doesn't exist any copy of nsdec (the original decryptor for script files in the visual novel engine NScripter) for systems other than windows, and it is close-source like its engine. (original sdk at http://nscripter.insani.org/sdk.html)<br>

Usage:
  for decrypting a script:<br>
  <ol>
    <li>Place the executable in the same folder as the script file named nscript.dat</li>
    <li>Run the executable (it should take a few seconds depending on the length of the script)</li>
   </ol>
  for encrypting a script, likewise, place the executable in the same folder as the script that you need to encrypt, note that the script has to be a text file called nscript.txt
  
 
Compiling from source: <br>
  <b>NOTE: you will need a compiler that support C99 or later</b> <br><br>
  for Linux:<br>
  ```gcc -o rdat.out rdat.c && chmod +x rdat.out```<br><br>
  for Windows:<br>
  ```gcc -o rdat.exe rdat.c```<br>
 
