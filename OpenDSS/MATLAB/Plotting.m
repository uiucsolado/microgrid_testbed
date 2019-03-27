pmaxsum = sum(power_max);
pminsum = sum(power_min);
psetsum = sum(power_setpoints);

for i = 1:length(regdLog)
    
   powerCalc(i) = psetsum + regdLog(i)*(pmaxsum - psetsum) - (3773/3); 
    
end

% errorPower = powerCalc(74:142);
% error = powerCalc(74:142)*0.05;
% errorTime = time(74:142);
% 
% for i = 1:(length(errorPower)/5)
%     
%    errorPowerAdj(i) = errorPower(i*5);
%    errorAdj(i) = error(i*5);
%    errorTimeAdj(i) = errorTime(i*5);
%     
% end

figure()
hold on
plot(time, tieLineRealA,'b','LineWidth', 3);
title('Real Power at 69kV Tie Line (Phase A), OpenDSS Cosimulation');
ylabel('Real Power (kW)');
plot(time,powerCalc,'r','LineWidth',2);
% errorbar(errorTimeAdj, errorPowerAdj,errorAdj,'-r','LineWidth', 2);
xlim([10 250]);
xlabel('Time(s)');
hold off