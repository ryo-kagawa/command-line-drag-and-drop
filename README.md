# command-line-drag-and-drop

batファイルにD&Dをすると扱えない文字や特殊な制御が必要な文字が存在するのでそれを楽することを目的として作成しました  
このプログラムと同名の名称でiniファイルに書かれたprogramFileに引数をそのまま渡すだけのプログラムです  

32bitの場合はRelease/x86を64bitの場合はRelease/x64を利用してください  

例として、command-line-drag-and-drop.exeを実行した場合はcommand-line-drag-and-drop.iniのiniファイルを見ます  
command-line-drag-and-drop.exeは目的に応じてファイル名を変更することを前提としていますのでpurpose-name.exe等に名称を変更できます（その場合はiniファイルも同様にpurpose-name.iniと変更すること）

iniファイルの中身のprogramFileを実行したいプログラム、バッチファイルをフルパスで記述してください
