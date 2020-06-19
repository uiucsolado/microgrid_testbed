function regd = send_regd_100(reg)
 s = serial('COM4', 'BaudRate', 38400);
 fopen(s);
 fprintf(s, 'D');
 regd = reg;
 disp(regd);
 pause(0.5);
 fprintf(s , '%f\n', regd);
 fclose(s);
end