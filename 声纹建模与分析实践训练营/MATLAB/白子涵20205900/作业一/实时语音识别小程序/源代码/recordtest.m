function recordtest(t,n)    %周期,周期数量
global txts;
H = audiorecorder(16000,16,2);      
H.record;
pause(t); 
Hm=H.getaudiodata('double');
H1=Hm(:,1);
audiowrite('ls.wav',Hm,16000);

 while n>0
H.resume;
pause(t); 
H.pause;
audiowrite('ls.wav',H1,16000);
Hm=H.getaudiodata('double');
H1=Hm(:,1);
txts=HaoAudioTxt('ls.wav');
   n=n-1;
 end
 see(txts);
 pause(1);
end
