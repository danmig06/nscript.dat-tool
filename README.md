# nscript.dat-tool
this is a decryptor/encryptor for NScripter's nscript.dat files, a reverse engineering of the original windows-only nsdec.exe tool, it <b>should</b> (because it seems that every game written in NScripter either uses scripts in this format, use plaintext as a script, or put the script in an archive file) work with every game that uses 1.0/2.0 version the engine and use "compiled" scripts, the games i saw that fall in this category are:<br>
<ul>  
<li>Tsukihime (the 2000 version) by TYPE-MOON</li>
<li>Kagetsu Tohya (2001) by TYPE-MOON</li>
<li>Rose Guns Days (2012) by 07th Expantion</li>
<li>Tsuki wa Higashi ni wa Nishi ni (2003) by AUGUST</li>
</ul><br>
of course, these are only the games that i know use compiled nscript.dat files as their script, if you spot a nscript.dat file in a game's directory, this tool should work anyway, as for the newer version of the engine, P(progressive)O(open)Nscripter, i have not yet tested the algorithm aganist pscript.dat, that i personally think is encoded in a similar manner, i recommend to try that as well, as a fun fact, games that use plaintext, like Umineko no Naku Koro ni (by 07th Expansion) use a file called 0.u as their script<br>
you can find the list of all the games that use NScripter <a href="https://en.m.wikipedia.org/wiki/Category:NScripter_games">here</a>.<br>

As stated in the beginning, as far as i'm aware, there doesn't exist any version of nsdec (the original decryptor for script files in the visual novel engine NScripter) and nscmake (the encryptor) for systems other than windows, and it is close-source like its engine. (original sdk at http://nscripter.insani.org/sdk.html)<br>

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
 
