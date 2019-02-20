function regd = send_regd(P,d1,d2,d3,d4)
 s = serial('COM4', 'BaudRate', 38400);
 fopen(s);
 fprintf(s, 'D');
 Pmax = 20000 + (d2*35000 + (1-d2)*5000) + (d3*35000 + (1-d3)*5000) + (d4*35000 + (1-d4)*5000);
 Pmin = (d1*-20000 + (1-d1)*0) + (d2*1000 + (1-d2)*5000) + (d3*1000 + (1-d3)*5000) + (d4*1000 + (1-d4)*5000);
 Psp = 0 + 5000 + 5000 + 5000;
 if (P>Psp)&& (P<Pmax)
     regd = (P-Psp)/(Pmax - Psp);
%      disp('condition 1')
 elseif (P> (Pmin)) && (P<=Psp)
     regd = (P-Psp)/(abs(Pmin)+Psp);
%      disp('condition 2')
 elseif (P<=-Pmin)
     regd = -1.0;
%      disp('condition 3')
 else 
     regd = 1.0;
%%      disp('condition 4')
 end
 disp('regulation signal sent to aggregator');
 disp(regd);
 pause(0.5);
 fprintf(s , '%f\n', regd);
 fclose(s);
 %making a local change - SN
end