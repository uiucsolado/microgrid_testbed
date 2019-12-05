filename = 'regd-test-wave.csv';
sheet = 1;
Time_Range = 'A169:A290';
Regd_Range = 'B169:B290';
Time = xlsread(filename,sheet,Time_Range);
Regd = xlsread(filename,sheet,Regd_Range);

disp('regulation signal will start going to the aggregator');
for i = 1: 120
    s = serial('COM4', 'BaudRate', 38400);
    fopen(s);
    fprintf(s, 'D');
    disp(Regd(i));
    pause(0.5);
    fprintf(s , '%f\n', Regd(i));
    fclose(s);
    pause(1.5);
end
