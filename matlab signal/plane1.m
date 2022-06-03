which -all zplane
b=[1  -1.6180 1]
a=[1 -1.5161 0.878]
aroots=roots(a)
broots=roots(b)
freqz(b,a,255,500)
%zplane(b,a)

