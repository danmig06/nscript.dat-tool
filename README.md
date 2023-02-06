# nscript.dat-tool
decryptor/encryptor for NScripter's nscript.dat files, a reverse engineering of the original windows-only nsdec.exe tool

As stated above, as far as i'm aware, there doesn't exist any copy of nsdec (the original decryptor for script files in the visual novel engine NScripter) and nscmake (the encryptor) for systems other than windows, and it is close-source like its engine. (original sdk at http://nscripter.insani.org/sdk.html)<br>

<h2>Usage:</h2>
  <h4>to decrypt a script:</h4><br>
  <ol>
    <li>Place the executable in the same folder as the script file named nscript.dat</li>
    <li>Run the executable (it should take a few seconds depending on the length of the script)</li>
   </ol>
  to encrypt a script, likewise, place the executable in the same folder as the script that you need to encrypt, note that the script has to be a text file called nscript.txt
  
 
<h2>Compiling from source:</h2>
  <b>NOTE: you will need a compiler that support C99 or later</b> <br><br>
  for Linux:<br>
  $: gcc -o rdat.out rdat.c && chmod +x ./rdat.out <br><br>
  for Windows:<br>
  > gcc -o rdat.exe rdat.c <br>
 
