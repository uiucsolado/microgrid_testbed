 s = serial('COM4', 'BaudRate', 38400);
 fopen(s);
 signal_file = csvread("regd-test-wave.csv", 0, 0);
 
 regd_val = 0;
 [r,c] = size(signal_file);
 
 for i = 1:r-1
     
     regd_val = signal_file(i,2);
     fprintf(s, 'D');
     fprintf(s , '%f\n', regd_val);
     disp('Regulation signal %i sent to aggregator', i);
     disp(regd);
     pause(2);
     
 end
 
 fclose(s);