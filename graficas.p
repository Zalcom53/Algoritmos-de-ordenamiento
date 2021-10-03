reset
set zeroaxis lt -1
set xtics axis
set ytics axis
set xlabel 'n'
set ylabel 'Valor'
set title 'Graficas'
set xrange[-10:10]
set yrange[-3:3]
set grid 
set xtics 20
plot log10(x) with lines lw 5,x with lines lw 5,x*log10(x) with lines lw 5, x**2 with lines lw 5,x**3 with lines lw 5
